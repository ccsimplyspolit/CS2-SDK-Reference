#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x610
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_EarthSpirit_RollingBoulder : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad0580[0x10]; // 0x580
            std::int32_t radius; // 0x590            
            std::int32_t speed; // 0x594            
            std::int32_t rock_speed; // 0x598            
            std::int32_t damage; // 0x59c            
            std::int32_t damage_str; // 0x5a0            
            float distance; // 0x5a4            
            float rock_distance; // 0x5a8            
            float rock_distance_multiplier; // 0x5ac            
            float slow_duration; // 0x5b0            
            std::int32_t destroy_stone; // 0x5b4            
            bool can_roll_over_allied_heroes; // 0x5b8            
            uint8_t _pad05b9[0x3]; // 0x5b9
            float allied_hero_distance; // 0x5bc            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5c0            
            bool m_boulderSetposBool; // 0x5c4            
            uint8_t _pad05c5[0x3]; // 0x5c5
            std::int32_t m_nProjectileID; // 0x5c8            
            VectorWS m_vStartingLocation; // 0x5cc            
            VectorWS m_vProjectileLocation; // 0x5d8            
            Vector m_vDir; // 0x5e4            
            Vector m_vVel; // 0x5f0            
            bool m_bUsedStone; // 0x5fc            
            bool m_bRolledOverAlliedHero; // 0x5fd            
            uint8_t _pad05fe[0x2]; // 0x5fe
            Vector m_vRollDirection; // 0x600            
            uint8_t _pad060c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_EarthSpirit_RollingBoulder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_EarthSpirit_RollingBoulder) == 0x610);
    };
};
