#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AI_MappedMovementSettingsItem_t.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/CFootstepTableHandle.hpp"
#include "source2sdk/client/CSkillFloat.hpp"
#include "source2sdk/client/CSkillInt.hpp"
#include "source2sdk/client/NPCAttachmentDesc_t.hpp"
#include "source2sdk/client/NPCStatusEffectMap_t.hpp"
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
        // Size: 0x330
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAI_BaseNPCVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // metadata: MPropertyGroupName "Visuals"
            // metadata: MPropertyProvidesEditContextString
            // m_sModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sModelName;
            char m_sModelName[0xe0]; // 0x28            
            // metadata: MPropertyGroupName "Sounds"
            source2sdk::client::CFootstepTableHandle m_hFootstepSounds; // 0x108            
            // metadata: MPropertyFriendlyName "Nav Link Movements"
            // metadata: MPropertyDescription "List of the kind of nav links movement this unit is capable of."
            // metadata: MPropertyCustomFGDType "vdata_choice:scripts/navlinks.vdata"
            // m_vecNavLinkMovementNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_vecNavLinkMovementNames;
            char m_vecNavLinkMovementNames[0x18]; // 0x110            
            float m_flAimConeAngle; // 0x128            
            uint8_t _pad012c[0x4]; // 0x12c
            std::int32_t m_nMaxHealth; // 0x130            
            uint8_t _pad0134[0x4]; // 0x134
            // m_vecIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEmbeddedSubclass<source2sdk::server::CCitadelModifier>> m_vecIntrinsicModifiers;
            char m_vecIntrinsicModifiers[0x18]; // 0x138            
            // metadata: MPropertyFriendlyName "Status Effects"
            // metadata: MPropertyDescription "List of the status effects this NPC cares about"
            source2sdk::client::NPCStatusEffectMap_t m_statusEffectMap; // 0x150            
            uint8_t _pad0151[0x7]; // 0x151
            // m_vecAttachments has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::NPCAttachmentDesc_t> m_vecAttachments;
            char m_vecAttachments[0x18]; // 0x158            
            // metadata: MPropertyStartGroup "Damage"
            source2sdk::client::CSkillFloat m_flHeadDamageMultiplier; // 0x170            
            source2sdk::client::CSkillFloat m_flChestDamageMultiplier; // 0x180            
            source2sdk::client::CSkillFloat m_flStomachDamageMultiplier; // 0x190            
            source2sdk::client::CSkillFloat m_flArmDamageMultiplier; // 0x1a0            
            source2sdk::client::CSkillFloat m_flLegDamageMultiplier; // 0x1b0            
            source2sdk::client::CSkillInt m_nMaxAdditionalAmmoBalancingShots; // 0x1c0            
            bool m_bTakesDamage; // 0x1d0            
            uint8_t _pad01d1[0x7]; // 0x1d1
            // metadata: MPropertyDescription "Damaged Effect"
            // m_strDamagedEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strDamagedEffect;
            char m_strDamagedEffect[0xe0]; // 0x1d8            
            bool m_bLightsFiresWhenDamaged; // 0x2b8            
            uint8_t _pad02b9[0x3]; // 0x2b9
            // metadata: MPropertyDescription "Amount of health to grant to a ragdoll before the ragdoll is destroyed."
            std::int32_t m_nRagdollHealth; // 0x2bc            
            // metadata: MPropertyDescription "Scale on the energy used to look up into the damage tables for physics impacts (including vehicle impacts)."
            float m_flImpactEnergyScale; // 0x2c0            
            // metadata: MPropertyStartGroup "Navigation"
            bool m_bAllowNonZUpMovement; // 0x2c4            
            // metadata: MPropertyDescription "If true, this NPC will use a dynamic collision hull that allows it to be pushed by heavy things and affected by constraints."
            bool m_bUseDynamicCollisionHull; // 0x2c5            
            // metadata: MPropertyDescription "If true, this NPC will use the capsule collision.  Capsule collision will also be used if m_bAllowNonZUpMovement is set."
            bool m_bRequestCapsuleCollision; // 0x2c6            
            uint8_t _pad02c7[0x1]; // 0x2c7
            // metadata: MPropertyDescription "Override the radius of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop OBB"
            float m_flCapsuleRadiusOverride; // 0x2c8            
            // metadata: MPropertyDescription "Override the height of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop height."
            float m_flCapsuleHeightOverride; // 0x2cc            
            // metadata: MPropertyStartGroup "Animation"
            // metadata: MPropertyFriendlyName "Enabled Shared Actions"
            // metadata: MPropertyDescription "List of the shared BaseNPC actions this NPC supports"
            // metadata: MPropertyAttributeEditor "AnimGraphParamEnumValue()"
            // metadata: MPropertyEditContextOverrideValue
            // m_vecActionDesiredShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_vecActionDesiredShared;
            char m_vecActionDesiredShared[0x18]; // 0x2d0            
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyDescription "Player Killed NPC Sound"
            CSoundEventName m_sPlayerKilledNpcSound; // 0x2e8            
            // metadata: MPropertyStartGroup "Death"
            CGlobalSymbol m_sCustomDeathHandshake; // 0x2f8            
            // metadata: MPropertyStartGroup "Movement"
            // metadata: MPropertyFriendlyName "Default Movement Settings"
            // metadata: MPropertyAttributeEditor "VDataChoice( scripts/basenpc_movementsettings.vdata )"
            CUtlString m_sDefaultMovementSettings; // 0x300            
            // metadata: MPropertyFriendlyName "Mapped Movement Settings"
            // m_mappedMovementSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AI_MappedMovementSettingsItem_t> m_mappedMovementSettings;
            char m_mappedMovementSettings[0x18]; // 0x308            
            // metadata: MPropertyDescription "If true, this NPC will use code driven animgraph movement actions such as starts and stops"
            bool m_bEnableCodeDrivenAnimgraphMovement; // 0x320            
            // metadata: MPropertyDescription "If true, the NPC will request strafing if it is supported by the animgraph. Can still be overriden by schedules."
            bool m_bEnableAnimgraphTagDrivenStrafing; // 0x321            
            uint8_t _pad0322[0x2]; // 0x322
            float m_flMassOverride; // 0x324            
            float m_flThreatTemperature; // 0x328            
            float m_flFlashpoint; // 0x32c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_BaseNPCVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_BaseNPCVData) == 0x330);
    };
};
