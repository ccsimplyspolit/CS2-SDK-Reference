#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityCastEvent_t.hpp"
#include "source2sdk/client/AbilityCosmeticInfo_t.hpp"
#include "source2sdk/client/AbilityDependencyDescription_t.hpp"
#include "source2sdk/client/AbilityTooltipDetails_t.hpp"
#include "source2sdk/client/AbilityUpgrade_t.hpp"
#include "source2sdk/client/AdditionalAbilities_t.hpp"
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CCitadelWeaponInfo.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "source2sdk/client/CitadelAbilityHUDPanel_t.hpp"
#include "source2sdk/client/CitadelAbilityProperty_t.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/DeploymentInfo_t.hpp"
#include "source2sdk/client/EAbilityActivation_t.hpp"
#include "source2sdk/client/EAbilityBehavior_t.hpp"
#include "source2sdk/client/EAbilitySpectatePriority.hpp"
#include "source2sdk/client/EAbilityTargetingLocation_t.hpp"
#include "source2sdk/client/EAbilityTargetingShape_t.hpp"
#include "source2sdk/client/EAbilityType_t.hpp"
#include "source2sdk/client/ECitadelTargetAbilityEffects.hpp"
#include "source2sdk/client/EItemSlotTypes_t.hpp"
#include "source2sdk/client/ELOSCheck.hpp"
#include "source2sdk/client/EModifierState.hpp"
#include "source2sdk/client/IncompatibleFilter_t.hpp"
#include "source2sdk/client/InputBitMask_t.hpp"
#include "source2sdk/client/ProjectileInfo_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCPanoramaStyle.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Standard-layout class: false
        // Size: 0x1818
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataOverlayType "2"
        // static metadata: MVDataOutlinerLeafNameFn
        #pragma pack(push, 1)
        class CitadelAbilityVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // metadata: MPropertyStartGroup "Meta"
            source2sdk::client::EAbilityType_t m_eAbilityType; // 0x28            
            // metadata: MPropertyStartGroup "Meta"
            source2sdk::client::EItemSlotTypes_t m_eItemSlotType; // 0x29            
            bool m_bDisabled; // 0x2a            
            bool m_bDisabledOnExperimental; // 0x2b            
            bool m_bInDevelopment; // 0x2c            
            bool m_bStartTrained; // 0x2d            
            uint8_t _pad002e[0x2]; // 0x2e
            std::int32_t m_iMaxLevel; // 0x30            
            std::int32_t m_nAbilityPointsCost; // 0x34            
            std::int32_t m_nAbillityUnlocksCost; // 0x38            
            uint8_t _pad003c[0x4]; // 0x3c
            std::uint64_t m_iUpdateTime; // 0x40            
            uint8_t _pad0048[0x4]; // 0x48
            // metadata: MPropertyStartGroup "Behavior"
            // m_AbilityBehaviorsBits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVecEnum<source2sdk::client::EAbilityBehavior_t> m_AbilityBehaviorsBits;
            char m_AbilityBehaviorsBits[0xc]; // 0x4c            
            // metadata: MPropertyDescription "The location for our ability's targeting to use, used in GetCastPosition and such.  Also determines preview visuals."
            source2sdk::client::EAbilityTargetingLocation_t m_eAbilityTargetingLocation; // 0x58            
            // metadata: MPropertyDescription "The general shape that our ability will target. Unless you choose cone targeting, it ONLY determines preview visuals - you still have to do the targeting separately in code."
            source2sdk::client::EAbilityTargetingShape_t m_eAbilityTargetingShape; // 0x5c            
            // metadata: MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
            float m_flTargetingConeAngle; // 0x60            
            // metadata: MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
            float m_flTargetingConeHalfWidth; // 0x64            
            // metadata: MPropertyDescription "When true, we will do an extra trace with the same cone shape, but with the cone laying flat in XY"
            // metadata: MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
            bool m_bIncludeExtra2DCone; // 0x68            
            // metadata: MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
            // metadata: MPropertyDescription "When true, the cone is cast from the center of the screen, rather than from the center of the character."
            bool m_bUseCameraOffsetsForCone; // 0x69            
            // metadata: MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
            // metadata: MPropertyDescription "When true, the cone collects nearby targets as well, helpful for melee attacks."
            bool m_bCollectNearbyTargetsWithCone; // 0x6a            
            uint8_t _pad006b[0x1]; // 0x6b
            // metadata: MPropertySuppressExpr "m_bCollectNearbyTargetsWithCone == false"
            float m_flNearbySweepOffset; // 0x6c            
            // metadata: MPropertySuppressExpr "m_bCollectNearbyTargetsWithCone == false"
            float m_flNearbySweepRadius; // 0x70            
            source2sdk::client::EAbilityActivation_t m_eAbilityActivation; // 0x74            
            // metadata: MPropertyDescription "If set, this button must be down in addition to our trigger button (be default the slot button) in order to activate this ability."
            source2sdk::client::InputBitMask_t m_TriggerButtonPreReqButton; // 0x78            
            // metadata: MPropertyDescription "If set, this is the button requierd to be pressed to activate this ability."
            source2sdk::client::InputBitMask_t m_TriggerButtonOverride; // 0x80            
            source2sdk::client::EAbilitySpectatePriority m_eAbilitySpectatePriority; // 0x88            
            uint8_t _pad0089[0x3]; // 0x89
            // m_bitsInterruptingStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVecEnum<source2sdk::client::EModifierState> m_bitsInterruptingStates;
            char m_bitsInterruptingStates[0x28]; // 0x8c            
            source2sdk::client::IncompatibleFilter_t m_IncompatibleFilter; // 0xb4            
            source2sdk::client::CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0xc8            
            source2sdk::client::CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0xcc            
            source2sdk::client::ELOSCheck m_eTargettingLOSCheck; // 0xd0            
            // metadata: MPropertyDescription "During pre-cast, what modifier states are set."
            // m_bitsPreCastEnabledStateMask has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVecEnum<source2sdk::client::EModifierState> m_bitsPreCastEnabledStateMask;
            char m_bitsPreCastEnabledStateMask[0x28]; // 0xd4            
            // metadata: MPropertyDescription "During channel, what modifier states are set."
            // m_bitsChannelEnabledStateMask has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVecEnum<source2sdk::client::EModifierState> m_bitsChannelEnabledStateMask;
            char m_bitsChannelEnabledStateMask[0x28]; // 0xfc            
            // metadata: MPropertyDescription "During post-cast, what modifier states are set."
            // m_bitsPostCastEnabledStateMask has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVecEnum<source2sdk::client::EModifierState> m_bitsPostCastEnabledStateMask;
            char m_bitsPostCastEnabledStateMask[0x28]; // 0x124            
            // metadata: MPropertyDescription "This ability provides these types of ability target effects."
            source2sdk::client::ECitadelTargetAbilityEffects m_TargetAbilityEffectsToApply; // 0x14c            
            // metadata: MPropertyDescription "Scale Damage to Objectives by this amount"
            float m_flBossDamageScale; // 0x150            
            bool m_bShowTargetingPreviewWhileChanneling; // 0x154            
            bool m_bShowTargetingPreviewWhileCasting; // 0x155            
            uint8_t _pad0156[0x2]; // 0x156
            // metadata: MPropertyStartGroup
            // metadata: MPropertyFriendlyName "Weapon Info"
            source2sdk::client::CCitadelWeaponInfo m_WeaponInfo; // 0x158            
            // metadata: MPropertyFriendlyName "Projectile Info"
            source2sdk::client::ProjectileInfo_t m_projectileInfo; // 0x8d0            
            // metadata: MPropertyFriendlyName "Deployment Info"
            source2sdk::client::DeploymentInfo_t m_deploymentInfo; // 0xc68            
            // metadata: MPropertyStartGroup
            // m_mapAbilityProperties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,source2sdk::client::CitadelAbilityProperty_t> m_mapAbilityProperties;
            char m_mapAbilityProperties[0x28]; // 0xe68            
            // metadata: MPropertyMapKeyLeafChoiceProviderFn
            // m_mapDependentAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CSubclassName<4>,source2sdk::client::AbilityDependencyDescription_t> m_mapDependentAbilities;
            char m_mapDependentAbilities[0x28]; // 0xe90            
            // m_vecAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AbilityUpgrade_t> m_vecAbilityUpgrades;
            char m_vecAbilityUpgrades[0x18]; // 0xeb8            
            // metadata: MPropertyStartGroup "AnimGraph1"
            CGlobalSymbol m_strCastAnimGraphParam; // 0xed0            
            // metadata: MPropertyDescription "If set, this will be the value passed to the animgraph when this ability is selected instead of the ability name."
            CUtlString m_strSelectionNameOverride; // 0xed8            
            CUtlString m_strCastAnimSequenceName; // 0xee0            
            // metadata: MPropertyStartGroup "AnimGraph2"
            // metadata: MPropertyDescription "When true, suppress the out of combat anim state for 2s on cast."
            bool m_bSuppressOutOfCombatOnCast; // 0xee8            
            // metadata: MPropertyDescription "When true, suppress the out of combat anim state while channeling and for 2s after."
            bool m_bSuppressOutOfCombatWhileChanneling; // 0xee9            
            uint8_t _pad0eea[0x6]; // 0xeea
            // metadata: MPropertyFriendlyName "hero_action_source value when doing an action"
            // metadata: MPropertyDescription "By default uses the ability name.  Set this to use a custom name."
            CGlobalSymbol m_strAG2SourceName; // 0xef0            
            // metadata: MPropertyFriendlyName "Casting "hero_action" value"
            // metadata: MPropertyDescription "Value to set "hero_action" to set when casting. "hero_action_source" will be set to this ability's name"
            CGlobalSymbol m_strAG2CastingAction; // 0xef8            
            // metadata: MPropertyFriendlyName "Channeling "hero_action" value"
            // metadata: MPropertyDescription "Value to set "hero_action" to set when channeling. "hero_action_source" will be set to this ability's name"
            CGlobalSymbol m_strAG2ChannelingAction; // 0xf00            
            // metadata: MPropertyFriendlyName "Cast Completed "hero_action" value"
            // metadata: MPropertyDescription "Value to set "hero_action" to when casting completes. "hero_action_source" will be set to this ability's name"
            CGlobalSymbol m_strAG2CastCompletedAction; // 0xf08            
            // metadata: MPropertyStartGroup "UI"
            // metadata: MPropertySuppressExpr "m_bIsSignatureAbility == false"
            source2sdk::client::AbilityTooltipDetails_t m_AbilityTooltipDetails; // 0xf10            
            CUtlString m_strCSSClass; // 0xf40            
            CPanoramaImageName m_strAbilityImage; // 0xf48            
            CUtlString m_strMoviePreviewPath; // 0xf58            
            source2sdk::client::CitadelAbilityHUDPanel_t m_HUDPanel; // 0xf60            
            bool m_bShowInPassiveItemsArea; // 0xf98            
            bool m_bForceHideHUDPanel; // 0xf99            
            bool m_bForceShowHUDPanel; // 0xf9a            
            bool m_bUsesFlightControls; // 0xf9b            
            uint8_t _pad0f9c[0x4]; // 0xf9c
            CUtlString m_strFlyUpLocString; // 0xfa0            
            CUtlString m_strFlyDownLocString; // 0xfa8            
            // metadata: MPropertyDescription "Subcast UI will have this class set"
            CUtlString m_strSubCastUICSSClass; // 0xfb0            
            // metadata: MPropertyFriendlyName "Additional Abilities"
            source2sdk::client::AdditionalAbilities_t m_additionalAbilities; // 0xfb8            
            CUtlString m_strSecondaryStatName; // 0xfd8            
            // metadata: MPropertyDescription "Used by button hints as labels for 'casting' (ex. cast, throw, deploy)."
            CUtlString m_strCastButtonLocToken; // 0xfe0            
            // metadata: MPropertyDescription "Used by button hints as labels for 'alt-casting' (ex. cast on self, bring allies, heal teammate)."
            CUtlString m_strAltCastButtonLocToken; // 0xfe8            
            // metadata: MPropertyStartGroup "Camera"
            // metadata: MPropertyDescription "Camera sequence that plays when casting starts and stops when casting completes, unless the bool below is un-checked"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceCastStart; // 0xff0            
            // metadata: MPropertyDescription "By default, we stop the sequence from 'Sequence Cast Start' once the cast completes successfully.  Un-check this to allow it to continue past the cast."
            bool m_bEndCastStartSequenceOnCastComplete; // 0x1078            
            uint8_t _pad1079[0x7]; // 0x1079
            // metadata: MPropertyDescription "Camera sequence that plays when casting completes."
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceCastComplete; // 0x1080            
            // metadata: MPropertyDescription "Camera sequence that plays when channeling starts and is stopped when channeling ends, unless the bool below is un-checked."
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceChannelStart; // 0x1108            
            // metadata: MPropertyDescription "By default, we stop the sequence from 'Sequence Channel Start' once the channel completes successfully.  Un-check this to allow it to continue past the channel duration."
            bool m_bEndChannelStartSequenceOnChannelComplete; // 0x1190            
            uint8_t _pad1191[0x3]; // 0x1191
            float m_flCameraPreviewOffset; // 0x1194            
            float m_flCameraPreviewDistance; // 0x1198            
            float m_flCameraPreviewSpeed; // 0x119c            
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyDescription "Preview particle attaching to the caster before cast"
            // m_previewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_previewParticle;
            char m_previewParticle[0xe0]; // 0x11a0            
            // metadata: MPropertyDescription "Name of particle control point config to use for preview particle effect (empty means use 'preview' config)"
            CUtlString m_strPreviewParticleEffectConfig; // 0x1280            
            // metadata: MPropertyDescription "Preview path particle shows ability's custom path"
            // m_PreviewPathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PreviewPathParticle;
            char m_PreviewPathParticle[0xe0]; // 0x1288            
            // metadata: MPropertyDescription "Particle attaching to the caster on cast event"
            // m_mapCastEventParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::AbilityCastEvent_t,CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>> m_mapCastEventParticles;
            char m_mapCastEventParticles[0x28]; // 0x1368            
            // metadata: MPropertyDescription "Trace particle when hit an enemy with targeted ability"
            // m_skillshotHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_skillshotHitParticle;
            char m_skillshotHitParticle[0xe0]; // 0x1390            
            // metadata: MPropertyDescription "Trace particle when missed an enemy with targeted ability"
            // m_skillshotMissParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_skillshotMissParticle;
            char m_skillshotMissParticle[0xe0]; // 0x1470            
            // metadata: MPropertyDescription "Preview particle on attaching to targets of this ability"
            // m_TargetingPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingPreviewParticle;
            char m_TargetingPreviewParticle[0xe0]; // 0x1550            
            // metadata: MPropertyDescription "CSS stylesheet included in the HUD elements created by this ability"
            // m_HudSharedStyle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCPanoramaStyle>> m_HudSharedStyle;
            char m_HudSharedStyle[0xe0]; // 0x1630            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSelectedSound; // 0x1710            
            CSoundEventName m_strUnselectedSound; // 0x1720            
            CSoundEventName m_strSelectedLoopSound; // 0x1730            
            CSoundEventName m_strCastSound; // 0x1740            
            CSoundEventName m_strChannelSound; // 0x1750            
            CSoundEventName m_strChannelLoopSound; // 0x1760            
            CSoundEventName m_strCastDelaySound; // 0x1770            
            CSoundEventName m_strCastDelayLoopSound; // 0x1780            
            // metadata: MPropertyDescription "plays for local player attacker dealing damage with this ability"
            CSoundEventName m_strHitConfirmationSound; // 0x1790            
            // metadata: MPropertyDescription "plays for local player victim taking damage from this ability"
            CSoundEventName m_strDamageTakenSound; // 0x17a0            
            CSoundEventName m_strAbilityOffCooldownSound; // 0x17b0            
            CSoundEventName m_strAbilityChargeReadySound; // 0x17c0            
            bool m_bPlayMeepMop; // 0x17d0            
            uint8_t _pad17d1[0x7]; // 0x17d1
            // metadata: MPropertyStartGroup "Modifiers"
            // m_AutoChannelModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_AutoChannelModifier;
            char m_AutoChannelModifier[0x10]; // 0x17d8            
            // m_AutoCastDelayModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_AutoCastDelayModifier;
            char m_AutoCastDelayModifier[0x10]; // 0x17e8            
            // m_AutoIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEmbeddedSubclass<source2sdk::client::CBaseModifier>> m_AutoIntrinsicModifiers;
            char m_AutoIntrinsicModifiers[0x18]; // 0x17f8            
            // metadata: MPropertySuppressExpr "m_eAbilityType != EAbilityType_Cosmetic"
            source2sdk::client::AbilityCosmeticInfo_t m_cosmeticInfo; // 0x1810            
            uint8_t _pad1811[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CitadelAbilityVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CitadelAbilityVData) == 0x1818);
    };
};
