#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"

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
        // Size: 0x200
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapDotProductToScalar : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "first input control point"
            std::int32_t m_nInputCP1; // 0x1d8            
            // metadata: MPropertyFriendlyName "second input control point"
            std::int32_t m_nInputCP2; // 0x1dc            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1e0            
            // metadata: MPropertyFriendlyName "input minimum (-1 to 1)"
            float m_flInputMin; // 0x1e4            
            // metadata: MPropertyFriendlyName "input maximum (-1 to 1)"
            float m_flInputMax; // 0x1e8            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x1ec            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x1f0            
            // metadata: MPropertyFriendlyName "use particle velocity for first input"
            bool m_bUseParticleVelocity; // 0x1f4            
            uint8_t _pad01f5[0x3]; // 0x1f5
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x1f8            
            // metadata: MPropertyFriendlyName "only active within specified input range"
            bool m_bActiveRange; // 0x1fc            
            // metadata: MPropertyFriendlyName "use particle normal for first input"
            bool m_bUseParticleNormal; // 0x1fd            
            uint8_t _pad01fe[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapDotProductToScalar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapDotProductToScalar) == 0x200);
    };
};
