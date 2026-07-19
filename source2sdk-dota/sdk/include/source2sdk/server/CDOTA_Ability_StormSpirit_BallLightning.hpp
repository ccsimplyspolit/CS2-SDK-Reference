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
        // Size: 0x5d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_StormSpirit_BallLightning : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad0580[0x10]; // 0x580
            bool m_bHasAutoRemnantTalent; // 0x590            
            uint8_t _pad0591[0x3]; // 0x591
            float m_fAutoRemnantInterval; // 0x594            
            std::int32_t ball_lightning_initial_mana_base; // 0x598            
            float ball_lightning_initial_mana_percentage; // 0x59c            
            std::int32_t ball_lightning_travel_cost_base; // 0x5a0            
            float ball_lightning_travel_cost_percent; // 0x5a4            
            std::int32_t m_iProjectileID; // 0x5a8            
            VectorWS m_vStartLocation; // 0x5ac            
            VectorWS m_vProjectileLocation; // 0x5b8            
            float m_fDistanceAccumulator; // 0x5c4            
            float m_fTalentDistanceAccumulator; // 0x5c8            
            std::int32_t scepter_remnant_interval; // 0x5cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_StormSpirit_BallLightning because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_StormSpirit_BallLightning) == 0x5d0);
    };
};
