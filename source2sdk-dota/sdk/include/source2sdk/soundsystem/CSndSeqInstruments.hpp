#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/ISndSeqInstruments.hpp"

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
        // Standard-layout class: false
        // Size: 0x28
        // Has VTable
        #pragma pack(push, 1)
        class CSndSeqInstruments : public source2sdk::soundsystem::ISndSeqInstruments
        {
        public:
            uint8_t _pad0008[0x20];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::soundsystem::CSndSeqInstruments) == 0x28);
    };
};
