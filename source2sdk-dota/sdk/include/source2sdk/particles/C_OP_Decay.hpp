#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"

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
        // Size: 0x1e0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MGPUParticleFunction
        #pragma pack(push, 1)
        class C_OP_Decay : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "Reduce rope popping on decay"
            bool m_bRopeDecay; // 0x1d8            
            // metadata: MPropertyFriendlyName "force preserving particle order"
            bool m_bForcePreserveParticleOrder; // 0x1d9            
            uint8_t _pad01da[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_Decay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_Decay) == 0x1e0);
    };
};
