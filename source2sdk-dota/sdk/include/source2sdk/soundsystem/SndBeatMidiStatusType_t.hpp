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
        // Enumerator count: 7
        // Alignment: 4
        // Size: 0x4
        enum class SndBeatMidiStatusType_t : std::uint32_t
        {
            SndSeqMidiStatusNoteOff = 0x8,
            SndSeqMidiStatusNoteOn = 0x9,
            SndSeqMidiStatusKeyPressure = 0xa,
            SndSeqMidiStatusCtrlChange = 0xb,
            SndSeqMidiStatusProgramChange = 0xc,
            SndSeqMidiStatusChannelPressure = 0xd,
            SndSeqMidiStatusPitchBend = 0xe,
        };
    };
};
