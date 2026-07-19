#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Pickup_VData.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9f8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Pickup_Gold_VData : public source2sdk::client::CCitadel_Pickup_VData
        {
        public:
            float m_flGoldAmount; // 0x9f0            
            float m_flGoldPerMinuteAmount; // 0x9f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Pickup_Gold_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Pickup_Gold_VData) == 0x9f8);
    };
};
