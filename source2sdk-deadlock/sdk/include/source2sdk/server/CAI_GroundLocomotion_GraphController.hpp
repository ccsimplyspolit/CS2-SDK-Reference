#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"
#include "source2sdk/server/CRelativeTransform.hpp"

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
        // Size: 0x460
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAI_GroundLocomotion_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            source2sdk::server::CRelativeTransform m_stopTarget; // 0x90            
            source2sdk::server::CRelativeTransform m_idleTurnTarget; // 0xc0            
            // m_tStopTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CTransform> m_tStopTarget;
            char m_tStopTarget[0x18]; // 0xf0            
            // m_tIdleTurnTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CTransform> m_tIdleTurnTarget;
            char m_tIdleTurnTarget[0x18]; // 0x108            
            // m_sMovementStopType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementStopType;
            char m_sMovementStopType[0x30]; // 0x120            
            // m_sMovementState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementState;
            char m_sMovementState[0x30]; // 0x150            
            // m_sMovementStrafeDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementStrafeDirection;
            char m_sMovementStrafeDirection[0x30]; // 0x180            
            // m_sMovementCustom has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementCustom;
            char m_sMovementCustom[0x30]; // 0x1b0            
            // m_sMovementCustomShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementCustomShared;
            char m_sMovementCustomShared[0x30]; // 0x1e0            
            // m_vMovementDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vMovementDirection;
            char m_vMovementDirection[0x28]; // 0x210            
            // m_vMovementDirectionCurrent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vMovementDirectionCurrent;
            char m_vMovementDirectionCurrent[0x28]; // 0x238            
            // m_vMovementPlantedTurnDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vMovementPlantedTurnDirection;
            char m_vMovementPlantedTurnDirection[0x28]; // 0x260            
            // m_flMovementTargetSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flMovementTargetSpeed;
            char m_flMovementTargetSpeed[0x28]; // 0x288            
            // m_flMovementCurrentSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flMovementCurrentSpeed;
            char m_flMovementCurrentSpeed[0x28]; // 0x2b0            
            // m_flMovementLean has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flMovementLean;
            char m_flMovementLean[0x28]; // 0x2d8            
            // m_flMovementStrafeAngleForward has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flMovementStrafeAngleForward;
            char m_flMovementStrafeAngleForward[0x28]; // 0x300            
            // m_flMovementStrafeAngleBackward has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flMovementStrafeAngleBackward;
            char m_flMovementStrafeAngleBackward[0x28]; // 0x328            
            // m_flDistanceToStop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flDistanceToStop;
            char m_flDistanceToStop[0x28]; // 0x350            
            // m_bMovementCustomFromMovement has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bMovementCustomFromMovement;
            char m_bMovementCustomFromMovement[0x28]; // 0x378            
            CAnimGraphParamAutoResetRef m_bMovementStateRestart; // 0x3a0            
            // m_sMovementDebugBadZoneState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementDebugBadZoneState;
            char m_sMovementDebugBadZoneState[0x30]; // 0x3d0            
            CAnimGraphTagOptionalRef m_sMovementRightBadZonePassAllowed; // 0x400            
            CAnimGraphTagOptionalRef m_sMovementLeftBadZonePassAllowed; // 0x420            
            CAnimGraphTagOptionalRef m_sMovementDisableStateTimeout; // 0x440            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_GroundLocomotion_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_GroundLocomotion_GraphController) == 0x460);
    };
};
