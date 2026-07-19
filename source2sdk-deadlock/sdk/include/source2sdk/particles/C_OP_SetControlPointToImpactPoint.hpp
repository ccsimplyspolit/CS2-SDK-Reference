#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
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
        // Size: 0x400
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetControlPointToImpactPoint : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "control point to set"
            std::int32_t m_nCPOut; // 0x1e0            
            // metadata: MPropertyFriendlyName "control point to trace from"
            std::int32_t m_nCPIn; // 0x1e4            
            // metadata: MPropertyFriendlyName "trace update rate"
            float m_flUpdateRate; // 0x1e8            
            uint8_t _pad01ec[0x4]; // 0x1ec
            // metadata: MPropertyFriendlyName "max trace length"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flTraceLength; // 0x1f0            
            // metadata: MPropertyFriendlyName "offset start point amount"
            float m_flStartOffset; // 0x360            
            // metadata: MPropertyFriendlyName "offset end point amount"
            float m_flOffset; // 0x364            
            // metadata: MPropertyFriendlyName "trace direction override"
            // metadata: MVectorIsCoordinate
            Vector m_vecTraceDir; // 0x368            
            // metadata: MPropertyFriendlyName "trace collision group"
            char m_CollisionGroupName[128]; // 0x374            
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x3f4            
            // metadata: MPropertyFriendlyName "set to trace endpoint if no collision"
            bool m_bSetToEndpoint; // 0x3f8            
            // metadata: MPropertyFriendlyName "trace to closest surface along all cardinal directions"
            bool m_bTraceToClosestSurface; // 0x3f9            
            // metadata: MPropertyFriendlyName "include water"
            bool m_bIncludeWater; // 0x3fa            
            uint8_t _pad03fb[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointToImpactPoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointToImpactPoint) == 0x400);
    };
};
