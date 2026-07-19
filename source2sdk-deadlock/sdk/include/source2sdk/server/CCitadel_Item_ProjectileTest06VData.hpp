#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Item_ProjectileTestVData.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x18d8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Item_ProjectileTest06VData : public source2sdk::server::CCitadel_Item_ProjectileTestVData
        {
        public:
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flMaxDrag; // 0x18c8            
            float m_flMinDrag; // 0x18cc            
            float m_flMinGravity; // 0x18d0            
            float m_flMaxGravity; // 0x18d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_ProjectileTest06VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_ProjectileTest06VData) == 0x18d8);
    };
};
