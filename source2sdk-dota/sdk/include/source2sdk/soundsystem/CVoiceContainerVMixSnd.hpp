#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"

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
        // Size: 0x1d8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "VMixSound"
        // static metadata: MPropertyDescription "Plays a vmix graph and its containers."
        #pragma pack(push, 1)
        class CVoiceContainerVMixSnd : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            uint8_t _pad0070[0x168];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::soundsystem::CVoiceContainerVMixSnd) == 0x1d8);
    };
};
