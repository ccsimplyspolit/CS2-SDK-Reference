#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x1
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x2
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SndBeatTimeSignature_t
        {
        public:
            // metadata: MPropertyFriendlyName "Numerator"
            std::uint8_t nNumerator; // 0x0            
            // metadata: MPropertyFriendlyName "Denominator"
            std::uint8_t nDenominator; // 0x1            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::SndBeatTimeSignature_t, nNumerator) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem::SndBeatTimeSignature_t, nDenominator) == 0x1);
        
        static_assert(sizeof(source2sdk::soundsystem::SndBeatTimeSignature_t) == 0x2);
    };
};
