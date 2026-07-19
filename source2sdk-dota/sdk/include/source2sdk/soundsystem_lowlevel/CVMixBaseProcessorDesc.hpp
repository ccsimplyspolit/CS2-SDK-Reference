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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVMixBaseProcessorDesc
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            CUtlString m_name; // 0x8            
            std::uint32_t m_nDebugId; // 0x10            
            std::int32_t m_nChannels; // 0x14            
            float m_flxfade; // 0x18            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc, m_name) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc, m_nDebugId) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc, m_nChannels) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc, m_flxfade) == 0x18);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc) == 0x20);
    };
};
