#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleOrientationSetMode_t.hpp"
#include "source2sdk/particles/ParticleParentSetMode_t.hpp"

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
        // Size: 0x1f8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetControlPointsToParticle : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "group ID to affect"
            std::int32_t m_nChildGroupID; // 0x1d8            
            // metadata: MPropertyFriendlyName "first control point to set"
            std::int32_t m_nFirstControlPoint; // 0x1dc            
            // metadata: MPropertyFriendlyName "# of control points to set"
            std::int32_t m_nNumControlPoints; // 0x1e0            
            // metadata: MPropertyFriendlyName "first particle to copy"
            std::int32_t m_nFirstSourcePoint; // 0x1e4            
            // metadata: MPropertyFriendlyName "reverse order"
            bool m_bReverse; // 0x1e8            
            // metadata: MPropertyFriendlyName "set orientation"
            bool m_bSetOrientation; // 0x1e9            
            uint8_t _pad01ea[0x2]; // 0x1ea
            // metadata: MPropertyFriendlyName "orientation style"
            source2sdk::particles::ParticleOrientationSetMode_t m_nOrientationMode; // 0x1ec            
            // metadata: MPropertyFriendlyName "set parent"
            source2sdk::particles::ParticleParentSetMode_t m_nSetParent; // 0x1f0            
            uint8_t _pad01f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointsToParticle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointsToParticle) == 0x1f8);
    };
};
