#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

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
        // Size: 0x6e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_StormSpirit_BallLightning : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            bool m_bHasAutoRemnantTalent; // 0x6a8            
            uint8_t _pad06a9[0x3]; // 0x6a9
            float m_fAutoRemnantInterval; // 0x6ac            
            std::int32_t ball_lightning_initial_mana_base; // 0x6b0            
            float ball_lightning_initial_mana_percentage; // 0x6b4            
            std::int32_t ball_lightning_travel_cost_base; // 0x6b8            
            float ball_lightning_travel_cost_percent; // 0x6bc            
            std::int32_t m_iProjectileID; // 0x6c0            
            VectorWS m_vStartLocation; // 0x6c4            
            VectorWS m_vProjectileLocation; // 0x6d0            
            float m_fDistanceAccumulator; // 0x6dc            
            float m_fTalentDistanceAccumulator; // 0x6e0            
            std::int32_t scepter_remnant_interval; // 0x6e4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_StormSpirit_BallLightning because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_StormSpirit_BallLightning) == 0x6e8);
    };
};
