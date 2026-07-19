#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVMixAudioMeter
        {
        public:
            CUtlString m_name; // 0x0            
            CUtlString m_displayName; // 0x8            
            uint8_t _pad0010[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixAudioMeter, m_name) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixAudioMeter, m_displayName) == 0x8);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixAudioMeter) == 0x18);
    };
};
