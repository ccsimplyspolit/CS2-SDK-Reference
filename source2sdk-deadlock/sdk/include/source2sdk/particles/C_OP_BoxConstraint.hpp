#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
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
        // Size: 0xf50
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_BoxConstraint : public source2sdk::particles::CParticleFunctionConstraint
        {
        public:
            // metadata: MPropertyFriendlyName "min coords"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecMin; // 0x1d8            
            // metadata: MPropertyFriendlyName "max coords"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecMax; // 0x890            
            // metadata: MPropertyFriendlyName "control point"
            std::int32_t m_nCP; // 0xf48            
            // metadata: MPropertyFriendlyName "use local space"
            bool m_bLocalSpace; // 0xf4c            
            // metadata: MPropertyFriendlyName "Take radius into account"
            bool m_bAccountForRadius; // 0xf4d            
            uint8_t _pad0f4e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_BoxConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_BoxConstraint) == 0xf50);
    };
};
