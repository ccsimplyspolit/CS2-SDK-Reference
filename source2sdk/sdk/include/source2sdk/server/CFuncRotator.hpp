#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncRotator_Rotate_t.hpp"
#include "source2sdk/server/CFuncRotator_RotationAxis_t.hpp"
#include "source2sdk/server/FuncRotatorRotationSummary_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x8f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncRotator : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::server::CFuncRotator_Rotate_t m_eRotateType; // 0x770            
            bool m_bIsRotating; // 0x774            
            source2sdk::client::SolidType_t m_eSolidType; // 0x775            
            uint8_t _pad0776[0x2]; // 0x776
            float m_flSpeed; // 0x778            
            float m_flTimeToCompleteRotation; // 0x77c            
            // m_hRotatorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRotatorTarget;
            char m_hRotatorTarget[0x4]; // 0x780            
            uint8_t _pad0784[0x4]; // 0x784
            CUtlSymbolLarge m_strRotatorTarget; // 0x788            
            // m_vecLocalRotationHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Quaternion> m_vecLocalRotationHistory;
            char m_vecLocalRotationHistory[0x18]; // 0x790            
            source2sdk::entity2::CEntityIOOutput m_OnRotationStarted; // 0x7a8            
            source2sdk::entity2::CEntityIOOutput m_OnRotationCompleted; // 0x7c0            
            source2sdk::entity2::CEntityIOOutput m_OnOscillate; // 0x7d8            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateStartArrive; // 0x7f0            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateStartDepart; // 0x808            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateEndArrive; // 0x820            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateEndDepart; // 0x838            
            source2sdk::entity2::GameTick_t m_nTickRotateRan; // 0x850            
            bool m_bStartedRotating; // 0x854            
            uint8_t _pad0855[0x3]; // 0x855
            source2sdk::server::FuncRotatorRotationSummary_t m_rotationSummary; // 0x858            
            float m_flTimeToReachMaxSpeed; // 0x860            
            float m_flTimeToReachZeroSpeed; // 0x864            
            source2sdk::entity2::GameTime_t m_flTimeRotationStart; // 0x868            
            source2sdk::entity2::GameTime_t m_flTimeRotationStop; // 0x86c            
            float m_flStartSpeed; // 0x870            
            uint8_t _pad0874[0xc]; // 0x874
            Quaternion m_qSpawnOrientation; // 0x880            
            bool m_bRecordHistory; // 0x890            
            bool m_bReturningToPreviousRotation; // 0x891            
            bool m_bReturningToInitialRotation; // 0x892            
            uint8_t _pad0893[0x1]; // 0x893
            float m_flMinYawRotation; // 0x894            
            float m_flMaxYawRotation; // 0x898            
            std::int32_t m_nOscillationCount; // 0x89c            
            bool m_bOscillationFromStart; // 0x8a0            
            uint8_t _pad08a1[0x7]; // 0x8a1
            CGameSoundEventName m_iszStartSound; // 0x8a8            
            CGameSoundEventName m_iszLoopSound; // 0x8b0            
            uint8_t _pad08b8[0x18]; // 0x8b8
            CGameSoundEventName m_iszStopSound; // 0x8d0            
            float m_flTargetAngle; // 0x8d8            
            float m_flCurrentAngle; // 0x8dc            
            source2sdk::server::CFuncRotator_RotationAxis_t m_eRotationAxis; // 0x8e0            
            float m_flSpeedDriftFromOverRotate; // 0x8e4            
            uint8_t _pad08e8[0x8];
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputStartForward; // 0x0
            // void InputReturnToPreviousOrientation; // 0x0
            // void InputReturnToInitialOrientation; // 0x0
            // int32_t InputSetRotateType; // 0x0
            // float InputPitch; // 0x0
            // float InputYaw; // 0x0
            // float InputRoll; // 0x0
            // CUtlSymbolLarge InputSetRotatorTarget; // 0x0
            // float InputSetSpeed; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncRotator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncRotator) == 0x8f0);
    };
};
