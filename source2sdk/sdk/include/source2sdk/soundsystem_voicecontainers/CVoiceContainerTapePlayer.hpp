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
        // Size: 0xc0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Tape Player"
        #pragma pack(push, 1)
        class CVoiceContainerTapePlayer : public source2sdk::soundsystem_voicecontainers::CVoiceContainerAsyncGenerator
        {
        public:
            bool m_bShouldWraparound; // 0x80            
            uint8_t _pad0081[0x7]; // 0x81
            // m_sourceAudio has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_sourceAudio;
            char m_sourceAudio[0x8]; // 0x88            
            float m_flTapeSpeedAttackTime; // 0x90            
            float m_flTapeSpeedReleaseTime; // 0x94            
            uint8_t _pad0098[0x28];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerTapePlayer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerTapePlayer) == 0xc0);
    };
};
