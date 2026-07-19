#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelBodygroupSetting_t
        {
        public:
            // metadata: MPropertyAttributeEditor "ModelDocPicker( MODELDOC_PICK_TYPE_BODY_GROUP )"
            CUtlStringToken m_sBodyGroupName; // 0x0            
            // metadata: MPropertyDescription "Use this choice for the specified bodygroup"
            std::int32_t m_nBodygroupChoice; // 0x4            
            std::int32_t m_nPriority; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelBodygroupSetting_t, m_sBodyGroupName) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelBodygroupSetting_t, m_nBodygroupChoice) == 0x4);
        static_assert(offsetof(source2sdk::client::CitadelBodygroupSetting_t, m_nPriority) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CitadelBodygroupSetting_t) == 0xc);
    };
};
