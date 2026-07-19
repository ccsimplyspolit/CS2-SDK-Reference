#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/SndBeatEventKeys_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x18
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SndBeatEventKeyedMidiNotes_t : public source2sdk::soundsystem::SndBeatEventKeys_t
        {
        public:
            // metadata: MPropertyFriendlyName "Status"
            std::uint8_t m_nStatus; // 0x10            
            // metadata: MPropertyFriendlyName "Note"
            std::uint8_t m_nNote; // 0x11            
            // metadata: MPropertyFriendlyName "Velocity"
            std::uint8_t m_nVelocity; // 0x12            
            uint8_t _pad0013[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in SndBeatEventKeyedMidiNotes_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::SndBeatEventKeyedMidiNotes_t) == 0x18);
    };
};
