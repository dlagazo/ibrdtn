/*
 * HybridBundleStorage.h
 *
 * Copyright (C) 2015 Johannes Morgenroth
 *
 * Written-by: Johannes Morgenroth <jm@m-network.de>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef HYBRIDBUNDLESTORAGE_H_
#define HYBRIDBUNDLESTORAGE_H_

#include "Component.h"
#include "core/BundleCore.h"
#include "storage/BundleStorage.h"

namespace dtn
{
	namespace storage
	{
		class HybridBLOBProvider : public ibrcommon::BLOB::Provider
		{
		public:
			HybridBLOBProvider();
			virtual ~HybridBLOBProvider();

			virtual ibrcommon::BLOB::Reference create();
		};

		class HybridBundleStorage : public BundleStorage, public dtn::daemon::IntegratedComponent
		{
			static const std::string TAG;

		public:
			HybridBundleStorage(const ibrcommon::File &workdir, const dtn::data::Length maxsize = 0, const unsigned int buffer_limit = 0);
			virtual ~HybridBundleStorage();

			const std::string getName() const;

			virtual void store(const dtn::data::Bundle &bundle);

			virtual bool contains(const dtn::data::BundleID &id);

			virtual dtn::data::MetaBundle info(const dtn::data::BundleID &id);

			virtual dtn::data::Bundle get(const dtn::data::BundleID &id);

			virtual void get(const BundleSelector &cb, BundleResult &result) throw (NoBundleFoundException, BundleSelectorException);

			virtual const BundleSeeker::eid_set getDistinctDestinations();

			virtual void remove(const dtn::data::BundleID &id);

			virtual void releaseCustody(const dtn::data::EID &custodian, const dtn::data::BundleID &id);

		protected:
			virtual void componentUp() throw ();
			virtual void componentDown() throw ();

		private:
			const ibrcommon::File _path;
			const unsigned int _buffer_limit;
		};
	} /* namespace storage */
} /* namespace dtn */

#endif /* HYBRIDBUNDLESTORAGE_H_ */
