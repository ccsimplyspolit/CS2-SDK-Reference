#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityBarType_t.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6a8
        // Has VTable
        // Is Abstract
        // Construct disallowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTABaseAbility : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05f0[0x8]; // 0x5f0
            bool m_bAuxCastState; // 0x5f8            
            uint8_t _pad05f9[0x3]; // 0x5f9
            std::int32_t m_iEnemyLevel; // 0x5fc            
            std::int32_t m_iMaxLevel; // 0x600            
            std::int32_t m_iRequiredLevel; // 0x604            
            std::int32_t m_iLevelsBetweenUpgrades; // 0x608            
            bool m_bCanLearn; // 0x60c            
            uint8_t _pad060d[0x3]; // 0x60d
            float m_flUpgradeBlend; // 0x610            
            bool m_bUpgradedDuringQuickcastPreview; // 0x614            
            bool m_bConsiderOvershootInGetCastRange; // 0x615            
            bool m_bRefCountsModifiers; // 0x616            
            bool m_bHidden; // 0x617            
            bool m_bOldHidden; // 0x618            
            bool m_bActivated; // 0x619            
            bool m_bOldActivated; // 0x61a            
            uint8_t _pad061b[0x1]; // 0x61b
            source2sdk::client::AbilityBarType_t m_nAbilityBarType; // 0x61c            
            std::int32_t m_iDirtyButtons; // 0x620            
            bool m_bPerformDirtyParity; // 0x624            
            uint8_t _pad0625[0x3]; // 0x625
            std::int32_t m_iLevel; // 0x628            
            bool m_bAbilityLevelDirty; // 0x62c            
            bool m_bToggleState; // 0x62d            
            uint8_t _pad062e[0x2]; // 0x62e
            float m_flAbilityMuteDuration; // 0x630            
            bool m_bInAbilityPhase; // 0x634            
            uint8_t _pad0635[0x3]; // 0x635
            float m_fCooldown; // 0x638            
            float m_flCooldownLength; // 0x63c            
            std::int32_t m_iManaCost; // 0x640            
            bool m_bAutoCastState; // 0x644            
            bool m_bAltCastState; // 0x645            
            bool m_bLocalAltCastState; // 0x646            
            uint8_t _pad0647[0x1]; // 0x647
            std::int32_t m_nLocalAltCastChangeSequenceNumber; // 0x648            
            source2sdk::entity2::GameTime_t m_flChannelStartTime; // 0x64c            
            source2sdk::entity2::GameTime_t m_flCastStartTime; // 0x650            
            bool m_bInIndefiniteCooldown; // 0x654            
            bool m_bFrozenCooldown; // 0x655            
            uint8_t _pad0656[0x2]; // 0x656
            float m_flOverrideCastPoint; // 0x658            
            bool m_bStolen; // 0x65c            
            bool m_bStealable; // 0x65d            
            bool m_bReplicated; // 0x65e            
            uint8_t _pad065f[0x1]; // 0x65f
            std::int32_t m_nAbilityCurrentCharges; // 0x660            
            float m_fAbilityChargeRestoreTimeRemaining; // 0x664            
            bool m_bUpgradeRecommended; // 0x668            
            uint8_t _pad0669[0x3]; // 0x669
            std::int32_t m_nMaxLevelOverride; // 0x66c            
            std::int32_t m_nRequiredLevelOverride; // 0x670            
            std::int32_t m_nLevelsBetweenUpgradesOverride; // 0x674            
            source2sdk::client::HeroFacetKey_t m_nHeroFacetKey; // 0x678            
            float m_flTotalExtendedChannelTime; // 0x680            
            bool m_bGrantedByFacet; // 0x684            
            bool m_bReflection; // 0x685            
            uint8_t _pad0686[0x2]; // 0x686
            // m_pReflectionSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_pReflectionSourceAbility;
            char m_pReflectionSourceAbility[0x4]; // 0x688            
            // m_hHiddenAbilityForDisplay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hHiddenAbilityForDisplay;
            char m_hHiddenAbilityForDisplay[0x4]; // 0x68c            
            uint8_t _pad0690[0x4]; // 0x690
            bool m_bUpgradedWithTome; // 0x694            
            uint8_t _pad0695[0xb]; // 0x695
            float m_flLastCastClickTime; // 0x6a0            
            uint8_t _pad06a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTABaseAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTABaseAbility) == 0x6a8);
    };
};
