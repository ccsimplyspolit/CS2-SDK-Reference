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
        // Size: 0x41f0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DataDriven : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::AbilityID_t m_nAbilityID; // 0x1a58            
            std::int32_t m_nIndexInAbility; // 0x1a5c            
            bool m_bIsHidden; // 0x1a60            
            bool m_bIsDebuff; // 0x1a61            
            bool m_bIsPurgable; // 0x1a62            
            bool m_bIsStunDebuff; // 0x1a63            
            bool m_bAllowIllusionDuplicate; // 0x1a64            
            bool m_bRemoveOnDeath; // 0x1a65            
            uint8_t _pad1a66[0x2]; // 0x1a66
            char* m_pszAuraModifier; // 0x1a68            
            std::int32_t m_nAuraModifierIndex; // 0x1a70            
            std::int32_t m_nAuraRadius; // 0x1a74            
            std::int32_t m_nAuraSearchTeam; // 0x1a78            
            std::int32_t m_nAuraSearchType; // 0x1a7c            
            std::int32_t m_nAuraSearchFlags; // 0x1a80            
            bool m_bAuraApplyToCaster; // 0x1a84            
            bool m_bAuraApplyToParent; // 0x1a85            
            uint8_t _pad1a86[0x2]; // 0x1a86
            std::int32_t m_nAttributes; // 0x1a88            
            uint8_t _pad1a8c[0x4]; // 0x1a8c
            char* m_pszEffectName; // 0x1a90            
            std::int32_t m_nEffectAttachType; // 0x1a98            
            std::int32_t m_nModifierPriority; // 0x1a9c            
            char* m_pszStatusEffectName; // 0x1aa0            
            std::int32_t m_nStatusEffectPriority; // 0x1aa8            
            std::int32_t m_nOverrideAnimation; // 0x1aac            
            bool m_bNeedsReParseIfRefreshed; // 0x1ab0            
            uint8_t _pad1ab1[0x7]; // 0x1ab1
            char* m_pszModelName; // 0x1ab8            
            uint8_t _pad1ac0[0x2628]; // 0x1ac0
            std::uint64_t m_nModifierStatesEnabled; // 0x40e8            
            std::uint64_t m_nModifierStatesDisabled; // 0x40f0            
            KeyValues* m_pOnCreated; // 0x40f8            
            KeyValues* m_pOnIntervalThink; // 0x4100            
            KeyValues* m_pOnDestroy; // 0x4108            
            KeyValues* m_pOnAttackStart; // 0x4110            
            KeyValues* m_pOnAttack; // 0x4118            
            KeyValues* m_pOnAttackLanded; // 0x4120            
            KeyValues* m_pOnAttackFailed; // 0x4128            
            KeyValues* m_pOnAttackAllied; // 0x4130            
            KeyValues* m_pOnProjectileDodge; // 0x4138            
            KeyValues* m_pOnOrder; // 0x4140            
            KeyValues* m_pOnUnitMoved; // 0x4148            
            KeyValues* m_pOnAbilityStart; // 0x4150            
            KeyValues* m_pOnAbilityExecuted; // 0x4158            
            KeyValues* m_pOnBreakInvisibility; // 0x4160            
            KeyValues* m_pOnAbilityEndChannel; // 0x4168            
            KeyValues* m_pOnTakeDamage; // 0x4170            
            KeyValues* m_pOnDealDamage; // 0x4178            
            KeyValues* m_pOnStateChanged; // 0x4180            
            KeyValues* m_pOnAttacked; // 0x4188            
            KeyValues* m_pOnDeath; // 0x4190            
            KeyValues* m_pOnKill; // 0x4198            
            KeyValues* m_pOnRespawn; // 0x41a0            
            KeyValues* m_pOnSpentMana; // 0x41a8            
            KeyValues* m_pOnTeleporting; // 0x41b0            
            KeyValues* m_pOnTeleported; // 0x41b8            
            KeyValues* m_pOnHealthGained; // 0x41c0            
            KeyValues* m_pOnManaGained; // 0x41c8            
            KeyValues* m_pOnHeroKilled; // 0x41d0            
            KeyValues* m_pOnHealReceived; // 0x41d8            
            KeyValues* m_pOnAttackFinished; // 0x41e0            
            KeyValues* m_pOnAttackCancelled; // 0x41e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DataDriven because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DataDriven) == 0x41f0);
    };
};
