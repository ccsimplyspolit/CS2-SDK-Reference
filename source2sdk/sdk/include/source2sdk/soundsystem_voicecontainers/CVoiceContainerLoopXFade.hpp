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
        // Size: 0xa8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Loop XFade"
        // static metadata: MPropertyDescription "Sample accurate looping with xfade capabilities."
        #pragma pack(push, 1)
        class CVoiceContainerLoopXFade : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            // metadata: MPropertyFriendlyName "Vsnd Reference"
            source2sdk::soundsystem_voicecontainers::CSoundContainerReference m_sound; // 0x70            
            float m_flLoopEnd; // 0x90            
            float m_flLoopStart; // 0x94            
            float m_flFadeOut; // 0x98            
            float m_flFadeIn; // 0x9c            
            bool m_bPlayHead; // 0xa0            
            bool m_bPlayTail; // 0xa1            
            bool m_bEqualPow; // 0xa2            
            uint8_t _pad00a3[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerLoopXFade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerLoopXFade) == 0xa8);
    };
};
