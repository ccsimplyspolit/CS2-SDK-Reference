#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"

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
        // Size: 0x510
        // Has VTable
        #pragma pack(push, 1)
        class CTimerEntity : public source2sdk::server::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnTimer; // 0x4a0            
            source2sdk::entity2::CEntityIOOutput m_OnTimerHigh; // 0x4b8            
            source2sdk::entity2::CEntityIOOutput m_OnTimerLow; // 0x4d0            
            std::int32_t m_iDisabled; // 0x4e8            
            float m_flInitialDelay; // 0x4ec            
            float m_flRefireTime; // 0x4f0            
            bool m_bUpDownState; // 0x4f4            
            uint8_t _pad04f5[0x3]; // 0x4f5
            std::int32_t m_iUseRandomTime; // 0x4f8            
            bool m_bPauseAfterFiring; // 0x4fc            
            uint8_t _pad04fd[0x3]; // 0x4fd
            float m_flLowerRandomBound; // 0x500            
            float m_flUpperRandomBound; // 0x504            
            float m_flRemainingTime; // 0x508            
            bool m_bPaused; // 0x50c            
            uint8_t _pad050d[0x3];
            
            // Datamap fields:
            // float InputRefireTime; // 0x0
            // void InputFireTimer; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
            // float InputAddToTimer; // 0x0
            // void InputResetTimer; // 0x0
            // float InputSubtractFromTimer; // 0x0
            // void InputPauseTimer; // 0x0
            // void InputUnpauseTimer; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTimerEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTimerEntity) == 0x510);
    };
};
