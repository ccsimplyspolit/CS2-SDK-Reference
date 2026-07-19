#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"

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
        // Size: 0x298
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_LifespanFromVelocity : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "bias distance"
            // metadata: MVectorIsCoordinate
            Vector m_vecComponentScale; // 0x1e0            
            // metadata: MPropertyFriendlyName "trace offset"
            float m_flTraceOffset; // 0x1ec            
            // metadata: MPropertyFriendlyName "maximum trace length"
            float m_flMaxTraceLength; // 0x1f0            
            // metadata: MPropertyFriendlyName "trace recycle tolerance"
            float m_flTraceTolerance; // 0x1f4            
            // metadata: MPropertyFriendlyName "maximum points to cache"
            std::int32_t m_nMaxPlanes; // 0x1f8            
            uint8_t _pad01fc[0x4]; // 0x1fc
            // metadata: MPropertyFriendlyName "trace collision group"
            char m_CollisionGroupName[128]; // 0x200            
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x280            
            uint8_t _pad0284[0xc]; // 0x284
            // metadata: MPropertyFriendlyName "collide with water"
            bool m_bIncludeWater; // 0x290            
            uint8_t _pad0291[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_LifespanFromVelocity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_LifespanFromVelocity) == 0x298);
    };
};
