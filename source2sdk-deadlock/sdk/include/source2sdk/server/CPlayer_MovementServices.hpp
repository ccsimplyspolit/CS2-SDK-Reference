#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CInButtonState.hpp"
#include "source2sdk/client/CPlayerPawnComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x240
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "ButtonBitMask_t m_nToggleButtonDownMask"
        // static metadata: MNetworkVarNames "float32 m_flMaxspeed"
        // static metadata: MNetworkVarNames "float32 m_arrForceSubtickMoveWhen"
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
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint64_t m_nToggleButtonDownMask; // 0x190            
            uint8_t _pad0198[0x8]; // 0x198
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "12"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "2048,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flMaxspeed; // 0x1a0            
            // metadata: MNetworkEnable
            float m_arrForceSubtickMoveWhen[4]; // 0x1a4            
            float m_flForwardMove; // 0x1b4            
            float m_flLeftMove; // 0x1b8            
            float m_flUpMove; // 0x1bc            
            Vector m_vecLastMovementImpulses; // 0x1c0            
            uint8_t _pad01cc[0x5c]; // 0x1cc
            QAngle m_vecOldViewAngles; // 0x228            
            uint8_t _pad0234[0xc];
            
            // Datamap fields:
            // void m_pButtonPressedCmdNumber; // 0x88
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_MovementServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayer_MovementServices) == 0x240);
    };
};
