#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x840
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncRotating : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0x778            
            source2sdk::entity2::CEntityIOOutput m_OnStarted; // 0x790            
            source2sdk::entity2::CEntityIOOutput m_OnReachedStart; // 0x7a8            
            RotationVector m_localRotationVector; // 0x7c0            
            float m_flSpeed; // 0x7cc            
            float m_flFanFriction; // 0x7d0            
            float m_flAttenuation; // 0x7d4            
            float m_flVolume; // 0x7d8            
            float m_flTargetSpeed; // 0x7dc            
            float m_flMaxSpeed; // 0x7e0            
            float m_flBlockDamage; // 0x7e4            
            CGameSoundEventName m_NoiseRunning; // 0x7e8            
            bool m_bReversed; // 0x7f0            
            bool m_bAccelDecel; // 0x7f1            
            uint8_t _pad07f2[0x16]; // 0x7f2
            QAngle m_prevLocalAngles; // 0x808            
            QAngle m_angStart; // 0x814            
            bool m_bStopAtStartPos; // 0x820            
            uint8_t _pad0821[0x3]; // 0x821
            // metadata: MNotSaved
            Vector m_vecClientOrigin; // 0x824            
            // metadata: MNotSaved
            QAngle m_vecClientAngles; // 0x830            
            uint8_t _pad083c[0x4];
            
            // Datamap fields:
            // bool movewithoutpushingblockers; // 0x7fffffff
            // float InputSetSpeed; // 0x0
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputToggle; // 0x0
            // void InputReverse; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartBackward; // 0x0
            // void InputStopAtStartPos; // 0x0
            // void InputSnapToStartPos; // 0x0
            // Vector InputSetStartPos; // 0x0
            // void InputEnableAccelDecel; // 0x0
            // void InputDisableAccelDecel; // 0x0
            // int32_t fanfriction; // 0x7fffffff
            // int32_t Volume; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncRotating because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncRotating) == 0x840);
    };
};
