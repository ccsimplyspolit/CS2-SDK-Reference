#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EHUDElementButtonHintLocType_t.hpp"
#include "source2sdk/client/EHUDElementButtonHintSide_t.hpp"
#include "source2sdk/client/EHUDElementButtonType_t.hpp"
#include "source2sdk/client/InputBitMask_t.hpp"

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
        // Size: 0x60
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyArrayElementNameKey "m_strContext"
        #pragma pack(push, 1)
        struct CitadelAbilityHUDElementButtonHint_t
        {
        public:
            CUtlString m_strContext; // 0x0            
            uint8_t _pad0008[0x4]; // 0x8
            // metadata: MPropertyDescription "Why type of input is required for this hint"
            source2sdk::client::EHUDElementButtonType_t m_eButtonHintType; // 0xc            
            // metadata: MPropertyDescription "What button is used in this hint"
            // metadata: MPropertySuppressExpr "m_bButton1IsSlot == true"
            source2sdk::client::InputBitMask_t m_nButton1; // 0x10            
            bool m_bButton1IsSlot; // 0x18            
            uint8_t _pad0019[0xf]; // 0x19
            // metadata: MPropertyDescription "What's the 2nd button used in this hint"
            // metadata: MPropertySuppressExpr "m_bButton2IsSlot == true"
            source2sdk::client::InputBitMask_t m_nButton2; // 0x28            
            bool m_bButton2IsSlot; // 0x30            
            uint8_t _pad0031[0xf]; // 0x31
            // metadata: MPropertyDescription "'Cast' and 'Alt-Cast' will look at the ability vdata for the loc tokens for casting.  'Custom' allows entering a loc token on this hint"
            source2sdk::client::EHUDElementButtonHintLocType_t m_eHintLocType; // 0x40            
            uint8_t _pad0044[0x4]; // 0x44
            // metadata: MPropertyDescription "The loc string to display.  Don't forget the #!"
            // metadata: MPropertySuppressExpr "m_eHintLocType != EButtonHintLocType_Custom"
            CUtlString m_strLocToken; // 0x48            
            // metadata: MPropertyDescription "On which side of the crosshair should this hint show"
            source2sdk::client::EHUDElementButtonHintSide_t m_eHintSide; // 0x50            
            // metadata: MPropertyAttributeRange "0 2"
            // metadata: MPropertyDescription "How close to the crosshair to be.  Hints are next to the crosshair when by themselves, but get ordered by this priority when multiple are active on the same side.  0 is highest priority (closest to crosshair)"
            std::int32_t m_nPriority; // 0x54            
            // metadata: MPropertyDescription "Should show ability icon on the hint?"
            bool m_bShowAbilityIcon; // 0x58            
            // metadata: MPropertyDescription "Is the hint shown while on cooldown?"
            bool m_bIsHintShownWhileOnCooldown; // 0x59            
            uint8_t _pad005a[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElementButtonHint_t, m_strContext) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElementButtonHint_t, m_eButtonHintType) == 0xc);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElementButtonHint_t, m_nButton1) == 0x10);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElementButtonHint_t, m_bButton1IsSlot) == 0x18);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElementButtonHint_t, m_nButton2) == 0x28);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElementButtonHint_t, m_bButton2IsSlot) == 0x30);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElementButtonHint_t, m_eHintLocType) == 0x40);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElementButtonHint_t, m_strLocToken) == 0x48);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElementButtonHint_t, m_eHintSide) == 0x50);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElementButtonHint_t, m_nPriority) == 0x54);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElementButtonHint_t, m_bShowAbilityIcon) == 0x58);
        static_assert(offsetof(source2sdk::client::CitadelAbilityHUDElementButtonHint_t, m_bIsHintShownWhileOnCooldown) == 0x59);
        
        static_assert(sizeof(source2sdk::client::CitadelAbilityHUDElementButtonHint_t) == 0x60);
    };
};
