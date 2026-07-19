#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Item.hpp"
#include "source2sdk/server/CitadelAbilityProjectileCreateInfo_t.hpp"

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
        // Size: 0x1070
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Item_BaseProjectileAOEModifier : public source2sdk::server::CCitadel_Item
        {
        public:
            VectorWS m_vLaunchPosition; // 0xf78            
            QAngle m_qLaunchAngle; // 0xf84            
            uint8_t _pad0f90[0x80]; // 0xf90
            source2sdk::server::CitadelAbilityProjectileCreateInfo_t m_projInfo; // 0x1010            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_BaseProjectileAOEModifier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_BaseProjectileAOEModifier) == 0x1070);
    };
};
