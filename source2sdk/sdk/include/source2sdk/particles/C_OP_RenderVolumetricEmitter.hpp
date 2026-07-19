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
        // Size: 0x21e8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderVolumetricEmitter : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "channel type"
            // metadata: MPropertyAttributeEditor "VDataChoice( scripts/volumetric_channels.vdata )"
            CUtlString m_strChannelType; // 0x228            
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
            // metadata: MPropertyFriendlyName "prev position"
            // metadata: MPropertySuppressExpr "m_nType != PARTICLE_VOLUMETRIC_SMOKE_TYPE_TRACE"
            source2sdk::particleslib::CPerParticleVecInput m_vPrevPosition; // 0xfb0            
            // metadata: MPropertyFriendlyName "speed"
            // metadata: MPropertySuppressExpr "m_nType != PARTICLE_VOLUMETRIC_SMOKE_TYPE_TRACE"
            source2sdk::particleslib::CPerParticleFloatInput m_flSpeed; // 0x1668            
            // metadata: MPropertyFriendlyName "radius"
            source2sdk::particleslib::CPerParticleFloatInput m_flRadius; // 0x17d8            
            // metadata: MPropertyFriendlyName "density"
            // metadata: MPropertySuppressExpr "m_nType == PARTICLE_VOLUMETRIC_SMOKE_TYPE_TRACE"
            source2sdk::particleslib::CPerParticleFloatInput m_flDensity; // 0x1948            
            // metadata: MPropertyFriendlyName "temperature"
            // metadata: MPropertySuppressExpr "m_nType == PARTICLE_VOLUMETRIC_SMOKE_TYPE_TRACE"
            source2sdk::particleslib::CPerParticleFloatInput m_flTemperature; // 0x1ab8            
            // metadata: MPropertyFriendlyName "magnitude"
            // metadata: MPropertySuppressExpr "m_nType == PARTICLE_VOLUMETRIC_SMOKE_TYPE_EMISSION || m_nType == PARTICLE_VOLUMETRIC_SMOKE_TYPE_TRACE"
            source2sdk::particleslib::CPerParticleFloatInput m_flMagnitude; // 0x1c28            
            // metadata: MPropertyFriendlyName "kill radius"
            // metadata: MPropertySuppressExpr "m_nType == PARTICLE_VOLUMETRIC_SMOKE_TYPE_EMISSION"
            source2sdk::particleslib::CPerParticleFloatInput m_flKillRadius; // 0x1d98            
            // metadata: MPropertyFriendlyName "kill density scale"
            // metadata: MPropertySuppressExpr "m_nType == PARTICLE_VOLUMETRIC_SMOKE_TYPE_EMISSION"
            source2sdk::particleslib::CPerParticleFloatInput m_flKillDensityScale; // 0x1f08            
            // metadata: MPropertyFriendlyName "falloff"
            // metadata: MPropertySuppressExpr "m_nType == PARTICLE_VOLUMETRIC_SMOKE_TYPE_EMISSION"
            source2sdk::particleslib::CPerParticleFloatInput m_flFalloff; // 0x2078            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderVolumetricEmitter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderVolumetricEmitter) == 0x21e8);
    };
};
