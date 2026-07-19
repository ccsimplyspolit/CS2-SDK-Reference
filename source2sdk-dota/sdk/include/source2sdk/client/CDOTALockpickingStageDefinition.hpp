#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ELockpickingStageMode.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x54
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTALockpickingStageDefinition
        {
        public:
            source2sdk::client::ELockpickingStageMode m_eMode; // 0x0            
            std::int32_t m_nNumUnlocks; // 0x4            
            float m_flInitialSpeed; // 0x8            
            float m_flSpeedIncrementPerUnlock; // 0xc            
            float m_flMinDegreesBetweenUnlocks; // 0x10            
            float m_flTimeLimit; // 0x14            
            float m_flTimerIncreasePerUnlock; // 0x18            
            float m_flSpeedBoostRate; // 0x1c            
            float m_flSpeedBoostPercentage; // 0x20            
            float m_flDecelerationRate; // 0x24            
            float m_flRecoverRate; // 0x28            
            float m_flBaseUnlockAppearRate; // 0x2c            
            float m_flUnlockAppearIncreaseRate; // 0x30            
            float m_flMaxSpeedMultiplier; // 0x34            
            float m_flTimerIncreaseUnlockChance; // 0x38            
            float m_flTimerIncreaseUnlockEscalatingChance; // 0x3c            
            std::int32_t m_nMaxUnlocksOnBoard; // 0x40            
            std::int32_t m_nBoardRadius; // 0x44            
            std::int32_t m_nUnlockRadius; // 0x48            
            float m_flUnlockDegreeDecreaseRate; // 0x4c            
            std::int32_t m_nScorePerUnlock; // 0x50            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_eMode) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_nNumUnlocks) == 0x4);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flInitialSpeed) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flSpeedIncrementPerUnlock) == 0xc);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flMinDegreesBetweenUnlocks) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flTimeLimit) == 0x14);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flTimerIncreasePerUnlock) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flSpeedBoostRate) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flSpeedBoostPercentage) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flDecelerationRate) == 0x24);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flRecoverRate) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flBaseUnlockAppearRate) == 0x2c);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flUnlockAppearIncreaseRate) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flMaxSpeedMultiplier) == 0x34);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flTimerIncreaseUnlockChance) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flTimerIncreaseUnlockEscalatingChance) == 0x3c);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_nMaxUnlocksOnBoard) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_nBoardRadius) == 0x44);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_nUnlockRadius) == 0x48);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_flUnlockDegreeDecreaseRate) == 0x4c);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingStageDefinition, m_nScorePerUnlock) == 0x50);
        
        static_assert(sizeof(source2sdk::client::CDOTALockpickingStageDefinition) == 0x54);
    };
};
