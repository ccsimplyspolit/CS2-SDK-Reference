#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x4258
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DataDriven : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a78[0x18]; // 0x1a78
            source2sdk::client::AbilityID_t m_nAbilityID; // 0x1a90
            std::int32_t m_nIndexInAbility; // 0x1a94
            bool m_bIsHidden; // 0x1a98
            bool m_bIsDebuff; // 0x1a99
            bool m_bIsPurgable; // 0x1a9a
            bool m_bIsStunDebuff; // 0x1a9b
            bool m_bAllowIllusionDuplicate; // 0x1a9c
            bool m_bRemoveOnDeath; // 0x1a9d
            uint8_t _pad1a9e[0x2]; // 0x1a9e
            char* m_pszAuraModifier; // 0x1aa0
            std::int32_t m_nAuraModifierIndex; // 0x1aa8
            std::int32_t m_nAuraRadius; // 0x1aac
            std::int32_t m_nAuraSearchTeam; // 0x1ab0
            std::int32_t m_nAuraSearchType; // 0x1ab4
            std::int32_t m_nAuraSearchFlags; // 0x1ab8
            bool m_bAuraApplyToCaster; // 0x1abc
            bool m_bAuraApplyToParent; // 0x1abd
            uint8_t _pad1abe[0x2]; // 0x1abe
            std::int32_t m_nAttributes; // 0x1ac0
            uint8_t _pad1ac4[0x4]; // 0x1ac4
            char* m_pszEffectName; // 0x1ac8
            std::int32_t m_nEffectAttachType; // 0x1ad0
            std::int32_t m_nModifierPriority; // 0x1ad4
            char* m_pszStatusEffectName; // 0x1ad8
            std::int32_t m_nStatusEffectPriority; // 0x1ae0
            std::int32_t m_nOverrideAnimation; // 0x1ae4
            bool m_bNeedsReParseIfRefreshed; // 0x1ae8
            uint8_t _pad1ae9[0x7]; // 0x1ae9
            char* m_pszModelName; // 0x1af0
            uint8_t _pad1af8[0x2658]; // 0x1af8
            std::uint64_t m_nModifierStatesEnabled; // 0x4150
            std::uint64_t m_nModifierStatesDisabled; // 0x4158
            KeyValues* m_pOnCreated; // 0x4160
            KeyValues* m_pOnIntervalThink; // 0x4168
            KeyValues* m_pOnDestroy; // 0x4170
            KeyValues* m_pOnAttackStart; // 0x4178
            KeyValues* m_pOnAttack; // 0x4180
            KeyValues* m_pOnAttackLanded; // 0x4188
            KeyValues* m_pOnAttackFailed; // 0x4190
            KeyValues* m_pOnAttackAllied; // 0x4198
            KeyValues* m_pOnProjectileDodge; // 0x41a0
            KeyValues* m_pOnOrder; // 0x41a8
            KeyValues* m_pOnUnitMoved; // 0x41b0
            KeyValues* m_pOnAbilityStart; // 0x41b8
            KeyValues* m_pOnAbilityExecuted; // 0x41c0
            KeyValues* m_pOnBreakInvisibility; // 0x41c8
            KeyValues* m_pOnAbilityEndChannel; // 0x41d0
            KeyValues* m_pOnTakeDamage; // 0x41d8
            KeyValues* m_pOnDealDamage; // 0x41e0
            KeyValues* m_pOnStateChanged; // 0x41e8
            KeyValues* m_pOnAttacked; // 0x41f0
            KeyValues* m_pOnDeath; // 0x41f8
            KeyValues* m_pOnKill; // 0x4200
            KeyValues* m_pOnRespawn; // 0x4208
            KeyValues* m_pOnSpentMana; // 0x4210
            KeyValues* m_pOnTeleporting; // 0x4218
            KeyValues* m_pOnTeleported; // 0x4220
            KeyValues* m_pOnHealthGained; // 0x4228
            KeyValues* m_pOnManaGained; // 0x4230
            KeyValues* m_pOnHeroKilled; // 0x4238
            KeyValues* m_pOnHealReceived; // 0x4240
            KeyValues* m_pOnAttackFinished; // 0x4248
            KeyValues* m_pOnAttackCancelled; // 0x4250
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_DataDriven because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DataDriven) == 0x4258);
    };
};
