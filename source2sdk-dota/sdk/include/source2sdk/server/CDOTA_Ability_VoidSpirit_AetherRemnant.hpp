#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_VoidSpirit_AetherRemnant : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float start_radius; // 0x580            
            float end_radius; // 0x584            
            float remnant_watch_distance; // 0x588            
            float projectile_speed; // 0x58c            
            uint8_t _pad0590[0x14]; // 0x590
            VectorWS m_vDashPosition; // 0x5a4            
            VectorWS m_vFacePosition; // 0x5b0            
            VectorWS m_vEndpoint; // 0x5bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_VoidSpirit_AetherRemnant because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_VoidSpirit_AetherRemnant) == 0x5c8);
    };
};
