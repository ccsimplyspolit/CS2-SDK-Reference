#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CAudioSentence.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVSoundFormat_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x40
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVSound
        {
        public:
            // m_Sentences has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::soundsystem_voicecontainers::CAudioSentence> m_Sentences;
            char m_Sentences[0x10]; // 0x0            
            std::int32_t m_nRate; // 0x10            
            source2sdk::soundsystem_voicecontainers::CVSoundFormat_t m_nFormat; // 0x14            
            uint8_t _pad0015[0x3]; // 0x15
            std::uint32_t m_nChannels; // 0x18            
            std::int32_t m_nLoopStart; // 0x1c            
            std::uint32_t m_nSampleCount; // 0x20            
            float m_flDuration; // 0x24            
            std::uint32_t m_nStreamingSize; // 0x28            
            std::int32_t m_nLoopEnd; // 0x2c            
            uint8_t _pad0030[0x10];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_Sentences) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nRate) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nFormat) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nChannels) == 0x18);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nLoopStart) == 0x1c);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nSampleCount) == 0x20);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_flDuration) == 0x24);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nStreamingSize) == 0x28);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nLoopEnd) == 0x2c);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVSound) == 0x40);
    };
};
