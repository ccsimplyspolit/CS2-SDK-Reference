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
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct SamplerVoice_t
        {
        public:
            std::uint8_t nNoteNum; // 0x0            
            uint8_t _pad0001[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::SamplerVoice_t, nNoteNum) == 0x0);
        
        static_assert(sizeof(source2sdk::soundsystem::SamplerVoice_t) == 0x8);
    };
};
