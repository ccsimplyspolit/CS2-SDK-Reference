#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
        // Size: 0x370
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_DecayMaintainCount : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "count to maintain"
            std::int32_t m_nParticlesToMaintain; // 0x1d8            
            // metadata: MPropertyFriendlyName "decay delay"
            float m_flDecayDelay; // 0x1dc            
            // metadata: MPropertyFriendlyName "snapshot control point for count"
            std::int32_t m_nSnapshotControlPoint; // 0x1e0            
            uint8_t _pad01e4[0x4]; // 0x1e4
            // metadata: MPropertyFriendlyName "snapshot subset"
            // metadata: MPropertySuppressExpr "m_nSnapshotControlPoint < 0"
            CUtlString m_strSnapshotSubset; // 0x1e8            
            // metadata: MPropertyFriendlyName "decay on lifespan"
            bool m_bLifespanDecay; // 0x1f0            
            uint8_t _pad01f1[0x7]; // 0x1f1
            // metadata: MPropertyFriendlyName "total count scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flScale; // 0x1f8            
            // metadata: MPropertyFriendlyName "kill newest instead of oldest"
            bool m_bKillNewest; // 0x368            
            uint8_t _pad0369[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_DecayMaintainCount because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_DecayMaintainCount) == 0x370);
    };
};
