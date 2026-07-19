#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelAbilityUpgradeInfoPacked_t.hpp"
#include "source2sdk/client/EAbilityBucketType.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelStolenAbilitySlot_t.hpp"

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
        // Size: 0xf70
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
        // static metadata: MNetworkUserGroupProxy "CCitadelBaseAbility"
        // static metadata: MNetworkUserGroupProxy "CCitadelBaseAbility"
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
        class CCitadelBaseAbility : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a0[0xd8]; // 0x4a0
            // m_vecIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CModifierHandleTyped<source2sdk::server::CCitadelModifier>> m_vecIntrinsicModifiers;
            char m_vecIntrinsicModifiers[0x18]; // 0x578            
            // m_pCastDelayAutoModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_pCastDelayAutoModifier;
            char m_pCastDelayAutoModifier[0x18]; // 0x590            
            // m_pChannelAutoModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_pChannelAutoModifier;
            char m_pChannelAutoModifier[0x18]; // 0x5a8            
            CGlobalSymbol m_strUsedCastGraphParam; // 0x5c0            
            std::int32_t m_nCastParamNeedsResetTick; // 0x5c8            
            uint8_t _pad05cc[0x4]; // 0x5cc
            bool m_bIsCoolingDownInternal; // 0x5d0            
            uint8_t _pad05d1[0x3]; // 0x5d1
            source2sdk::entity2::GameTime_t m_flCancelMashProtectionEndTime; // 0x5d4            
            source2sdk::entity2::GameTime_t m_flCancelLockoutEndTime; // 0x5d8            
            uint8_t _pad05dc[0x1c]; // 0x5dc
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnChannelingChanged"
            bool m_bChanneling; // 0x5f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnInCastDelayChanged"
            bool m_bInCastDelay; // 0x5f9            
            // metadata: MNetworkEnable
            bool m_bShouldBeExecuted; // 0x5fa            
            // metadata: MNetworkEnable
            bool m_bCanBeUpgraded; // 0x5fb            
            uint8_t _pad05fc[0x4]; // 0x5fc
            // metadata: MNetworkEnable
            source2sdk::server::CitadelStolenAbilitySlot_t m_eStolenInSlot; // 0x600            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUpgradeInfoChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::client::CitadelAbilityUpgradeInfoPacked_t m_nUpgradeInfo; // 0x610            
            // metadata: MNetworkEnable
            source2sdk::client::EAbilityBucketType m_iBucketID; // 0x614            
            // metadata: MNetworkEnable
            bool m_bToggleState; // 0x618            
            uint8_t _pad0619[0x3]; // 0x619
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flCooldownStart; // 0x61c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "OnAbilityCooldownEndChanged"
            source2sdk::entity2::GameTime_t m_flCooldownEnd; // 0x620            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCastCompletedTime; // 0x624            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flChannelStartTime; // 0x628            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCastDelayStartTime; // 0x62c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilitySlotChanged"
            source2sdk::client::EAbilitySlots_t m_eAbilitySlot; // 0x630            
            uint8_t _pad0632[0x2]; // 0x632
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flPostCastDelayEndTime; // 0x634            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iRemainingCharges; // 0x638            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flChargeRechargeStart; // 0x63c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flChargeRechargeEnd; // 0x640            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flMovementControlActiveTime; // 0x644            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSelectedChangedTime; // 0x648            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAltCastHoldStartTime; // 0x64c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAltCastDoubleTapStartTime; // 0x650            
            // metadata: MNetworkEnable
            bool m_bCanBeImbued; // 0x654            
            uint8_t _pad0655[0x3]; // 0x655
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilityImbuedChanged"
            // m_vecImbuedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlStringToken> m_vecImbuedAbilities;
            char m_vecImbuedAbilities[0x18]; // 0x658            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSelectionModeIsAltMode; // 0x670            
            uint8_t _pad0671[0x3]; // 0x671
            float m_flPreviousEffectiveCooldown; // 0x674            
            uint8_t _pad0678[0x8f8];
            
            // Datamap fields:
            // int32_t slot; // 0x7fffffff
            // int32_t bucket_id; // 0x7fffffff
            // float time_scale; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelBaseAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelBaseAbility) == 0xf70);
    };
};
