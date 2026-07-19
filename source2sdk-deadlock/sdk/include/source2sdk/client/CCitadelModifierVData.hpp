#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierResponseRules_t.hpp"
#include "source2sdk/client/CModifierVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/EModifierValue.hpp"
#include "source2sdk/client/FootstepSound_t.hpp"
#include "source2sdk/client/HudDisplayLocation_t.hpp"
#include "source2sdk/client/ModifierBarrierBehavior_t.hpp"
#include "source2sdk/client/ModifierOverheadDrawType_t.hpp"
#include "source2sdk/client/ModifierTimeScaleSource_t.hpp"
#include "source2sdk/client/ModifiersDisplayLocation_t.hpp"
#include "source2sdk/client/ParamAndPriority_t.hpp"
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
        // Size: 0x750
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        #pragma pack(push, 1)
        class CCitadelModifierVData : public source2sdk::client::CModifierVData
        {
        public:
            bool m_bIsBuildup; // 0x408            
            // metadata: MPropertySuppressField
            bool m_bNetworkValuesForStatsPreview; // 0x409            
            uint8_t _pad040a[0x6]; // 0x40a
            // m_vecAutoRegisterModifierValueFromAbilityPropertyName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecAutoRegisterModifierValueFromAbilityPropertyName;
            char m_vecAutoRegisterModifierValueFromAbilityPropertyName[0x18]; // 0x410            
            // metadata: MPropertyStartGroup "Kill & Assist Credit"
            bool m_bCasterCountsAsAssister; // 0x428            
            uint8_t _pad0429[0x3]; // 0x429
            // metadata: MPropertyDescription "When set, an additional, invisible modifier will be left on the parent when this modifier expires.  This is to aid in giving assist credit for modifiers that deal no damage (ex. Astro's Lasso)"
            float m_flLingeringAssistWindow; // 0x42c            
            // metadata: MPropertyStartGroup "Time"
            // metadata: MPropertyDescription "When set, the duration will get scaled depending on the owner's timescale"
            bool m_bDurationCanBeTimeScaled; // 0x430            
            bool m_bDurationReducible; // 0x431            
            // metadata: MPropertyDescription "When set, the duration will get reduced based on recent CC applied to the victim"
            bool m_bDurationReducibleByCrowdControlDiminish; // 0x432            
            uint8_t _pad0433[0x1]; // 0x433
            // metadata: MPropertyDescription "Whose timescale to use when adjusting duration."
            source2sdk::client::ModifierTimeScaleSource_t m_eTimeScaleSource; // 0x434            
            // metadata: MPropertyDescription "When true, the 'effectiveness' value for the modifier will be used to scale the duration. You most likely want 'Keep Maximum Duration On Refresh' to match this value"
            bool m_bDurationAffectedByEffectiveness; // 0x438            
            uint8_t _pad0439[0x7]; // 0x439
            // metadata: MPropertyStartGroup "AnimGraph2"
            // metadata: MPropertyFriendlyName "base_action value"
            // metadata: MPropertyDescription "The value to set the parameter "base_action" to.  Should be used for actions that are common to all heroes (ex. lifted)."
            source2sdk::client::ParamAndPriority_t m_AG2BaseAction; // 0x440            
            // metadata: MPropertyFriendlyName "base_state value"
            // metadata: MPropertyDescription "The value to set the parameter "base_state" to.  Should be used for states that are common to all heroes (ex. asleep)."
            source2sdk::client::ParamAndPriority_t m_AG2BaseState; // 0x450            
            // metadata: MPropertyFriendlyName "hero_state value"
            // metadata: MPropertyDescription "The value to set the parameter "hero_state" to.  Should be used for states that are custom for the casting hero (ex. icepathing, flamedashing)."
            source2sdk::client::ParamAndPriority_t m_AG2HeroState; // 0x460            
            // metadata: MPropertyStartGroup "UI"
            source2sdk::client::ModifierOverheadDrawType_t m_eDrawOverheadStatus; // 0x470            
            bool m_bReverseHudProgressBar; // 0x474            
            uint8_t _pad0475[0x3]; // 0x475
            CUtlString m_strSmallIconCssClass; // 0x478            
            CUtlString m_strHintText; // 0x480            
            // metadata: MPropertyDescription "When set, different modifiers from the same ability will collapse based on this ID."
            CUtlString m_strModifierOverrideStatusID; // 0x488            
            CPanoramaImageName m_strHudIcon; // 0x490            
            source2sdk::client::HudDisplayLocation_t m_eHudDisplayLocation; // 0x4a0            
            source2sdk::client::ModifiersDisplayLocation_t m_eModifierDisplayLocaiton; // 0x4a4            
            // metadata: MPropertyDescription "When set, the message will appear in the middle of the HUD for the target player."
            CUtlString m_strHudMessageText; // 0x4a8            
            // metadata: MPropertyDescription "When set, the modifier will not be visible overhead of the casting player for the other players"
            bool m_bIsHiddenOverhead; // 0x4b0            
            uint8_t _pad04b1[0x7]; // 0x4b1
            // metadata: MPropertyDescription "A set of modifier values that will be forced tp show in the UI if they have a value (normally requires a limited duration set)"
            // m_vecAlwaysShowInStatModifierUI has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::EModifierValue> m_vecAlwaysShowInStatModifierUI;
            char m_vecAlwaysShowInStatModifierUI[0x18]; // 0x4b8            
            // metadata: MPropertyStartGroup "Responses"
            source2sdk::client::CCitadelModifierResponseRules_t m_OnCreateResponse; // 0x4d0            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceCreated; // 0x508            
            // metadata: MPropertyDescription "By default, we stop the sequence from 'Sequence Created' once the modifier is removed.  Un-check this to allow it to continue past the modifier's lifetime."
            bool m_bEndCreatedSequenceOnRemove; // 0x590            
            uint8_t _pad0591[0x7]; // 0x591
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceRemoved; // 0x598            
            // metadata: MPropertyStartGroup "Barrier"
            source2sdk::client::ModifierBarrierBehavior_t m_BarrierBehavior; // 0x620            
            uint8_t _pad0624[0x4]; // 0x624
            // m_BarrierCreateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BarrierCreateParticle;
            char m_BarrierCreateParticle[0xe0]; // 0x628            
            bool m_bSupressDefaultBarrierBreakParticle; // 0x708            
            uint8_t _pad0709[0x7]; // 0x709
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_sExpiredSound; // 0x710            
            // metadata: MPropertyDescription "Overrides the default footstep. The footstep with the greatest Priority is selected. It must have a priority greater than -1 to be selected!"
            source2sdk::client::FootstepSound_t m_FootstepOverride; // 0x720            
            // metadata: MPropertyDescription "Plays alongside the default footstep."
            CSoundEventName m_FootstepAdditional; // 0x738            
            bool m_bRemoveOnInterrupted; // 0x748            
            uint8_t _pad0749[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelModifierVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelModifierVData) == 0x750);
    };
};
