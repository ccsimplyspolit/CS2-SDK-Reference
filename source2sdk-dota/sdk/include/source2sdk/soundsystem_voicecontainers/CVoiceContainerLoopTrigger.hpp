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
        // Size: 0xa0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "LoopTrigger"
        // static metadata: MPropertyDescription "Continuously retriggers a sound and optionally fades to the new instance."
        #pragma pack(push, 1)
        class CVoiceContainerLoopTrigger : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            float m_flRetriggerTimeMin; // 0x70            
            float m_flRetriggerTimeMax; // 0x74            
            float m_flFadeTime; // 0x78            
            bool m_bCrossFade; // 0x7c            
            uint8_t _pad007d[0x3]; // 0x7d
            // metadata: MPropertyFriendlyName "Vsnd Reference"
            source2sdk::soundsystem_voicecontainers::CSoundContainerReference m_sound; // 0x80            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerLoopTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerLoopTrigger) == 0xa0);
    };
};
