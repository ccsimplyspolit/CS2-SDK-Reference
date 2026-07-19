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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SndBeatEventKeyedSndEvts_t : public source2sdk::soundsystem::SndBeatEventKeys_t
        {
        public:
            // metadata: MPropertyFriendlyName "SoundEvent Name"
            CUtlString m_strSoundEventName; // 0x10            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in SndBeatEventKeyedSndEvts_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::SndBeatEventKeyedSndEvts_t) == 0x18);
    };
};
