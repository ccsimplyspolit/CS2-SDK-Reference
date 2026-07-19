#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityBarType_t.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x580
        // Has VTable
        // Is Abstract
        // Construct disallowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTABaseAbility : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad0498[0x8]; // 0x498
            std::int32_t m_iAbilityIndex; // 0x4a0            
            std::int32_t m_nStolenActivity; // 0x4a4            
            bool m_bChanneling; // 0x4a8            
            bool m_bRedirected; // 0x4a9            
            bool m_bRefCountsModifiers; // 0x4aa            
            uint8_t _pad04ab[0x1]; // 0x4ab
            std::int32_t m_iModifierRefCount; // 0x4ac            
            bool m_bWantsToNeutralCast; // 0x4b0            
            uint8_t _pad04b1[0x3]; // 0x4b1
            // m_hNeutralCastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hNeutralCastTarget;
            char m_hNeutralCastTarget[0x4]; // 0x4b4            
            bool m_bServerOnlyAbility; // 0x4b8            
            bool m_bOnlyTransmitToCaster; // 0x4b9            
            bool m_bGrantedAbilityChargesFromScepter; // 0x4ba            
            bool m_bGrantedAbilityChargesFromShard; // 0x4bb            
            bool m_bIsDefaultHeroAbility; // 0x4bc            
            bool m_bConsiderOvershootInGetCastRange; // 0x4bd            
            uint8_t _pad04be[0x2]; // 0x4be
            float m_flExtendChannelTime; // 0x4c0            
            bool m_bDisableSharedCooldown; // 0x4c4            
            bool m_bHidden; // 0x4c5            
            bool m_bActivated; // 0x4c6            
            uint8_t _pad04c7[0x1]; // 0x4c7
            source2sdk::client::AbilityBarType_t m_nAbilityBarType; // 0x4c8            
            std::int32_t m_iDirtyButtons; // 0x4cc            
            std::int32_t m_iLevel; // 0x4d0            
            bool m_bToggleState; // 0x4d4            
            bool m_bInAbilityPhase; // 0x4d5            
            uint8_t _pad04d6[0x2]; // 0x4d6
            float m_flAbilityMuteDuration; // 0x4d8            
            float m_fCooldown; // 0x4dc            
            float m_flCooldownLength; // 0x4e0            
            std::int32_t m_iManaCost; // 0x4e4            
            bool m_bAutoCastState; // 0x4e8            
            bool m_bAltCastState; // 0x4e9            
            uint8_t _pad04ea[0x2]; // 0x4ea
            source2sdk::entity2::GameTime_t m_flChannelStartTime; // 0x4ec            
            source2sdk::entity2::GameTime_t m_flCastStartTime; // 0x4f0            
            bool m_bInIndefiniteCooldown; // 0x4f4            
            bool m_bFrozenCooldown; // 0x4f5            
            uint8_t _pad04f6[0x2]; // 0x4f6
            std::int32_t m_nFrozenCooldownStack; // 0x4f8            
            float m_flOverrideCastPoint; // 0x4fc            
            bool m_bStolen; // 0x500            
            bool m_bReplicated; // 0x501            
            bool m_bStealable; // 0x502            
            uint8_t _pad0503[0x1]; // 0x503
            std::int32_t m_nAbilityCurrentCharges; // 0x504            
            float m_fAbilityChargeRestoreTimeRemaining; // 0x508            
            bool m_bUpgradeRecommended; // 0x50c            
            uint8_t _pad050d[0x3]; // 0x50d
            std::int32_t m_nMaxLevelOverride; // 0x510            
            std::int32_t m_nRequiredLevelOverride; // 0x514            
            std::int32_t m_nLevelsBetweenUpgradesOverride; // 0x518            
            uint8_t _pad051c[0x4]; // 0x51c
            source2sdk::client::HeroFacetKey_t m_nHeroFacetKey; // 0x520            
            float m_flTotalExtendedChannelTime; // 0x528            
            bool m_bGrantedByFacet; // 0x52c            
            bool m_bReflection; // 0x52d            
            uint8_t _pad052e[0x2]; // 0x52e
            // m_pReflectionSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_pReflectionSourceAbility;
            char m_pReflectionSourceAbility[0x4]; // 0x530            
            // m_hHiddenAbilityForDisplay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hHiddenAbilityForDisplay;
            char m_hHiddenAbilityForDisplay[0x4]; // 0x534            
            bool m_bUpgradedWithTome; // 0x538            
            uint8_t _pad0539[0x3]; // 0x539
            // m_hReflectionCause has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hReflectionCause;
            char m_hReflectionCause[0x4]; // 0x53c            
            uint8_t _pad0540[0x28]; // 0x540
            source2sdk::client::item_definition_index_t m_nBackedByEconItemIndex; // 0x568            
            uint8_t _pad056c[0xd]; // 0x56c
            bool m_bAltCastOrdered; // 0x579            
            uint8_t _pad057a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTABaseAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTABaseAbility) == 0x580);
    };
};
