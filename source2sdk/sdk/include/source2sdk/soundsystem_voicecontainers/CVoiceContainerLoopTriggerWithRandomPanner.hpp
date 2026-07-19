#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CRandomPannerControls.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerLoopTrigger.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "LoopTriggerWithRandomPanner"
        // static metadata: MPropertyDescription "Continuously retriggers a sound and optionally fades to the new instance. Sends a new Random panning value to a control input on each retrigger"
        #pragma pack(push, 1)
        class CVoiceContainerLoopTriggerWithRandomPanner : public source2sdk::soundsystem_voicecontainers::CVoiceContainerLoopTrigger
        {
        public:
            // metadata: MPropertyFriendlyName "Random Panner Control"
            source2sdk::soundsystem_voicecontainers::CRandomPannerControls m_randomPannerControls; // 0xa0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerLoopTriggerWithRandomPanner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerLoopTriggerWithRandomPanner) == 0xc0);
    };
};
