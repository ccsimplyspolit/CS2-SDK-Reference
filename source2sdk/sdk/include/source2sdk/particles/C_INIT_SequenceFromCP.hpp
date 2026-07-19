#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"

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
        class C_INIT_SequenceFromCP : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "kill unused"
            bool m_bKillUnused; // 0x1e0            
            // metadata: MPropertyFriendlyName "offset propotional to radius"
            bool m_bRadiusScale; // 0x1e1            
            uint8_t _pad01e2[0x2]; // 0x1e2
            // metadata: MPropertyFriendlyName "control point"
            std::int32_t m_nCP; // 0x1e4            
            // metadata: MPropertyFriendlyName "per particle spatial offset"
            // metadata: MVectorIsCoordinate
            Vector m_vecOffset; // 0x1e8            
            uint8_t _pad01f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_SequenceFromCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_SequenceFromCP) == 0x1f8);
    };
};
