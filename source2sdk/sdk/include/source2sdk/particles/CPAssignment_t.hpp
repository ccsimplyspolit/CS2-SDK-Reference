#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/ParticleOrientationSetMode_t.hpp"
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
        // Size: 0x6c8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CPAssignment_t
        {
        public:
            // metadata: MPropertyFriendlyName "Control Point Number"
            std::int32_t m_nCPNumber; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // metadata: MPropertyFriendlyName "CP Position"
            source2sdk::particleslib::CPerParticleVecInput m_Pos; // 0x8            
            // metadata: MPropertyFriendlyName "CP Orientation Type"
            source2sdk::particles::ParticleOrientationSetMode_t m_nOrientationMode; // 0x6c0            
            uint8_t _pad06c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPAssignment_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::CPAssignment_t) == 0x6c8);
    };
};
