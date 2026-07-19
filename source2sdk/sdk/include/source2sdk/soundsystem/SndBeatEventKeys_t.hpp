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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataBase
        // static metadata: MVDataNodeType "1"
        #pragma pack(push, 1)
        struct SndBeatEventKeys_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyFriendlyName "Key"
            float m_flKey; // 0x8            
            uint8_t _pad000c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::SndBeatEventKeys_t, m_flKey) == 0x8);
        
        static_assert(sizeof(source2sdk::soundsystem::SndBeatEventKeys_t) == 0x10);
    };
};
