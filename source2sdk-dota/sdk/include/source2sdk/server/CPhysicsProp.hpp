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
        // Size: 0xa70
        // Has VTable
        // Construct allowed
        // MDisableDataDescValidation
        #pragma pack(push, 1)
        class CPhysicsProp : public source2sdk::server::CBreakableProp
        {
        public:
            uint8_t _pad0930[0x10]; // 0x930
            source2sdk::entity2::CEntityIOOutput m_MotionEnabled; // 0x940            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0x958            
            source2sdk::entity2::CEntityIOOutput m_OnAwake; // 0x970            
            source2sdk::entity2::CEntityIOOutput m_OnAsleep; // 0x988            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0x9a0            
            source2sdk::entity2::CEntityIOOutput m_OnOutOfWorld; // 0x9b8            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0x9d0            
            bool m_bForceNavIgnore; // 0x9e8            
            bool m_bNoNavmeshBlocker; // 0x9e9            
            bool m_bForceNpcExclude; // 0x9ea            
            uint8_t _pad09eb[0x1]; // 0x9eb
            float m_massScale; // 0x9ec            
            float m_buoyancyScale; // 0x9f0            
            std::int32_t m_damageType; // 0x9f4            
            std::int32_t m_damageToEnableMotion; // 0x9f8            
            float m_flForceToEnableMotion; // 0x9fc            
            bool m_bThrownByPlayer; // 0xa00            
            bool m_bDroppedByPlayer; // 0xa01            
            bool m_bTouchedByPlayer; // 0xa02            
            bool m_bFirstCollisionAfterLaunch; // 0xa03            
            // metadata: MNotSaved
            bool m_bHasBeenAwakened; // 0xa04            
            // metadata: MNotSaved
            bool m_bIsOverrideProp; // 0xa05            
            uint8_t _pad0a06[0x2]; // 0xa06
            source2sdk::entity2::GameTime_t m_flLastBurn; // 0xa08            
            source2sdk::physicslib::DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xa0c            
            uint8_t _pad0a0d[0x3]; // 0xa0d
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xa10            
            std::int32_t m_iInitialGlowState; // 0xa14            
            std::int32_t m_nGlowRange; // 0xa18            
            std::int32_t m_nGlowRangeMin; // 0xa1c            
            Color m_glowColor; // 0xa20            
            bool m_bShouldAutoConvertBackFromDebris; // 0xa24            
            bool m_bMuteImpactEffects; // 0xa25            
            uint8_t _pad0a26[0x2]; // 0xa26
            source2sdk::server::INavObstacle_NavObstacleType_t m_nNavObstacleType; // 0xa28            
            bool m_bUpdateNavWhenMoving; // 0xa2c            
            bool m_bForceNavObstacleCut; // 0xa2d            
            bool m_bAllowObstacleConvexHullMerging; // 0xa2e            
            bool m_bAcceptDamageFromHeldObjects; // 0xa2f            
            bool m_bEnableUseOutput; // 0xa30            
            uint8_t _pad0a31[0x3]; // 0xa31
            source2sdk::server::CPhysicsProp_CrateType_t m_CrateType; // 0xa34            
            CUtlSymbolLarge m_strItemClass[4]; // 0xa38            
            std::int32_t m_nItemCount[4]; // 0xa58            
            bool m_bRemovableForAmmoBalancing; // 0xa68            
            bool m_bAwake; // 0xa69            
            bool m_bAttachedToReferenceFrame; // 0xa6a            
            uint8_t _pad0a6b[0x5];
            
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
            // int32_t health; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsProp) == 0xa70);
    };
};
