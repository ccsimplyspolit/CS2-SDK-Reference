#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/soundcommands_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SoundCommand_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            float m_time; // 0x8            
            float m_deltaTime; // 0xc            
            source2sdk::client::soundcommands_t m_command; // 0x10            
            float m_value; // 0x14            
            uint8_t _pad0018[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SoundCommand_t, m_time) == 0x8);
        static_assert(offsetof(source2sdk::client::SoundCommand_t, m_deltaTime) == 0xc);
        static_assert(offsetof(source2sdk::client::SoundCommand_t, m_command) == 0x10);
        static_assert(offsetof(source2sdk::client::SoundCommand_t, m_value) == 0x14);
        
        static_assert(sizeof(source2sdk::client::SoundCommand_t) == 0x20);
    };
};
