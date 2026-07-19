#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"

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
        // Size: 0x5c8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAI_GroundLocomotion_AG1_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_vMovementCustomTargetPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vMovementCustomTargetPosition;
            char m_vMovementCustomTargetPosition[0x28]; // 0x90            
            // m_vMovementMantleTargetPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vMovementMantleTargetPosition;
            char m_vMovementMantleTargetPosition[0x28]; // 0xb8            
            // m_vMovementStartFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vMovementStartFacePosition;
            char m_vMovementStartFacePosition[0x28]; // 0xe0            
            // m_vMovementStopFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vMovementStopFacePosition;
            char m_vMovementStopFacePosition[0x28]; // 0x108            
            // m_vMovementHopFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vMovementHopFacePosition;
            char m_vMovementHopFacePosition[0x28]; // 0x130            
            // m_vMovementStopPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vMovementStopPosition;
            char m_vMovementStopPosition[0x28]; // 0x158            
            // m_vMovementIdleTurnFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vMovementIdleTurnFacePosition;
            char m_vMovementIdleTurnFacePosition[0x28]; // 0x180            
            // m_vMovementPlantedTurnFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vMovementPlantedTurnFacePosition;
            char m_vMovementPlantedTurnFacePosition[0x28]; // 0x1a8            
            // m_vMovementDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vMovementDirection;
            char m_vMovementDirection[0x28]; // 0x1d0            
            // m_flMovementStopDesiredHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flMovementStopDesiredHeading;
            char m_flMovementStopDesiredHeading[0x28]; // 0x1f8            
            // m_flMovementDesiredHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flMovementDesiredHeading;
            char m_flMovementDesiredHeading[0x28]; // 0x220            
            // m_flMovementDesiredHeadingDelta has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flMovementDesiredHeadingDelta;
            char m_flMovementDesiredHeadingDelta[0x28]; // 0x248            
            // m_flMovementHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flMovementHeading;
            char m_flMovementHeading[0x28]; // 0x270            
            // m_bMovementCodeDriven has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bMovementCodeDriven;
            char m_bMovementCodeDriven[0x28]; // 0x298            
            // m_bMovementShouldMove has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bMovementShouldMove;
            char m_bMovementShouldMove[0x28]; // 0x2c0            
            // m_sMovementHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementHeading;
            char m_sMovementHeading[0x30]; // 0x2e8            
            // m_sMovementDesiredHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementDesiredHeading;
            char m_sMovementDesiredHeading[0x30]; // 0x318            
            CAnimGraphTagOptionalRef m_sMovementStateMachineActive; // 0x348            
            CAnimGraphTagOptionalRef m_sMovementStopsEnabled; // 0x368            
            CAnimGraphTagOptionalRef m_sMovementInstantStopsEnabled; // 0x388            
            CAnimGraphTagOptionalRef m_sMovementStartsEnabled; // 0x3a8            
            CAnimGraphTagOptionalRef m_sMovementIdleTurnsEnabled; // 0x3c8            
            CAnimGraphTagOptionalRef m_sMovementHopsEnabled; // 0x3e8            
            CAnimGraphTagOptionalRef m_sMovementPlantedTurnsEnabled; // 0x408            
            CAnimGraphTagOptionalRef m_sMovementStrafeSupported; // 0x428            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockAll; // 0x448            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdle; // 0x468            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockLoop; // 0x488            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdleTurn; // 0x4a8            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockStart; // 0x4c8            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockStop; // 0x4e8            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockHop; // 0x508            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockPlantedTurn; // 0x528            
            CAnimGraphTagOptionalRef m_sMovementRightFootDown; // 0x548            
            CAnimGraphTagOptionalRef m_sMovementLeftFootDown; // 0x568            
            CAnimGraphTagOptionalRef m_sMovementStumbleEnabled; // 0x588            
            CAnimGraphTagOptionalRef m_sMovementBashEnabled; // 0x5a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_GroundLocomotion_AG1_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_GroundLocomotion_AG1_GraphController) == 0x5c8);
    };
};
