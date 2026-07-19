#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/server/SoundEventStartType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x50
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Start Sound Event"
        // static metadata: MPropertyDescription "Starts a sound event, returns a handle that can be used to stop it. Keywords: create, sound, event, audio"
        #pragma pack(push, 1)
        class CPulseCell_SoundEventStart : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            source2sdk::server::SoundEventStartType_t m_Type; // 0x48            
            uint8_t _pad004c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_SoundEventStart because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPulseCell_SoundEventStart) == 0x50);
    };
};
