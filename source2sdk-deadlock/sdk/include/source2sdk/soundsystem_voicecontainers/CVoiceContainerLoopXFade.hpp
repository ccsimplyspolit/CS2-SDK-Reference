#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CSoundContainerReference.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"

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
        // Size: 0xe0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Loop XFade"
        // static metadata: MPropertyDescription "Sample accurate looping with xfade capabilities."
        #pragma pack(push, 1)
        class CVoiceContainerLoopXFade : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            // metadata: MPropertyFriendlyName "Vsnd Reference"
            source2sdk::soundsystem_voicecontainers::CSoundContainerReference m_sound; // 0xa8            
            float m_flLoopEnd; // 0xc8            
            float m_flLoopStart; // 0xcc            
            float m_flFadeOut; // 0xd0            
            float m_flFadeIn; // 0xd4            
            bool m_bPlayHead; // 0xd8            
            bool m_bPlayTail; // 0xd9            
            bool m_bEqualPow; // 0xda            
            uint8_t _pad00db[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerLoopXFade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerLoopXFade) == 0xe0);
    };
};
