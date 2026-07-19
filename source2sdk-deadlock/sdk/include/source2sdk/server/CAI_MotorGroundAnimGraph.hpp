#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CFloatExponentialMovingAverage.hpp"
#include "source2sdk/server/AI_MotorGroundAnimGraph_Flags_t.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Custom.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_CustomMantle.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Hop.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Idle.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_IdleTurn.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_InstantStop.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Loop.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Other.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_PlantedTurn.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Start.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Stop.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_GroundLocomotion_AG1_GraphController;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_GroundLocomotion_GraphController;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x720
        #pragma pack(push, 1)
        class CAI_MotorGroundAnimGraph
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::server::CAI_MotorGroundAnimGraph_State_Idle m_stateIdle; // 0x8            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_IdleTurn m_stateIdleTurn; // 0x28            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_Loop m_stateLoop; // 0x70            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_Start m_stateStart; // 0x98            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_Stop m_stateStop; // 0xc0            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_InstantStop m_stateInstantStop; // 0x140            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_Hop m_stateHop; // 0x1c0            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_Custom m_stateCustom; // 0x240            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_CustomMantle m_stateCustomMantle; // 0x2b8            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_PlantedTurn m_statePlantedTurn; // 0x2e8            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_Other m_stateOther; // 0x310            
            uint8_t _pad0338[0x18]; // 0x338
            std::int32_t m_nCurrentState; // 0x350            
            float m_flDistanceCoveredInCurrentState; // 0x354            
            bool m_bEnableStop; // 0x358            
            bool m_bEnableStart; // 0x359            
            bool m_bHadPath; // 0x35a            
            bool m_bEnableAdvancedFeatures; // 0x35b            
            bool m_bTeleported; // 0x35c            
            bool m_bAllTransitionsBlocked; // 0x35d            
            bool m_bIsAG2; // 0x35e            
            uint8_t _pad035f[0x1]; // 0x35f
            source2sdk::server::AI_MotorGroundAnimGraph_Flags_t m_eFlags; // 0x360            
            VectorWS m_vPreviousPosition; // 0x364            
            Vector m_vPreviousMoveDirection; // 0x370            
            uint8_t _pad037c[0x4]; // 0x37c
            float m_flCurrentLean; // 0x380            
            float m_flCurrentSpeed; // 0x384            
            float m_flMovementDesiredHeading; // 0x388            
            RotationVector m_vDesiredMovementHeadingChangeVelocity; // 0x38c            
            source2sdk::client::CFloatExponentialMovingAverage m_smoothedDesiredMoveHeading; // 0x398            
            uint8_t _pad03ac[0x2dc]; // 0x3ac
            CMotionTransform m_proceduralRootMotion; // 0x688            
            // metadata: MSaveOpsForField
            source2sdk::server::CAI_GroundLocomotion_GraphController* m_pGraphController; // 0x698            
            // metadata: MSaveOpsForField
            source2sdk::server::CAI_GroundLocomotion_AG1_GraphController* m_pAG1GraphController; // 0x6a0            
            uint8_t _pad06a8[0x78];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_MotorGroundAnimGraph) == 0x720);
    };
};
