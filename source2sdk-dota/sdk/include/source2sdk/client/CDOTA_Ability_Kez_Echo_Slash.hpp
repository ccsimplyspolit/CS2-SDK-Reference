#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Ability_Kez_BaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x720
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Kez_Echo_Slash : public source2sdk::client::C_DOTA_Ability_Kez_BaseAbility
        {
        public:
            Vector m_vInitialDirection; // 0x6b0            
            VectorWS m_vStartPos; // 0x6bc            
            uint8_t _pad06c8[0x8]; // 0x6c8
            CTransformWS m_InitialTransform; // 0x6d0            
            float katana_radius; // 0x6f0            
            float katana_distance; // 0x6f4            
            float travel_distance; // 0x6f8            
            std::int32_t katana_strikes; // 0x6fc            
            float katana_echo_damage; // 0x700            
            float strike_interval; // 0x704            
            float effect_duration; // 0x708            
            std::int32_t m_nStrikesLeft; // 0x70c            
            source2sdk::entity2::GameTime_t m_NextStrikeTime; // 0x710            
            bool m_bFlutter; // 0x714            
            uint8_t _pad0715[0x3]; // 0x715
            source2sdk::client::ParticleIndex_t m_nFXCast; // 0x718            
            uint8_t _pad071c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Kez_Echo_Slash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Kez_Echo_Slash) == 0x720);
    };
};
