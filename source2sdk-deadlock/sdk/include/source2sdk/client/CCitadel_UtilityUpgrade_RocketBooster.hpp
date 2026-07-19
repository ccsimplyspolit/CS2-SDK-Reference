#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_UtilityUpgrade_RocketBoots.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1780
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flCastTime"
        // static metadata: MNetworkVarNames "bool m_bCrashingDown"
        // static metadata: MNetworkVarNames "bool m_bImpulseApplied"
        // static metadata: MNetworkVarNames "bool m_bCanCrash"
        // static metadata: MNetworkVarNames "Vector m_vecCrashPosition"
        // static metadata: MNetworkVarNames "Vector m_vecCrashDirection"
        #pragma pack(push, 1)
        class CCitadel_UtilityUpgrade_RocketBooster : public source2sdk::client::CCitadel_UtilityUpgrade_RocketBoots
        {
        public:
            source2sdk::client::ParticleIndex_t m_nTargetingParticleIndex; // 0x12d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnCanSlamDownChanged"
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flCastTime; // 0x12dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCrashingDown; // 0x12e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bImpulseApplied; // 0x12e1            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanCrash; // 0x12e2            
            uint8_t _pad12e3[0x1]; // 0x12e3
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecCrashPosition; // 0x12e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecCrashDirection; // 0x12f0            
            uint8_t _pad12fc[0x484];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_UtilityUpgrade_RocketBooster because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_UtilityUpgrade_RocketBooster) == 0x1780);
    };
};
