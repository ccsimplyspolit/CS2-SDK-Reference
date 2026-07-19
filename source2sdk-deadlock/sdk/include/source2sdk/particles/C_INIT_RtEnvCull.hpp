#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"

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
        // Size: 0x288
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_RtEnvCull : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "test direction"
            // metadata: MVectorIsCoordinate
            Vector m_vecTestDir; // 0x1e0            
            // metadata: MPropertyFriendlyName "cull normal"
            // metadata: MVectorIsCoordinate
            Vector m_vecTestNormal; // 0x1ec            
            // metadata: MPropertyFriendlyName "use velocity for test direction"
            bool m_bUseVelocity; // 0x1f8            
            // metadata: MPropertyFriendlyName "cull on miss"
            bool m_bCullOnMiss; // 0x1f9            
            // metadata: MPropertyFriendlyName "velocity test adjust lifespan"
            bool m_bLifeAdjust; // 0x1fa            
            // metadata: MPropertyFriendlyName "ray trace environment name"
            char m_RtEnvName[128]; // 0x1fb            
            uint8_t _pad027b[0x1]; // 0x27b
            // metadata: MPropertyFriendlyName "ray trace environment cp"
            std::int32_t m_nRTEnvCP; // 0x27c            
            // metadata: MPropertyFriendlyName "rt env control point component"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nComponent; // 0x280            
            uint8_t _pad0284[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RtEnvCull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RtEnvCull) == 0x288);
    };
};
