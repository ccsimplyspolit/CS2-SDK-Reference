#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleOrientationType_t.hpp"
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
        // Size: 0x360
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetChildControlPoints : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "group ID to affect"
            std::int32_t m_nChildGroupID; // 0x1d8            
            // metadata: MPropertyFriendlyName "first control point to set"
            std::int32_t m_nFirstControlPoint; // 0x1dc            
            // metadata: MPropertyFriendlyName "# of control points to set"
            std::int32_t m_nNumControlPoints; // 0x1e0            
            uint8_t _pad01e4[0x4]; // 0x1e4
            // metadata: MPropertyFriendlyName "first particle to copy"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x1e8            
            // metadata: MPropertyFriendlyName "start as last particle"
            bool m_bReverse; // 0x358            
            // metadata: MPropertyFriendlyName "set orientation"
            bool m_bSetOrientation; // 0x359            
            uint8_t _pad035a[0x2]; // 0x35a
            // metadata: MPropertyFriendlyName "orientation set method"
            // metadata: MPropertySuppressExpr "m_bSetOrientation == false"
            source2sdk::particles::ParticleOrientationType_t m_nOrientation; // 0x35c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetChildControlPoints because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetChildControlPoints) == 0x360);
    };
};
