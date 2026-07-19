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
        // Size: 0x848
        // Has VTable
        // 
        // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
        // static metadata: MNetworkOverride "m_flSimulationTime CBaseEntity"
        #pragma pack(push, 1)
        class CFuncRotating : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0x780            
            source2sdk::entity2::CEntityIOOutput m_OnStarted; // 0x798            
            source2sdk::entity2::CEntityIOOutput m_OnReachedStart; // 0x7b0            
            RotationVector m_localRotationVector; // 0x7c8            
            float m_flFanFriction; // 0x7d4            
            float m_flAttenuation; // 0x7d8            
            float m_flVolume; // 0x7dc            
            float m_flTargetSpeed; // 0x7e0            
            float m_flMaxSpeed; // 0x7e4            
            float m_flBlockDamage; // 0x7e8            
            uint8_t _pad07ec[0x4]; // 0x7ec
            CUtlSymbolLarge m_NoiseRunning; // 0x7f0            
            bool m_bReversed; // 0x7f8            
            bool m_bAccelDecel; // 0x7f9            
            uint8_t _pad07fa[0x16]; // 0x7fa
            QAngle m_prevLocalAngles; // 0x810            
            QAngle m_angStart; // 0x81c            
            bool m_bStopAtStartPos; // 0x828            
            uint8_t _pad0829[0x3]; // 0x829
            // metadata: MNotSaved
            Vector m_vecClientOrigin; // 0x82c            
            // metadata: MNotSaved
            QAngle m_vecClientAngles; // 0x838            
            uint8_t _pad0844[0x4];
            
            // Datamap fields:
            // bool movewithoutpushingblockers; // 0x7fffffff
            // void CFuncRotatingSpinUpMove; // 0x0
            // void CFuncRotatingSpinDownMove; // 0x0
            // void CFuncRotatingHurtTouch; // 0x0
            // void CFuncRotatingRotatingUse; // 0x0
            // void CFuncRotatingRotateMove; // 0x0
            // void CFuncRotatingReverseMove; // 0x0
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
            // void m_nNoiseRunningGuid; // 0x7fc
            // int32_t fanfriction; // 0x7fffffff
            // int32_t Volume; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncRotating because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncRotating) == 0x848);
    };
};
