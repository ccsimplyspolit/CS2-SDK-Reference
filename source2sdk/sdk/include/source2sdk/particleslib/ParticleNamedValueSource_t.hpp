#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particleslib/ParticleNamedValueConfiguration_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particleslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x60
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ParticleNamedValueSource_t
        {
        public:
            CUtlString m_Name; // 0x0            
            bool m_IsPublic; // 0x8            
            uint8_t _pad0009[0x7]; // 0x9
            // metadata: MFgdFromSchemaCompletelySkipField
            CPulseValueFullType m_ValueType; // 0x10            
            // metadata: MFgdFromSchemaCompletelySkipField
            source2sdk::particleslib::ParticleNamedValueConfiguration_t m_DefaultConfig; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueSource_t, m_Name) == 0x0);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueSource_t, m_IsPublic) == 0x8);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueSource_t, m_ValueType) == 0x10);
        static_assert(offsetof(source2sdk::particleslib::ParticleNamedValueSource_t, m_DefaultConfig) == 0x28);
        
        static_assert(sizeof(source2sdk::particleslib::ParticleNamedValueSource_t) == 0x60);
    };
};
