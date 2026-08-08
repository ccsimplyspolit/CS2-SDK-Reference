#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x4240
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DataDriven : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::AbilityID_t m_nAbilityID; // 0x1a78
            std::int32_t m_nIndexInAbility; // 0x1a7c
            bool m_bIsHidden; // 0x1a80
            bool m_bIsDebuff; // 0x1a81
            bool m_bIsPurgable; // 0x1a82
            bool m_bIsStunDebuff; // 0x1a83
            bool m_bAllowIllusionDuplicate; // 0x1a84
            bool m_bRemoveOnDeath; // 0x1a85
            uint8_t _pad1a86[0x2]; // 0x1a86
            char* m_pszAuraModifier; // 0x1a88
            std::int32_t m_nAuraModifierIndex; // 0x1a90
            std::int32_t m_nAuraRadius; // 0x1a94
            std::int32_t m_nAuraSearchTeam; // 0x1a98
            std::int32_t m_nAuraSearchType; // 0x1a9c
            std::int32_t m_nAuraSearchFlags; // 0x1aa0
            bool m_bAuraApplyToCaster; // 0x1aa4
            bool m_bAuraApplyToParent; // 0x1aa5
            uint8_t _pad1aa6[0x2]; // 0x1aa6
            std::int32_t m_nAttributes; // 0x1aa8
            uint8_t _pad1aac[0x4]; // 0x1aac
            char* m_pszEffectName; // 0x1ab0
            std::int32_t m_nEffectAttachType; // 0x1ab8
            std::int32_t m_nModifierPriority; // 0x1abc
            char* m_pszStatusEffectName; // 0x1ac0
            std::int32_t m_nStatusEffectPriority; // 0x1ac8
            std::int32_t m_nOverrideAnimation; // 0x1acc
            bool m_bNeedsReParseIfRefreshed; // 0x1ad0
            uint8_t _pad1ad1[0x7]; // 0x1ad1
            char* m_pszModelName; // 0x1ad8
            uint8_t _pad1ae0[0x2658]; // 0x1ae0
            std::uint64_t m_nModifierStatesEnabled; // 0x4138
            std::uint64_t m_nModifierStatesDisabled; // 0x4140
            KeyValues* m_pOnCreated; // 0x4148
            KeyValues* m_pOnIntervalThink; // 0x4150
            KeyValues* m_pOnDestroy; // 0x4158
            KeyValues* m_pOnAttackStart; // 0x4160
            KeyValues* m_pOnAttack; // 0x4168
            KeyValues* m_pOnAttackLanded; // 0x4170
            KeyValues* m_pOnAttackFailed; // 0x4178
            KeyValues* m_pOnAttackAllied; // 0x4180
            KeyValues* m_pOnProjectileDodge; // 0x4188
            KeyValues* m_pOnOrder; // 0x4190
            KeyValues* m_pOnUnitMoved; // 0x4198
            KeyValues* m_pOnAbilityStart; // 0x41a0
            KeyValues* m_pOnAbilityExecuted; // 0x41a8
            KeyValues* m_pOnBreakInvisibility; // 0x41b0
            KeyValues* m_pOnAbilityEndChannel; // 0x41b8
            KeyValues* m_pOnTakeDamage; // 0x41c0
            KeyValues* m_pOnDealDamage; // 0x41c8
            KeyValues* m_pOnStateChanged; // 0x41d0
            KeyValues* m_pOnAttacked; // 0x41d8
            KeyValues* m_pOnDeath; // 0x41e0
            KeyValues* m_pOnKill; // 0x41e8
            KeyValues* m_pOnRespawn; // 0x41f0
            KeyValues* m_pOnSpentMana; // 0x41f8
            KeyValues* m_pOnTeleporting; // 0x4200
            KeyValues* m_pOnTeleported; // 0x4208
            KeyValues* m_pOnHealthGained; // 0x4210
            KeyValues* m_pOnManaGained; // 0x4218
            KeyValues* m_pOnHeroKilled; // 0x4220
            KeyValues* m_pOnHealReceived; // 0x4228
            KeyValues* m_pOnAttackFinished; // 0x4230
            KeyValues* m_pOnAttackCancelled; // 0x4238
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_DataDriven because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DataDriven) == 0x4240);
    };
};
