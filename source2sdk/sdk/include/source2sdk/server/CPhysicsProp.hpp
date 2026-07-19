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
        // Size: 0xc30
        // Has VTable
        // Construct allowed
        // MDisableDataDescValidation
        #pragma pack(push, 1)
        class CPhysicsProp : public source2sdk::server::CBreakableProp
        {
        public:
            uint8_t _pad0af0[0x10]; // 0xaf0
            source2sdk::entity2::CEntityIOOutput m_MotionEnabled; // 0xb00            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0xb18            
            source2sdk::entity2::CEntityIOOutput m_OnAwake; // 0xb30            
            source2sdk::entity2::CEntityIOOutput m_OnAsleep; // 0xb48            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0xb60            
            source2sdk::entity2::CEntityIOOutput m_OnOutOfWorld; // 0xb78            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0xb90            
            bool m_bForceNavIgnore; // 0xba8            
            bool m_bNoNavmeshBlocker; // 0xba9            
            bool m_bForceNpcExclude; // 0xbaa            
            uint8_t _pad0bab[0x1]; // 0xbab
            float m_massScale; // 0xbac            
            float m_buoyancyScale; // 0xbb0            
            std::int32_t m_damageType; // 0xbb4            
            std::int32_t m_damageToEnableMotion; // 0xbb8            
            float m_flForceToEnableMotion; // 0xbbc            
            bool m_bThrownByPlayer; // 0xbc0            
            bool m_bDroppedByPlayer; // 0xbc1            
            bool m_bTouchedByPlayer; // 0xbc2            
            bool m_bFirstCollisionAfterLaunch; // 0xbc3            
            // metadata: MNotSaved
            bool m_bHasBeenAwakened; // 0xbc4            
            // metadata: MNotSaved
            bool m_bIsOverrideProp; // 0xbc5            
            uint8_t _pad0bc6[0x2]; // 0xbc6
            source2sdk::entity2::GameTime_t m_flLastBurn; // 0xbc8            
            source2sdk::physicslib::DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xbcc            
            uint8_t _pad0bcd[0x3]; // 0xbcd
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xbd0            
            std::int32_t m_iInitialGlowState; // 0xbd4            
            std::int32_t m_nGlowRange; // 0xbd8            
            std::int32_t m_nGlowRangeMin; // 0xbdc            
            Color m_glowColor; // 0xbe0            
            bool m_bShouldAutoConvertBackFromDebris; // 0xbe4            
            bool m_bMuteImpactEffects; // 0xbe5            
            uint8_t _pad0be6[0x2]; // 0xbe6
            source2sdk::server::INavObstacle_NavObstacleType_t m_nNavObstacleType; // 0xbe8            
            bool m_bUpdateNavWhenMoving; // 0xbec            
            bool m_bForceNavObstacleCut; // 0xbed            
            bool m_bAllowObstacleConvexHullMerging; // 0xbee            
            bool m_bAcceptDamageFromHeldObjects; // 0xbef            
            bool m_bEnableUseOutput; // 0xbf0            
            uint8_t _pad0bf1[0x3]; // 0xbf1
            source2sdk::server::CPhysicsProp_CrateType_t m_CrateType; // 0xbf4            
            CUtlSymbolLarge m_strItemClass[4]; // 0xbf8            
            std::int32_t m_nItemCount[4]; // 0xc18            
            bool m_bRemovableForAmmoBalancing; // 0xc28            
            bool m_bAwake; // 0xc29            
            bool m_bAttachedToReferenceFrame; // 0xc2a            
            uint8_t _pad0c2b[0x5];
            
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
        
        static_assert(sizeof(source2sdk::server::CPhysicsProp) == 0xc30);
    };
};
