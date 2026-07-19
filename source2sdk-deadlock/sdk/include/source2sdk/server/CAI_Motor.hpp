#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/client/CSimpleSimTimer.hpp"
#include "source2sdk/client/StanceType_t.hpp"
#include "source2sdk/modellib/MovementGaitId_t.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xf40
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "StanceType_t m_nCurrentStance"
        #pragma pack(push, 1)
        class CAI_Motor : public source2sdk::client::CAI_Component
        {
        public:
            uint8_t _pad0050[0x10]; // 0x50
            // metadata: MNotSaved
            float m_flMoveInterval; // 0x60            
            float m_flYawSpeed; // 0x64            
            Vector m_vMoveVel; // 0x68            
            Vector m_vMoveVelNavigation; // 0x74            
            Vector m_vecAngularVelocity; // 0x80            
            source2sdk::client::CSimpleSimTimer m_timerFloorPointCached; // 0x8c            
            VectorWS m_vFloorPointCached; // 0x94            
            bool m_bFloorPointCachingEnabled; // 0xa0            
            bool m_bAllowFlyingAnimMovement; // 0xa1            
            uint8_t _pad00a2[0x3e]; // 0xa2
            float m_flSpeed; // 0xe0            
            bool m_bMovementActive; // 0xe4            
            uint8_t _pad00e5[0x3]; // 0xe5
            // metadata: MNotSaved
            Vector m_vBoundaryDistCachedPos; // 0xe8            
            // metadata: MNotSaved
            float m_flBoundaryDistCached; // 0xf4            
            uint8_t _pad00f8[0x8]; // 0xf8
            source2sdk::server::CAI_MotorGroundAnimGraph m_motorGroundAnimgraph; // 0x100            
            // metadata: MNotSaved
            bool m_bIsExecutingMoveSolve; // 0x820            
            uint8_t _pad0821[0x567]; // 0x821
            CGlobalSymbol m_pMovementGaitSetRequests[3]; // 0xd88            
            CGlobalSymbol m_pMovementGaitRequests[4]; // 0xda0            
            CGlobalSymbol m_sDesiredMovementGaitSetId; // 0xdc0            
            CGlobalSymbol m_sDesiredMovementSettingsId; // 0xdc8            
            source2sdk::modellib::MovementGaitId_t m_sDesiredMovementGaitId; // 0xdd0            
            CGlobalSymbol m_sCurrentMovementGaitSetId; // 0xdd8            
            CGlobalSymbol m_sCurrentMovementSettingsId; // 0xde0            
            source2sdk::modellib::MovementGaitId_t m_sCurrentMovementGaitId; // 0xde8            
            source2sdk::client::StanceType_t m_pStanceRequests[3]; // 0xdf0            
            bool m_bStanceCapabilities[3]; // 0xdfc            
            bool m_bTemporaryDisabledStances[3]; // 0xdff            
            uint8_t _pad0e02[0x2]; // 0xe02
            source2sdk::client::StanceType_t m_nDesiredStance; // 0xe04            
            // metadata: MNetworkEnable
            source2sdk::client::StanceType_t m_nCurrentStance; // 0xe08            
            uint8_t _pad0e0c[0x134];
            
            // Datamap fields:
            // void m_animPath; // 0x828
            // void m_pNavLinkMotor; // 0x840
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_Motor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_Motor) == 0xf40);
    };
};
