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
        // Size: 0x700
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Pudge_MeatHook : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            VectorWS m_vEndpoint; // 0x6a8            
            std::int32_t m_nConsecutiveHits; // 0x6b4            
            bool m_bIsVectorTargeted; // 0x6b8            
            uint8_t _pad06b9[0x3]; // 0x6b9
            VectorWS m_vTurnLocation; // 0x6bc            
            Vector m_vDirectionAfterTurn; // 0x6c8            
            bool m_bHasTurned; // 0x6d4            
            uint8_t _pad06d5[0x3]; // 0x6d5
            float m_flDistanceAfterTurn; // 0x6d8            
            VectorWS m_vFinalPosition; // 0x6dc            
            float reveal_duration; // 0x6e8            
            std::int32_t curve_hook; // 0x6ec            
            float curve_hook_turn_rate; // 0x6f0            
            std::int32_t curve_hook_debug; // 0x6f4            
            float m_fTimeRemaining; // 0x6f8            
            float m_flFacingTarget; // 0x6fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Pudge_MeatHook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Pudge_MeatHook) == 0x700);
    };
};
