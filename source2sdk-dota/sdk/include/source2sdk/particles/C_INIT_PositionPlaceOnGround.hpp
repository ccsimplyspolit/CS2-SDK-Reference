#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleTraceMissBehavior_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"

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
        // Size: 0xc30
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MGPUParticleFunction
        #pragma pack(push, 1)
        class C_INIT_PositionPlaceOnGround : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "offset"
            source2sdk::particleslib::CPerParticleFloatInput m_flOffset; // 0x1e0            
            // metadata: MPropertyFriendlyName "max trace length"
            source2sdk::particleslib::CPerParticleFloatInput m_flMaxTraceLength; // 0x350            
            // metadata: MPropertyFriendlyName "trace direction"
            source2sdk::particleslib::CPerParticleVecInput m_vecTraceDir; // 0x4c0            
            // metadata: MPropertyFriendlyName "collision group"
            // metadata: MPropertySuppressExpr "is_gpu_particle_system"
            char m_CollisionGroupName[128]; // 0xb78            
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0xbf8            
            uint8_t _pad0bfc[0xc]; // 0xbfc
            // metadata: MPropertyFriendlyName "No Collision Behavior"
            source2sdk::particles::ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0xc08            
            // metadata: MPropertyFriendlyName "include water"
            // metadata: MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
            bool m_bIncludeWater; // 0xc0c            
            uint8_t _pad0c0d[0x3]; // 0xc0d
            // metadata: MPropertyFriendlyName "Attribute to Set"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttribute; // 0xc10            
            // metadata: MPropertyFriendlyName "set Previous XYZ only"
            // metadata: MPropertySuppressExpr "m_nAttribute != PARTICLE_ATTRIBUTE_XYZ"
            bool m_bSetPXYZOnly; // 0xc14            
            // metadata: MPropertyFriendlyName "set attribute from ground normal"
            bool m_bSetNormal; // 0xc15            
            uint8_t _pad0c16[0x2]; // 0xc16
            // metadata: MPropertyFriendlyName "Attribute to Set to Ground Normal"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            // metadata: MPropertySuppressExpr "!m_bSetNormal"
            source2sdk::particles::ParticleAttributeIndex_t m_nGroundNormalAttribute; // 0xc18            
            // metadata: MPropertyFriendlyName "Offset only if trace hit"
            // metadata: MPropertySuppressExpr "is_gpu_particle_system"
            bool m_bOffsetonColOnly; // 0xc1c            
            uint8_t _pad0c1d[0x3]; // 0xc1d
            // metadata: MPropertyFriendlyName "offset final position by this fraction of the particle radius"
            // metadata: MPropertySuppressExpr "is_gpu_particle_system"
            float m_flOffsetByRadiusFactor; // 0xc20            
            // metadata: MPropertyFriendlyName "preserve initial Z-offset relative to cp"
            // metadata: MPropertySuppressExpr "is_gpu_particle_system"
            std::int32_t m_nPreserveOffsetCP; // 0xc24            
            // metadata: MPropertyFriendlyName "CP Entity to Ignore for Collisions"
            // metadata: MPropertySuppressExpr "is_gpu_particle_system || m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
            std::int32_t m_nIgnoreCP; // 0xc28            
            uint8_t _pad0c2c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_PositionPlaceOnGround because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_PositionPlaceOnGround) == 0xc30);
    };
};
