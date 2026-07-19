#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerGenerator.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb8
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVoiceContainerAsyncGenerator : public source2sdk::soundsystem_voicecontainers::CVoiceContainerGenerator
        {
        public:
            uint8_t _pad00a8[0x10];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerAsyncGenerator) == 0xb8);
    };
};
