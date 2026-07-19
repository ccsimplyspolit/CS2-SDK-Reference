#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBtNode.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0xf8
        // Has VTable
        #pragma pack(push, 1)
        class CBtActionAim : public source2sdk::server::CBtNode
        {
        public:
            uint8_t _pad0058[0x10]; // 0x58
            CUtlString m_szSensorInputKey; // 0x68            
            uint8_t _pad0070[0x10]; // 0x70
            CUtlString m_szAimReadyKey; // 0x80            
            float m_flZoomCooldownTimestamp; // 0x88            
            bool m_bDoneAiming; // 0x8c            
            uint8_t _pad008d[0x3]; // 0x8d
            float m_flLerpStartTime; // 0x90            
            float m_flNextLookTargetLerpTime; // 0x94            
            float m_flPenaltyReductionRatio; // 0x98            
            QAngle m_NextLookTarget; // 0x9c            
            source2sdk::server::CountdownTimer m_AimTimer; // 0xa8            
            source2sdk::server::CountdownTimer m_SniperHoldTimer; // 0xc0            
            source2sdk::server::CountdownTimer m_FocusIntervalTimer; // 0xd8            
            bool m_bAcquired; // 0xf0            
            uint8_t _pad00f1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBtActionAim because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBtActionAim) == 0xf8);
    };
};
