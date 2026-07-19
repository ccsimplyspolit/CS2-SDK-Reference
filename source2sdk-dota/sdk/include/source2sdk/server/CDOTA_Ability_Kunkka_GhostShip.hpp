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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Kunkka_GhostShip : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float buff_duration; // 0x580            
            float stun_duration; // 0x584            
            float ghostship_width; // 0x588            
            float ghostship_width_scepter; // 0x58c            
            std::int32_t num_cannon_volleys; // 0x590            
            float rum_factor; // 0x594            
            VectorWS m_vFinalDestination; // 0x598            
            VectorWS m_vStartingPoint; // 0x5a4            
            std::int32_t m_hProjectileID; // 0x5b0            
            uint8_t _pad05b4[0x3c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Kunkka_GhostShip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Kunkka_GhostShip) == 0x5f0);
    };
};
