#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/CitadelAbilityUpgradeInfoPacked_t.hpp"
#include "source2sdk/client/CitadelStolenAbilitySlot_t.hpp"
#include "source2sdk/client/EAbilityBucketType.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x11d8
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkIncludeByName "m_flTimeScale"
        // static metadata: MNetworkExcludeByName "m_angRotation"
        // static metadata: MNetworkExcludeByName "m_cellX"
        // static metadata: MNetworkExcludeByName "m_cellY"
        // static metadata: MNetworkExcludeByName "m_cellZ"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_flEncodedController"
        // static metadata: MNetworkExcludeByName "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_flSimulationTime"
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_nForceBone"
        // static metadata: MNetworkExcludeByName "m_nHitboxSet"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByName "m_vecForce"
        // static metadata: MNetworkExcludeByName "m_vecMaxs"
        // static metadata: MNetworkExcludeByName "m_vecMins"
        // static metadata: MNetworkExcludeByName "m_vecOrigin"
        // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMaxs"
        // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMins"
        // static metadata: MNetworkExcludeByName "m_vLookTargetPosition"
        // static metadata: MNetworkExcludeByName "m_MoveCollide"
        // static metadata: MNetworkExcludeByName "m_MoveType"
        // static metadata: MNetworkExcludeByName "m_Gender"
        // static metadata: MNetworkExcludeByName "m_flElasticity"
        // static metadata: MNetworkExcludeByName "m_nMinCPULevel"
        // static metadata: MNetworkExcludeByName "m_nMinGPULevel"
        // static metadata: MNetworkExcludeByName "m_nMaxCPULevel"
        // static metadata: MNetworkExcludeByName "m_nMaxGPULevel"
        // static metadata: MNetworkExcludeByName "m_flNavIgnoreUntilTime"
        // static metadata: MNetworkExcludeByName "m_ubInterpolationFrame"
        // static metadata: MNetworkExcludeByName "m_flScale"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkOverride "m_flTimeScale"
        // static metadata: MNetworkVarNames "bool m_bChanneling"
        // static metadata: MNetworkVarNames "bool m_bInCastDelay"
        // static metadata: MNetworkVarNames "bool m_bShouldBeExecuted"
        // static metadata: MNetworkVarNames "bool m_bCanBeUpgraded"
        // static metadata: MNetworkVarNames "CitadelStolenAbilitySlot_t m_eStolenInSlot"
        // static metadata: MNetworkVarNames "CitadelAbilityUpgradeInfoPacked_t m_nUpgradeInfo"
        // static metadata: MNetworkVarNames "EAbilityBucketType m_iBucketID"
        // static metadata: MNetworkVarNames "bool m_bToggleState"
        // static metadata: MNetworkVarNames "GameTime_t m_flCooldownStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flCooldownEnd"
        // static metadata: MNetworkVarNames "GameTime_t m_flCastCompletedTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flChannelStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flCastDelayStartTime"
        // static metadata: MNetworkVarNames "EAbilitySlots_t m_eAbilitySlot"
        // static metadata: MNetworkVarNames "GameTime_t m_flPostCastDelayEndTime"
        // static metadata: MNetworkVarNames "int m_iRemainingCharges"
        // static metadata: MNetworkVarNames "GameTime_t m_flChargeRechargeStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flChargeRechargeEnd"
        // static metadata: MNetworkVarNames "GameTime_t m_flMovementControlActiveTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flSelectedChangedTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAltCastHoldStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAltCastDoubleTapStartTime"
        // static metadata: MNetworkVarNames "bool m_bCanBeImbued"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecImbuedAbilities"
        // static metadata: MNetworkVarNames "bool m_bSelectionModeIsAltMode"
        #pragma pack(push, 1)
        class C_CitadelBaseAbility : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05f0[0xd0]; // 0x5f0
            // m_vecIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CModifierHandleTyped<source2sdk::client::CCitadelModifier>> m_vecIntrinsicModifiers;
            char m_vecIntrinsicModifiers[0x18]; // 0x6c0            
            // m_pCastDelayAutoModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::client::CCitadelModifier> m_pCastDelayAutoModifier;
            char m_pCastDelayAutoModifier[0x18]; // 0x6d8            
            // m_pChannelAutoModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::client::CCitadelModifier> m_pChannelAutoModifier;
            char m_pChannelAutoModifier[0x18]; // 0x6f0            
            CGlobalSymbol m_strUsedCastGraphParam; // 0x708            
            std::int32_t m_nCastParamNeedsResetTick; // 0x710            
            uint8_t _pad0714[0x4]; // 0x714
            bool m_bIsCoolingDownInternal; // 0x718            
            uint8_t _pad0719[0x3]; // 0x719
            source2sdk::entity2::GameTime_t m_flCancelMashProtectionEndTime; // 0x71c            
            source2sdk::entity2::GameTime_t m_flCancelLockoutEndTime; // 0x720            
            uint8_t _pad0724[0x1c]; // 0x724
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnChannelingChanged"
            bool m_bChanneling; // 0x740            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnInCastDelayChanged"
            bool m_bInCastDelay; // 0x741            
            // metadata: MNetworkEnable
            bool m_bShouldBeExecuted; // 0x742            
            // metadata: MNetworkEnable
            bool m_bCanBeUpgraded; // 0x743            
            uint8_t _pad0744[0x4]; // 0x744
            // metadata: MNetworkEnable
            source2sdk::client::CitadelStolenAbilitySlot_t m_eStolenInSlot; // 0x748            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUpgradeInfoChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::client::CitadelAbilityUpgradeInfoPacked_t m_nUpgradeInfo; // 0x758            
            // metadata: MNetworkEnable
            source2sdk::client::EAbilityBucketType m_iBucketID; // 0x75c            
            // metadata: MNetworkEnable
            bool m_bToggleState; // 0x760            
            uint8_t _pad0761[0x3]; // 0x761
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flCooldownStart; // 0x764            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "OnAbilityCooldownEndChanged"
            source2sdk::entity2::GameTime_t m_flCooldownEnd; // 0x768            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCastCompletedTime; // 0x76c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flChannelStartTime; // 0x770            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCastDelayStartTime; // 0x774            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilitySlotChanged"
            source2sdk::client::EAbilitySlots_t m_eAbilitySlot; // 0x778            
            uint8_t _pad077a[0x2]; // 0x77a
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flPostCastDelayEndTime; // 0x77c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iRemainingCharges; // 0x780            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flChargeRechargeStart; // 0x784            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flChargeRechargeEnd; // 0x788            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flMovementControlActiveTime; // 0x78c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSelectedChangedTime; // 0x790            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAltCastHoldStartTime; // 0x794            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAltCastDoubleTapStartTime; // 0x798            
            // metadata: MNetworkEnable
            bool m_bCanBeImbued; // 0x79c            
            uint8_t _pad079d[0x3]; // 0x79d
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilityImbuedChanged"
            // m_vecImbuedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlStringToken> m_vecImbuedAbilities;
            char m_vecImbuedAbilities[0x18]; // 0x7a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSelectionModeIsAltMode; // 0x7b8            
            bool m_bPredErrorCheckChanneling; // 0x7b9            
            bool m_bPredErrorCheckCasting; // 0x7ba            
            uint8_t _pad07bb[0x1]; // 0x7bb
            source2sdk::entity2::GameTime_t m_flPredErrorCheckCastCompleteTime; // 0x7bc            
            bool m_bPredErrorCheckIsSelected; // 0x7c0            
            uint8_t _pad07c1[0x9db]; // 0x7c1
            source2sdk::entity2::GameTime_t m_flNextMeepMopTime; // 0x119c            
            uint8_t _pad11a0[0x38];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelBaseAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelBaseAbility) == 0x11d8);
    };
};
