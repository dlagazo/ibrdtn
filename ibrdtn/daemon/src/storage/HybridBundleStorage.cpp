/*
 * HybridBundleStorage.cpp
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

#include "storage/HybridBundleStorage.h"

namespace dtn
{
	namespace storage
	{
		const std::string HybridBundleStorage::TAG = "HybridBundleStorage";

		HybridBLOBProvider::HybridBLOBProvider()
		{

		}

		HybridBLOBProvider::~HybridBLOBProvider()
		{

		}

		ibrcommon::BLOB::Reference HybridBLOBProvider::create()
		{

		}

		HybridBundleStorage::HybridBundleStorage(const ibrcommon::File &workdir, const dtn::data::Length maxsize, const unsigned int buffer_limit)
		 : dtn::storage::BundleStorage(maxsize), _path(workdir), _buffer_limit(buffer_limit)
		{

		}

		HybridBundleStorage::~HybridBundleStorage()
		{

		}

		const std::string HybridBundleStorage::getName() const
		{
			return TAG;
		}

		void HybridBundleStorage::componentUp() throw ()
		{

		}

		void HybridBundleStorage::componentDown() throw ()
		{

		}

		void HybridBundleStorage::store(const dtn::data::Bundle &bundle)
		{

		}

		bool HybridBundleStorage::contains(const dtn::data::BundleID &id)
		{
			return false;
		}

		dtn::data::MetaBundle HybridBundleStorage::info(const dtn::data::BundleID &id)
		{
			return dtn::data::MetaBundle();
		}

		dtn::data::Bundle HybridBundleStorage::get(const dtn::data::BundleID &id)
		{
			return dtn::data::Bundle();
		}

		void HybridBundleStorage::get(const BundleSelector &cb, BundleResult &result) throw (NoBundleFoundException, BundleSelectorException)
		{

		}

		const BundleSeeker::eid_set HybridBundleStorage::getDistinctDestinations()
		{
			return BundleSeeker::eid_set();
		}

		void HybridBundleStorage::remove(const dtn::data::BundleID &id)
		{

		}

		void HybridBundleStorage::releaseCustody(const dtn::data::EID &custodian, const dtn::data::BundleID &id)
		{

		}
	} /* namespace storage */
} /* namespace dtn */
