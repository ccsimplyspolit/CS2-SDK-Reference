#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x5c
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTACrateDropGameDef
        {
        public:
            Vector m_vGravity; // 0x0            
            float m_flGameOverTime; // 0xc            
            float m_flGameWonTime; // 0x10            
            float m_flLevelWonTime; // 0x14            
            float m_flLevelIntroTime; // 0x18            
            float m_flSecondRowOffset; // 0x1c            
            float m_flAbilityCooldown; // 0x20            
            float m_flHeightVisualizationStep; // 0x24            
            float m_flMultiplierStep; // 0x28            
            float m_flMultiplierFactor; // 0x2c            
            float m_flTutorialCrateSpawnInterval; // 0x30            
            float m_flTutorialStepInvervalTime; // 0x34            
            float m_flShieldDuration; // 0x38            
            float m_flHurtDecayRate; // 0x3c            
            float m_flGoopDuration; // 0x40            
            float m_flGoopSlow; // 0x44            
            std::int32_t m_nRegenInstances; // 0x48            
            float m_flRegenHealInterval; // 0x4c            
            float m_flHeightBonusToastTime; // 0x50            
            float m_flFallCrateVOChance; // 0x54            
            float m_flHazardSpawnVOChance; // 0x58            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_vGravity) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flGameOverTime) == 0xc);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flGameWonTime) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flLevelWonTime) == 0x14);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flLevelIntroTime) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flSecondRowOffset) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flAbilityCooldown) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flHeightVisualizationStep) == 0x24);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flMultiplierStep) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flMultiplierFactor) == 0x2c);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flTutorialCrateSpawnInterval) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flTutorialStepInvervalTime) == 0x34);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flShieldDuration) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flHurtDecayRate) == 0x3c);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flGoopDuration) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flGoopSlow) == 0x44);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_nRegenInstances) == 0x48);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flRegenHealInterval) == 0x4c);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flHeightBonusToastTime) == 0x50);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flFallCrateVOChance) == 0x54);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropGameDef, m_flHazardSpawnVOChance) == 0x58);
        
        static_assert(sizeof(source2sdk::client::CDOTACrateDropGameDef) == 0x5c);
    };
};
