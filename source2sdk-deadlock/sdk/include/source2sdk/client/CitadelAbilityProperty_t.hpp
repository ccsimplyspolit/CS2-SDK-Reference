#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CScaleFunctionBase.hpp"
#include "source2sdk/client/EModifierValue.hpp"
#include "source2sdk/client/EStatsType.hpp"
#include "source2sdk/client/ModifierValueDisplayUnits_t.hpp"
#include "source2sdk/client/PropertyValueApplyFilter_t.hpp"
#include "source2sdk/client/StatsUsageFlags_t.hpp"

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
        // Size: 0xc8
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelAbilityProperty_t
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            // metadata: MPropertyFlattenIntoParentRow
            // metadata: MPropertyFlattenStretchFactor
            // metadata: MPropertyFlattenIncludeLabel
            CUtlString m_strValue; // 0x10            
            // metadata: MPropertyFlattenIntoParentRow
            // metadata: MPropertyFlattenStretchFactor
            // metadata: MPropertyFlattenIncludeLabel
            // metadata: MPropertyFriendlyName "SB"
            CUtlString m_strStreetBrawlValue; // 0x18            
            uint8_t _pad0020[0x8]; // 0x20
            // m_subclassScaleFunction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CScaleFunctionBase> m_subclassScaleFunction;
            char m_subclassScaleFunction[0x10]; // 0x28            
            // m_subclassScaleFunctionStreetBrawl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CScaleFunctionBase> m_subclassScaleFunctionStreetBrawl;
            char m_subclassScaleFunctionStreetBrawl[0x10]; // 0x38            
            uint8_t _pad0048[0x14]; // 0x48
            // metadata: MPropertyDescription "What type of modifier value does this property provide?  Used by modifiers to know what type to auto-register this property for and to tell the UI how this interacts with other stats and items."
            source2sdk::client::EModifierValue m_eProvidedPropertyType; // 0x5c            
            // metadata: MPropertyDescription "Conditions to filter what other abilities this property can affect."
            source2sdk::client::PropertyValueApplyFilter_t m_eApplyFilter; // 0x60            
            uint8_t _pad0064[0x4]; // 0x64
            // metadata: MPropertyDescription "This property will be disabled if this value matches m_strValue"
            CUtlString m_strDisableValue; // 0x68            
            // metadata: MPropertyDescription "When true, effectiveness (distance falloff) will be applied when looking up this value.  Only works in modifiers for now."
            bool m_bDamageAffectedByEffectiveness; // 0x70            
            // metadata: MPropertyDescription "When true, we return zero if the upgrade bits are zero. Otherwise, returns a real value."
            bool m_bReturnZeroIfUnupgraded; // 0x71            
            uint8_t _pad0072[0x2]; // 0x72
            // metadata: MPropertyStartGroup "UI"
            // metadata: MPropertyDescription "Set this so we know how to display the ability property (prefix, postfix, and # decimal places)"
            source2sdk::client::EStatsType m_eDisplayType; // 0x74            
            source2sdk::client::ModifierValueDisplayUnits_t m_eDisplayUnits; // 0x78            
            // metadata: MPropertyDescription "When true, we don't show this ability property anywhere in the UI."
            bool m_bIsHidden; // 0x7c            
            // metadata: MPropertyDescription "When true, we add a different class to show it's a negative attribute."
            bool m_bIsNegativeAttribute; // 0x7d            
            uint8_t _pad007e[0x2]; // 0x7e
            // metadata: MPropertyFriendlyName "CSS Class"
            // metadata: MPropertyLeafSuggestionProviderFn
            CUtlString m_strCSSClass; // 0x80            
            // metadata: MPropertyDescription "If set, will be used for the localization token lookup instead of the name"
            // metadata: MPropertySuppressExpr "m_bCanSetTokenOverride == false"
            CUtlString m_strLocTokenOverride; // 0x88            
            // metadata: MPropertySuppressField
            bool m_bCanSetTokenOverride; // 0x90            
            uint8_t _pad0091[0x7]; // 0x91
            // metadata: MPropertyDescription "If set, will be used for the conditional localization token lookup instead of [ItemName]_conditional"
            CUtlString m_strConditionalLocTokenOverride; // 0x98            
            // metadata: MPropertyDescription "Do we round the value down? i.e. 2.8 will be 2"
            bool m_bRoundDown; // 0xa0            
            // metadata: MPropertyDescription "Is this value used to determine damage?"
            bool m_bIsAbilityDamageProperty; // 0xa1            
            uint8_t _pad00a2[0x2]; // 0xa2
            source2sdk::client::StatsUsageFlags_t m_eStatsUsageFlags; // 0xa4            
            uint8_t _pad00a8[0x20];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_strValue) == 0x10);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_strStreetBrawlValue) == 0x18);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_subclassScaleFunction) == 0x28);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_subclassScaleFunctionStreetBrawl) == 0x38);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_eProvidedPropertyType) == 0x5c);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_eApplyFilter) == 0x60);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_strDisableValue) == 0x68);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_bDamageAffectedByEffectiveness) == 0x70);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_bReturnZeroIfUnupgraded) == 0x71);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_eDisplayType) == 0x74);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_eDisplayUnits) == 0x78);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_bIsHidden) == 0x7c);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_bIsNegativeAttribute) == 0x7d);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_strCSSClass) == 0x80);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_strLocTokenOverride) == 0x88);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_bCanSetTokenOverride) == 0x90);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_strConditionalLocTokenOverride) == 0x98);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_bRoundDown) == 0xa0);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_bIsAbilityDamageProperty) == 0xa1);
        static_assert(offsetof(source2sdk::client::CitadelAbilityProperty_t, m_eStatsUsageFlags) == 0xa4);
        
        static_assert(sizeof(source2sdk::client::CitadelAbilityProperty_t) == 0xc8);
    };
};
