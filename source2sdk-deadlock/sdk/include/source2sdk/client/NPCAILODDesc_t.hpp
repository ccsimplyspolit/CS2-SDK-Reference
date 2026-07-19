#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct NPCAILODDesc_t
        {
        public:
            std::int32_t m_nMaxNPCs; // 0x0            
            float m_flMinRange; // 0x4            
            float m_flOffNavLastKnownAreaUpdateInterval; // 0x8            
            bool m_bSensing; // 0xc            
            bool m_bSensingUseExactEyePosition; // 0xd            
            bool m_bDecisionMaking; // 0xe            
            bool m_bUseLocalNavigator; // 0xf            
            bool m_bUseAdvancedLocomotion; // 0x10            
            bool m_bEnableFootSweeps; // 0x11            
            bool m_bDetailedLookTargets; // 0x12            
            bool m_bShouldPlayFootstepSounds; // 0x13            
            bool m_bRagdollEnabled; // 0x14            
            bool m_bEnableFlinching; // 0x15            
            bool m_bEnableWarnNPCsOfIncomingFire; // 0x16            
            bool m_bEnableBlinking; // 0x17            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_nMaxNPCs) == 0x0);
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_flMinRange) == 0x4);
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_flOffNavLastKnownAreaUpdateInterval) == 0x8);
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_bSensing) == 0xc);
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_bSensingUseExactEyePosition) == 0xd);
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_bDecisionMaking) == 0xe);
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_bUseLocalNavigator) == 0xf);
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_bUseAdvancedLocomotion) == 0x10);
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_bEnableFootSweeps) == 0x11);
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_bDetailedLookTargets) == 0x12);
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_bShouldPlayFootstepSounds) == 0x13);
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_bRagdollEnabled) == 0x14);
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_bEnableFlinching) == 0x15);
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_bEnableWarnNPCsOfIncomingFire) == 0x16);
        static_assert(offsetof(source2sdk::client::NPCAILODDesc_t, m_bEnableBlinking) == 0x17);
        
        static_assert(sizeof(source2sdk::client::NPCAILODDesc_t) == 0x18);
    };
};
