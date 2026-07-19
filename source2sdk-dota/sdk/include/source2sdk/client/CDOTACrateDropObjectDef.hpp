#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTACrateDropObjectDefID_t.hpp"
#include "source2sdk/client/EDOTACrateDropObjectType.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xe0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTACrateDropObjectDef
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            source2sdk::client::DOTACrateDropObjectDefID_t m_unID; // 0x10            
            source2sdk::client::EDOTACrateDropObjectType m_eType; // 0x14            
            CUtlString m_sParentName; // 0x18            
            CUtlString m_sEntityClassName; // 0x20            
            CUtlString m_sModel; // 0x28            
            CUtlString m_sSearchEntity; // 0x30            
            Vector m_vSpawnMin; // 0x38            
            Vector m_vSpawnMax; // 0x44            
            Vector m_vSpawnVelocityMin; // 0x50            
            Vector m_vSpawnVelocityMax; // 0x5c            
            float m_flFriction; // 0x68            
            float m_flFrictionScale; // 0x6c            
            float m_flGravityScale; // 0x70            
            float m_flInertiaInv; // 0x74            
            float m_flAcceleration; // 0x78            
            float m_flMaxSpeed; // 0x7c            
            std::int8_t m_nMassPriority; // 0x80            
            std::int8_t m_nNoDraw; // 0x81            
            uint8_t _pad0082[0x2]; // 0x82
            float m_flMass; // 0x84            
            float m_flScale; // 0x88            
            float m_flTriggerDelay; // 0x8c            
            float m_flTriggeredGravityScale; // 0x90            
            float m_flFirstRowOffset; // 0x94            
            float m_flSecondRowOffset; // 0x98            
            float m_flAbilityCooldown; // 0x9c            
            std::int8_t m_nFirstRowWeight; // 0xa0            
            std::int8_t m_nSecondRowWeight; // 0xa1            
            uint8_t _pad00a2[0x2]; // 0xa2
            float m_flHeightVisualizationStep; // 0xa4            
            float m_flMultiplierStep; // 0xa8            
            float m_flMultiplierFactor; // 0xac            
            std::int8_t m_nDisableSpawnRotation; // 0xb0            
            std::int8_t m_nTutorialObject; // 0xb1            
            uint8_t _pad00b2[0x6]; // 0xb2
            CUtlString m_sSpawnSound; // 0xb8            
            CUtlString m_sLoopSound; // 0xc0            
            CUtlString m_sDestroySound; // 0xc8            
            CUtlString m_sCatchSound; // 0xd0            
            uint8_t _pad00d8[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_unID) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_eType) == 0x14);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_sParentName) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_sEntityClassName) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_sModel) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_sSearchEntity) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_vSpawnMin) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_vSpawnMax) == 0x44);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_vSpawnVelocityMin) == 0x50);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_vSpawnVelocityMax) == 0x5c);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flFriction) == 0x68);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flFrictionScale) == 0x6c);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flGravityScale) == 0x70);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flInertiaInv) == 0x74);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flAcceleration) == 0x78);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flMaxSpeed) == 0x7c);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_nMassPriority) == 0x80);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_nNoDraw) == 0x81);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flMass) == 0x84);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flScale) == 0x88);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flTriggerDelay) == 0x8c);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flTriggeredGravityScale) == 0x90);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flFirstRowOffset) == 0x94);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flSecondRowOffset) == 0x98);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flAbilityCooldown) == 0x9c);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_nFirstRowWeight) == 0xa0);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_nSecondRowWeight) == 0xa1);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flHeightVisualizationStep) == 0xa4);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flMultiplierStep) == 0xa8);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_flMultiplierFactor) == 0xac);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_nDisableSpawnRotation) == 0xb0);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_nTutorialObject) == 0xb1);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_sSpawnSound) == 0xb8);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_sLoopSound) == 0xc0);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_sDestroySound) == 0xc8);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropObjectDef, m_sCatchSound) == 0xd0);
        
        static_assert(sizeof(source2sdk::client::CDOTACrateDropObjectDef) == 0xe0);
    };
};
