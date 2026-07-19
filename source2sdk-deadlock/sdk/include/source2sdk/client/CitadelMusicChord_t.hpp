#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelArpeggiatorMode_t.hpp"
#include "source2sdk/client/CitadelMidiNotePitch_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelMusicChord_t
        {
        public:
            float m_flStartTime; // 0x0            
            source2sdk::client::CitadelArpeggiatorMode_t m_ArpeggiatorMode; // 0x4            
            std::uint8_t m_nNumOctaves; // 0x8            
            uint8_t _pad0009[0x7]; // 0x9
            // m_ChordVoicing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CitadelMidiNotePitch_t> m_ChordVoicing;
            char m_ChordVoicing[0x18]; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelMusicChord_t, m_flStartTime) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelMusicChord_t, m_ArpeggiatorMode) == 0x4);
        static_assert(offsetof(source2sdk::client::CitadelMusicChord_t, m_nNumOctaves) == 0x8);
        static_assert(offsetof(source2sdk::client::CitadelMusicChord_t, m_ChordVoicing) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CitadelMusicChord_t) == 0x28);
    };
};
