#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionEmitter.hpp"
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
        // Size: 0x650
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_MaintainEmitter : public source2sdk::particles::CParticleFunctionEmitter
        {
        public:
            // metadata: MPropertyFriendlyName "count to maintain"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nParticlesToMaintain; // 0x1e0            
            // metadata: MPropertyFriendlyName "emission start time"
            float m_flStartTime; // 0x350            
            uint8_t _pad0354[0x4]; // 0x354
            // metadata: MPropertyFriendlyName "emission duration"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flEmissionDuration; // 0x358            
            // metadata: MPropertyFriendlyName "emission rate"
            float m_flEmissionRate; // 0x4c8            
            // metadata: MPropertyFriendlyName "control point with snapshot data"
            std::int32_t m_nSnapshotControlPoint; // 0x4cc            
            // metadata: MPropertyFriendlyName "snapshot subset"
            // metadata: MPropertySuppressExpr "m_nSnapshotControlPoint < 0"
            CUtlString m_strSnapshotSubset; // 0x4d0            
            // metadata: MPropertyFriendlyName "group emission times for new particles"
            bool m_bEmitInstantaneously; // 0x4d8            
            // metadata: MPropertyFriendlyName "perform final emit on stop"
            bool m_bFinalEmitOnStop; // 0x4d9            
            uint8_t _pad04da[0x6]; // 0x4da
            // metadata: MPropertyFriendlyName "total count scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flScale; // 0x4e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_MaintainEmitter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_MaintainEmitter) == 0x650);
    };
};
