#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncRotator_Rotate_t.hpp"
#include "source2sdk/server/RotatorHistoryEntry_t.hpp"
#include "source2sdk/server/RotatorQueueEntry_t.hpp"
#include "source2sdk/server/RotatorTargetSpace_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CFuncMover;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x960
        // Has VTable
        #pragma pack(push, 1)
        class CFuncRotator : public source2sdk::server::CBaseModelEntity
        {
        public:
            // m_hRotatorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRotatorTarget;
            char m_hRotatorTarget[0x4]; // 0x780            
            bool m_bIsRotating; // 0x784            
            bool m_bIsReversing; // 0x785            
            uint8_t _pad0786[0x2]; // 0x786
            float m_flTimeToReachMaxSpeed; // 0x788            
            float m_flTimeToReachZeroSpeed; // 0x78c            
            float m_flDistanceAlongArcTraveled; // 0x790            
            float m_flTimeToWaitOscillate; // 0x794            
            source2sdk::entity2::GameTime_t m_flTimeRotationStart; // 0x798            
            uint8_t _pad079c[0x4]; // 0x79c
            Quaternion m_qLSPrevChange; // 0x7a0            
            Quaternion m_qWSPrev; // 0x7b0            
            Quaternion m_qWSInit; // 0x7c0            
            Quaternion m_qLSInit; // 0x7d0            
            Quaternion m_qLSOrientation; // 0x7e0            
            source2sdk::entity2::CEntityIOOutput m_OnRotationStarted; // 0x7f0            
            source2sdk::entity2::CEntityIOOutput m_OnRotationCompleted; // 0x808            
            source2sdk::entity2::CEntityIOOutput m_OnOscillate; // 0x820            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateStartArrive; // 0x838            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateStartDepart; // 0x850            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateEndArrive; // 0x868            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateEndDepart; // 0x880            
            bool m_bOscillateDepart; // 0x898            
            uint8_t _pad0899[0x3]; // 0x899
            std::int32_t m_nOscillateCount; // 0x89c            
            source2sdk::server::CFuncRotator_Rotate_t m_eRotateType; // 0x8a0            
            source2sdk::server::CFuncRotator_Rotate_t m_ePrevRotateType; // 0x8a4            
            bool m_bHasTargetOverride; // 0x8a8            
            uint8_t _pad08a9[0x7]; // 0x8a9
            Quaternion m_qOrientationOverride; // 0x8b0            
            source2sdk::server::RotatorTargetSpace_t m_eSpaceOverride; // 0x8c0            
            QAngle m_qAngularVelocity; // 0x8c4            
            Vector m_vLookAtForcedUp; // 0x8d0            
            uint8_t _pad08dc[0x4]; // 0x8dc
            CUtlSymbolLarge m_strRotatorTarget; // 0x8e0            
            bool m_bRecordHistory; // 0x8e8            
            uint8_t _pad08e9[0x7]; // 0x8e9
            // m_vecRotatorHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RotatorHistoryEntry_t> m_vecRotatorHistory;
            char m_vecRotatorHistory[0x18]; // 0x8f0            
            bool m_bReturningToPreviousOrientation; // 0x908            
            uint8_t _pad0909[0x7]; // 0x909
            // m_vecRotatorQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RotatorQueueEntry_t> m_vecRotatorQueue;
            char m_vecRotatorQueue[0x18]; // 0x910            
            // m_vecRotatorQueueHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RotatorHistoryEntry_t> m_vecRotatorQueueHistory;
            char m_vecRotatorQueueHistory[0x18]; // 0x928            
            source2sdk::client::SolidType_t m_eSolidType; // 0x940            
            uint8_t _pad0941[0x3]; // 0x941
            // m_hSpeedFromMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CFuncMover> m_hSpeedFromMover;
            char m_hSpeedFromMover[0x4]; // 0x944            
            CUtlSymbolLarge m_iszSpeedFromMover; // 0x948            
            float m_flSpeedScale; // 0x950            
            float m_flMinYawRotation; // 0x954            
            float m_flMaxYawRotation; // 0x958            
            uint8_t _pad095c[0x4];
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartReverse; // 0x0
            // void InputReturnToPreviousOrientation; // 0x0
            // void InputReturnToInitialOrientation; // 0x0
            // int32_t InputSetRotateType; // 0x0
            // float InputPitch; // 0x0
            // float InputYaw; // 0x0
            // float InputRoll; // 0x0
            // CUtlSymbolLarge InputSetRotatorTarget; // 0x0
            // float InputSetSpeed; // 0x0
            // void CFuncRotatorRotateThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncRotator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncRotator) == 0x960);
    };
};
