#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CInButtonState.hpp"
#include "source2sdk/client/CPlayerPawnComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x258
        // Has VTable
        #pragma pack(push, 1)
        class CPlayer_MovementServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            std::int32_t m_nImpulse; // 0x48            
            uint8_t _pad004c[0x4]; // 0x4c
            // metadata: MNotSaved
            source2sdk::client::CInButtonState m_nButtons; // 0x50            
            std::uint64_t m_nQueuedButtonDownMask; // 0x70            
            std::uint64_t m_nQueuedButtonChangeMask; // 0x78            
            std::uint64_t m_nButtonDoublePressed; // 0x80            
            // metadata: MNotSaved
            std::uint32_t m_pButtonPressedCmdNumber[64]; // 0x88            
            // metadata: MNotSaved
            std::uint32_t m_nLastCommandNumberProcessed; // 0x188            
            uint8_t _pad018c[0x4]; // 0x18c
            std::uint64_t m_nToggleButtonDownMask; // 0x190            
            uint8_t _pad0198[0x8]; // 0x198
            float m_flCmdForwardMove; // 0x1a0            
            float m_flCmdLeftMove; // 0x1a4            
            float m_flCmdUpMove; // 0x1a8            
            float m_flMaxspeed; // 0x1ac            
            float m_arrForceSubtickMoveWhen[4]; // 0x1b0            
            float m_flForwardMove; // 0x1c0            
            float m_flLeftMove; // 0x1c4            
            float m_flUpMove; // 0x1c8            
            Vector m_vecLastMovementImpulses; // 0x1cc            
            uint8_t _pad01d8[0x68]; // 0x1d8
            QAngle m_vecOldViewAngles; // 0x240            
            uint8_t _pad024c[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_MovementServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPlayer_MovementServices) == 0x258);
    };
};
