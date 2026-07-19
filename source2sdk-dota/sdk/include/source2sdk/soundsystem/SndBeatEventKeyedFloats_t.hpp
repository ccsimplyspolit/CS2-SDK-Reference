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
        struct SndBeatEventKeyedFloats_t : public source2sdk::soundsystem::SndBeatEventKeys_t
        {
        public:
            // metadata: MPropertyFriendlyName "Float"
            float m_flFloat; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in SndBeatEventKeyedFloats_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::SndBeatEventKeyedFloats_t) == 0x18);
    };
};
