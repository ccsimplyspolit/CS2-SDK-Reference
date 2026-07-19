#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleHitboxDataSelection_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
        // Size: 0xef0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapAverageHitboxSpeedtoCP : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "input control point"
            std::int32_t m_nInControlPointNumber; // 0x1e0            
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nOutControlPointNumber; // 0x1e4            
            // metadata: MPropertyFriendlyName "Output component"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nField; // 0x1e8            
            // metadata: MPropertyFriendlyName "hitbox data"
            source2sdk::particles::ParticleHitboxDataSelection_t m_nHitboxDataType; // 0x1ec            
            // metadata: MPropertyFriendlyName "input minimum"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flInputMin; // 0x1f0            
            // metadata: MPropertyFriendlyName "input maximum"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flInputMax; // 0x360            
            // metadata: MPropertyFriendlyName "output minimum"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOutputMin; // 0x4d0            
            // metadata: MPropertyFriendlyName "output maximum"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOutputMax; // 0x640            
            // metadata: MPropertyFriendlyName "intersection height CP"
            // metadata: MPropertySuppressExpr "m_nHitboxDataType != PARTICLE_HITBOX_AVERAGE_SPEED"
            std::int32_t m_nHeightControlPointNumber; // 0x7b0            
            uint8_t _pad07b4[0x4]; // 0x7b4
            // metadata: MPropertyFriendlyName "comparison velocity"
            // metadata: MPropertySuppressExpr "m_nHitboxDataType != PARTICLE_HITBOX_AVERAGE_SPEED"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecComparisonVelocity; // 0x7b8            
            // metadata: MPropertyFriendlyName "hitbox set"
            char m_HitboxSetName[128]; // 0xe70            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapAverageHitboxSpeedtoCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapAverageHitboxSpeedtoCP) == 0xef0);
    };
};
