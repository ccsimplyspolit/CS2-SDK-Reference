#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x640
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RepeatedTriggerChildGroup : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "group ID to affect"
            std::int32_t m_nChildGroupID; // 0x1e0            
            uint8_t _pad01e4[0x4]; // 0x1e4
            // metadata: MPropertyFriendlyName "Within-Cluster Refire Time"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flClusterRefireTime; // 0x1e8            
            // metadata: MPropertyFriendlyName "Within-Cluster Fire Count Before Cooldown"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flClusterSize; // 0x358            
            // metadata: MPropertyFriendlyName "Cluster Cooldown Time"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flClusterCooldown; // 0x4c8            
            // metadata: MPropertyFriendlyName "limit active children to parent particle count"
            bool m_bLimitChildCount; // 0x638            
            uint8_t _pad0639[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RepeatedTriggerChildGroup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RepeatedTriggerChildGroup) == 0x640);
    };
};
