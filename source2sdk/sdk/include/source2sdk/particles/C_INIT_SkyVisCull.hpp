#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"

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
        // Size: 0x8a0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MGPUParticleFunction
        #pragma pack(push, 1)
        class C_INIT_SkyVisCull : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "test direction"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CParticleCollectionVecInput m_vecTestDir; // 0x1e0            
            // metadata: MPropertyFriendlyName "Trace Set"
            // metadata: MPropertySuppressExpr "!is_gpu_particle_system"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x898            
            // metadata: MPropertyFriendlyName "cull on sky"
            bool m_bCullOnSky; // 0x89c            
            uint8_t _pad089d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_SkyVisCull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_SkyVisCull) == 0x8a0);
    };
};
