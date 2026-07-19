#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCVoiceContainerBase.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerAsyncGenerator.hpp"

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
        // Size: 0x158
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Granulator Container"
        #pragma pack(push, 1)
        class CVoiceContainerGranulator : public source2sdk::soundsystem_voicecontainers::CVoiceContainerAsyncGenerator
        {
        public:
            float m_flGrainLength; // 0x80            
            float m_flGrainCrossfadeAmount; // 0x84            
            float m_flStartJitter; // 0x88            
            float m_flPlaybackJitter; // 0x8c            
            bool m_bShouldWraparound; // 0x90            
            uint8_t _pad0091[0x7]; // 0x91
            // m_sourceAudio has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_sourceAudio;
            char m_sourceAudio[0x8]; // 0x98            
            uint8_t _pad00a0[0xb8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerGranulator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerGranulator) == 0x158);
    };
};
