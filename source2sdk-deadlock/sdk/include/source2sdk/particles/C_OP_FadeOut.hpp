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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x230
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_FadeOut : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "fade out time min"
            float m_flFadeOutTimeMin; // 0x1d8            
            // metadata: MPropertyFriendlyName "fade out time max"
            float m_flFadeOutTimeMax; // 0x1dc            
            // metadata: MPropertyFriendlyName "fade out time exponent"
            float m_flFadeOutTimeExp; // 0x1e0            
            // metadata: MPropertyFriendlyName "fade bias"
            float m_flFadeBias; // 0x1e4            
            uint8_t _pad01e8[0x38]; // 0x1e8
            // metadata: MPropertyFriendlyName "proportional 0/1"
            bool m_bProportional; // 0x220            
            // metadata: MPropertyFriendlyName "ease in and out"
            bool m_bEaseInAndOut; // 0x221            
            uint8_t _pad0222[0xe];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_FadeOut because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_FadeOut) == 0x230);
    };
};
