#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionEmitter.hpp"
#include "source2sdk/particles/EventTypeSelection_t.hpp"
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
        // Size: 0x660
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ContinuousEmitter : public source2sdk::particles::CParticleFunctionEmitter
        {
        public:
            // metadata: MPropertyFriendlyName "emission duration"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flEmissionDuration; // 0x1e0            
            // metadata: MPropertyFriendlyName "emission start time"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flStartTime; // 0x350            
            // metadata: MPropertyFriendlyName "emission rate"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flEmitRate; // 0x4c0            
            // metadata: MPropertyFriendlyName "scale emission to used control points"
            // metadata: MParticleMaxVersion "1"
            float m_flEmissionScale; // 0x630            
            // metadata: MPropertyFriendlyName "scale emission by parent particle count"
            float m_flScalePerParentParticle; // 0x634            
            // metadata: MPropertyFriendlyName "emit particles for parent particle events"
            bool m_bInitFromKilledParentParticles; // 0x638            
            uint8_t _pad0639[0x3]; // 0x639
            // metadata: MPropertyFriendlyName "emission parent particle event type"
            // metadata: MPropertySuppressExpr "m_bInitFromKilledParentParticles == false"
            source2sdk::particles::EventTypeSelection_t m_nEventType; // 0x63c            
            // metadata: MPropertyFriendlyName "control point with snapshot data"
            std::int32_t m_nSnapshotControlPoint; // 0x640            
            uint8_t _pad0644[0x4]; // 0x644
            // metadata: MPropertyFriendlyName "snapshot subset"
            // metadata: MPropertySuppressExpr "m_nSnapshotControlPoint < 0"
            CUtlString m_strSnapshotSubset; // 0x648            
            // metadata: MPropertyFriendlyName "limit per update"
            std::int32_t m_nLimitPerUpdate; // 0x650            
            // metadata: MPropertyFriendlyName "force emit on first update"
            bool m_bForceEmitOnFirstUpdate; // 0x654            
            // metadata: MPropertyFriendlyName "force emit on last update"
            bool m_bForceEmitOnLastUpdate; // 0x655            
            uint8_t _pad0656[0xa];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ContinuousEmitter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ContinuousEmitter) == 0x660);
    };
};
