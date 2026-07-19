#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleLightnintBranchBehavior_t.hpp"
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
        // Size: 0x1628
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_LightningSnapshotGenerator : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "snapshot control point number"
            std::int32_t m_nCPSnapshot; // 0x1e0            
            // metadata: MPropertyFriendlyName "start control point number"
            std::int32_t m_nCPStartPnt; // 0x1e4            
            // metadata: MPropertyFriendlyName "end control point number"
            std::int32_t m_nCPEndPnt; // 0x1e8            
            uint8_t _pad01ec[0x4]; // 0x1ec
            // metadata: MPropertyFriendlyName "Recursion Depth"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flSegments; // 0x1f0            
            // metadata: MPropertyFriendlyName "Offset"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOffset; // 0x360            
            // metadata: MPropertyFriendlyName "Offset Decay"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOffsetDecay; // 0x4d0            
            // metadata: MPropertyFriendlyName "Recalculation Rate"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRecalcRate; // 0x640            
            // metadata: MPropertyFriendlyName "UV Scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flUVScale; // 0x7b0            
            // metadata: MPropertyFriendlyName "UV Offset"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flUVOffset; // 0x920            
            // metadata: MPropertyFriendlyName "Branch Split Rate"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flSplitRate; // 0xa90            
            // metadata: MPropertyFriendlyName "Recursion Branch Split Scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRecursionSplitScale; // 0xc00            
            // metadata: MPropertyFriendlyName "Scale Branch Distance From Recursion Depth"
            bool m_bScaleBranchDistance; // 0xd70            
            uint8_t _pad0d71[0x7]; // 0xd71
            // metadata: MPropertyFriendlyName "Branch Recursion Distance Scale Factor"
            // metadata: MPropertySuppressExpr "m_bScaleBranchDistance == false"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flBranchDistanceScale; // 0xd78            
            // metadata: MPropertyFriendlyName "Scale Branch Offset/Twist From Recursion Depth"
            bool m_bScaleBranchOffset; // 0xee8            
            uint8_t _pad0ee9[0x7]; // 0xee9
            // metadata: MPropertyFriendlyName "Branch Recursion Offset/Twist Scale Factor"
            // metadata: MPropertySuppressExpr "m_bScaleBranchOffset == false"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flBranchOffsetScale; // 0xef0            
            // metadata: MPropertyFriendlyName "Branch Twist"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flBranchTwist; // 0x1060            
            // metadata: MPropertyFriendlyName "Branch Behavior"
            source2sdk::particles::ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0x11d0            
            uint8_t _pad11d4[0x4]; // 0x11d4
            // metadata: MPropertyFriendlyName "Start Radius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRadiusStart; // 0x11d8            
            // metadata: MPropertyFriendlyName "End Radius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRadiusEnd; // 0x1348            
            // metadata: MPropertyFriendlyName "Dedicated Particle Pool Count"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flDedicatedPool; // 0x14b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_LightningSnapshotGenerator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_LightningSnapshotGenerator) == 0x1628);
    };
};
