#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/INavPathCostAreaFilter.hpp"
#include "source2sdk/server/CMarkupSearchHelper.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2b8
        // Has VTable
        // Construct allowed
        // Construct disallowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMarkupSearch_PathCostAreaFilter : public source2sdk::client::INavPathCostAreaFilter
        {
        public:
            source2sdk::server::CMarkupSearchHelper m_searchHelper; // 0x8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMarkupSearch_PathCostAreaFilter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMarkupSearch_PathCostAreaFilter) == 0x2b8);
    };
};
