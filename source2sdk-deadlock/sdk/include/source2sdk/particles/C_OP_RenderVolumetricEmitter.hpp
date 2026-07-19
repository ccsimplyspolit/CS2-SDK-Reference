#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/EventTypeSelection_t.hpp"
#include "source2sdk/particles/ParticleVolumetricSmokeCreationType_t.hpp"
#include "source2sdk/particles/ParticleVolumetricSmokeType_t.hpp"
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
        // Size: 0x1ca0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderVolumetricEmitter : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "smoke type"
            // metadata: MPropertyAttributeEditor "VDataChoice( scripts/smokegrid.vdata )"
            CUtlString m_strSmokeType; // 0x228            
            // metadata: MPropertyFriendlyName "interaction type"
            source2sdk::particles::ParticleVolumetricSmokeType_t m_nType; // 0x230            
            // metadata: MPropertyFriendlyName "creation type"
            source2sdk::particles::ParticleVolumetricSmokeCreationType_t m_nCreationType; // 0x234            
            // metadata: MPropertyFriendlyName "event type"
            // metadata: MPropertySuppressExpr "m_nCreationType == PARTICLE_VOLUMETRIC_SMOKE_TYPE_CONTINUOUS"
            source2sdk::particles::EventTypeSelection_t m_nEventType; // 0x238            
            uint8_t _pad023c[0x4]; // 0x23c
            // metadata: MPropertyFriendlyName "position"
            source2sdk::particleslib::CPerParticleVecInput m_vecPos; // 0x240            
            // metadata: MPropertyFriendlyName "velocity"
            // metadata: MPropertySuppressExpr "m_nType != PARTICLE_VOLUMETRIC_SMOKE_TYPE_EMISSION"
            source2sdk::particleslib::CPerParticleVecInput m_vecVelocity; // 0x8f8            
            // metadata: MPropertyFriendlyName "radius"
            source2sdk::particleslib::CPerParticleFloatInput m_flRadius; // 0xfb0            
            // metadata: MPropertyFriendlyName "density"
            source2sdk::particleslib::CPerParticleFloatInput m_flDensity; // 0x1120            
            // metadata: MPropertyFriendlyName "temperature"
            source2sdk::particleslib::CPerParticleFloatInput m_flTemperature; // 0x1290            
            // metadata: MPropertyFriendlyName "fuel"
            source2sdk::particleslib::CPerParticleFloatInput m_flFuel; // 0x1400            
            // metadata: MPropertyFriendlyName "dust"
            source2sdk::particleslib::CPerParticleFloatInput m_flDust; // 0x1570            
            // metadata: MPropertyFriendlyName "lifetime"
            source2sdk::particleslib::CPerParticleFloatInput m_flLifespan; // 0x16e0            
            // metadata: MPropertyFriendlyName "magnitude"
            // metadata: MPropertySuppressExpr "m_nType == PARTICLE_VOLUMETRIC_SMOKE_TYPE_EMISSION"
            source2sdk::particleslib::CPerParticleFloatInput m_flMagnitude; // 0x1850            
            // metadata: MPropertyFriendlyName "kill radius"
            // metadata: MPropertySuppressExpr "m_nType != PARTICLE_VOLUMETRIC_SMOKE_TYPE_SINK"
            source2sdk::particleslib::CPerParticleFloatInput m_flKillRadius; // 0x19c0            
            // metadata: MPropertyFriendlyName "falloff"
            // metadata: MPropertySuppressExpr "m_nType == PARTICLE_VOLUMETRIC_SMOKE_TYPE_EMISSION"
            source2sdk::particleslib::CPerParticleFloatInput m_flFalloff; // 0x1b30            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderVolumetricEmitter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderVolumetricEmitter) == 0x1ca0);
    };
};
