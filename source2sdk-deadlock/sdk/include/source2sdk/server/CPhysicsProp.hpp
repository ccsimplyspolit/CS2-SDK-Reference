#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/physicslib/DynamicContinuousContactBehavior_t.hpp"
#include "source2sdk/server/CBreakableProp.hpp"
#include "source2sdk/server/CPhysicsProp_CrateType_t.hpp"
#include "source2sdk/server/INavObstacle_NavObstacleType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xd60
        // Has VTable
        // 
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "bool m_bAwake"
        #pragma pack(push, 1)
        class CPhysicsProp : public source2sdk::server::CBreakableProp
        {
        public:
            uint8_t _pad0c20[0x10]; // 0xc20
            source2sdk::entity2::CEntityIOOutput m_MotionEnabled; // 0xc30            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0xc48            
            source2sdk::entity2::CEntityIOOutput m_OnAwake; // 0xc60            
            source2sdk::entity2::CEntityIOOutput m_OnAsleep; // 0xc78            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0xc90            
            source2sdk::entity2::CEntityIOOutput m_OnOutOfWorld; // 0xca8            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0xcc0            
            bool m_bForceNavIgnore; // 0xcd8            
            bool m_bNoNavmeshBlocker; // 0xcd9            
            bool m_bForceNpcExclude; // 0xcda            
            uint8_t _pad0cdb[0x1]; // 0xcdb
            float m_massScale; // 0xcdc            
            float m_buoyancyScale; // 0xce0            
            std::int32_t m_damageType; // 0xce4            
            std::int32_t m_damageToEnableMotion; // 0xce8            
            float m_flForceToEnableMotion; // 0xcec            
            bool m_bThrownByPlayer; // 0xcf0            
            bool m_bDroppedByPlayer; // 0xcf1            
            bool m_bTouchedByPlayer; // 0xcf2            
            bool m_bFirstCollisionAfterLaunch; // 0xcf3            
            // metadata: MNotSaved
            bool m_bHasBeenAwakened; // 0xcf4            
            // metadata: MNotSaved
            bool m_bIsOverrideProp; // 0xcf5            
            uint8_t _pad0cf6[0x2]; // 0xcf6
            source2sdk::entity2::GameTime_t m_flLastBurn; // 0xcf8            
            source2sdk::physicslib::DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xcfc            
            uint8_t _pad0cfd[0x3]; // 0xcfd
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xd00            
            std::int32_t m_iInitialGlowState; // 0xd04            
            std::int32_t m_nGlowRange; // 0xd08            
            std::int32_t m_nGlowRangeMin; // 0xd0c            
            Color m_glowColor; // 0xd10            
            bool m_bShouldAutoConvertBackFromDebris; // 0xd14            
            bool m_bMuteImpactEffects; // 0xd15            
            uint8_t _pad0d16[0x2]; // 0xd16
            source2sdk::server::INavObstacle_NavObstacleType_t m_nNavObstacleType; // 0xd18            
            bool m_bUpdateNavWhenMoving; // 0xd1c            
            bool m_bForceNavObstacleCut; // 0xd1d            
            bool m_bAllowObstacleConvexHullMerging; // 0xd1e            
            bool m_bAcceptDamageFromHeldObjects; // 0xd1f            
            bool m_bEnableUseOutput; // 0xd20            
            uint8_t _pad0d21[0x3]; // 0xd21
            source2sdk::server::CPhysicsProp_CrateType_t m_CrateType; // 0xd24            
            CUtlSymbolLarge m_strItemClass[4]; // 0xd28            
            std::int32_t m_nItemCount[4]; // 0xd48            
            bool m_bRemovableForAmmoBalancing; // 0xd58            
            // metadata: MNetworkEnable
            bool m_bAwake; // 0xd59            
            bool m_bAttachedToReferenceFrame; // 0xd5a            
            uint8_t _pad0d5b[0x5];
            
            // Datamap fields:
            // void InputEnableMotion; // 0x0
            // void InputDisableMotion; // 0x0
            // void InputWake; // 0x0
            // bool InputSetAutoConvertBackFromDebris; // 0x0
            // void InputSleep; // 0x0
            // void InputStartGlowing; // 0x0
            // void InputStopGlowing; // 0x0
            // Vector InputSetGlowOverride; // 0x0
            // int32_t InputSetGlowRange; // 0x0
            // float InputSetMass; // 0x0
            // void InputEnableGravity; // 0x0
            // void InputDisableGravity; // 0x0
            // void InputEnableDrag; // 0x0
            // void InputDisableDrag; // 0x0
            // void InputEnableCollisions; // 0x0
            // void InputDisableCollisions; // 0x0
            // bool forcemotiondisabled; // 0x7fffffff
            // bool phys_start_asleep; // 0x7fffffff
            // void CPhysicsPropClearFlagsThink; // 0x0
            // int32_t health; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsProp) == 0xd60);
    };
};
