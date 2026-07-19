#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x460
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDestructableBuildingVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            float m_flEnemyTrooperProtectionRange; // 0x28            
            float m_flTrooperJumpRange; // 0x2c            
            float m_flFinishedDyingThink; // 0x30            
            uint8_t _pad0034[0x4]; // 0x34
            // metadata: MPropertyStartGroup "Visuals"
            // m_sAmberModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sAmberModelName;
            char m_sAmberModelName[0xe0]; // 0x38            
            // m_sSapphModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sSapphModelName;
            char m_sSapphModelName[0xe0]; // 0x118            
            // m_AmberDeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberDeathParticle;
            char m_AmberDeathParticle[0xe0]; // 0x1f8            
            // m_SapphDeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphDeathParticle;
            char m_SapphDeathParticle[0xe0]; // 0x2d8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_AmberDeathSound; // 0x3b8            
            CSoundEventName m_SapphDeathSound; // 0x3c8            
            // metadata: MPropertyStartGroup "GamePlay"
            std::int32_t m_iMaxHealthFinal; // 0x3d8            
            std::int32_t m_iMaxHealthGenerator; // 0x3dc            
            std::int32_t m_iMaxHealthGeneratorSecond; // 0x3e0            
            uint8_t _pad03e4[0x4]; // 0x3e4
            // metadata: MPropertyStartGroup "Modifiers"
            // m_PowerGenerator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_PowerGenerator;
            char m_PowerGenerator[0x10]; // 0x3e8            
            // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ObjectiveRegen;
            char m_ObjectiveRegen[0x10]; // 0x3f8            
            // m_BackdoorBulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BackdoorBulletResistModifier;
            char m_BackdoorBulletResistModifier[0x10]; // 0x408            
            // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BackdoorProtectionModifier;
            char m_BackdoorProtectionModifier[0x10]; // 0x418            
            // m_RangedArmorModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_RangedArmorModifier;
            char m_RangedArmorModifier[0x10]; // 0x428            
            // m_BarrackBossProtection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BarrackBossProtection;
            char m_BarrackBossProtection[0x10]; // 0x438            
            // m_vecIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEmbeddedSubclass<source2sdk::server::CCitadelModifier>> m_vecIntrinsicModifiers;
            char m_vecIntrinsicModifiers[0x18]; // 0x448            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDestructableBuildingVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDestructableBuildingVData) == 0x460);
    };
};
