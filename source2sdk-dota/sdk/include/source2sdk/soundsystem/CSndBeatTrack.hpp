#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/SndBeatTrackPlaybackType_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x98
        // Construct allowed
        // 
        // static metadata: MPropertyArrayElementNameKey "m_name"
        // static metadata: MVDataAnonymousNode
        // static metadata: MVDataOutlinerNameExpr
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSndBeatTrack
        {
        public:
            // metadata: MPropertyFriendlyName "Track Name"
            CUtlString m_name; // 0x0            
            uint8_t _pad0008[0x18]; // 0x8
            // metadata: MPropertyFriendlyName "Playback Mode"
            source2sdk::soundsystem::SndBeatTrackPlaybackType_t m_playbackType; // 0x20            
            // metadata: MPropertyFriendlyName "Transpose"
            std::int32_t m_nTranspose; // 0x24            
            // metadata: MPropertyFriendlyName "Sync To Voice"
            bool m_bSyncToVoice; // 0x28            
            uint8_t _pad0029[0x3]; // 0x29
            // metadata: MPropertyFriendlyName "BPM"
            float m_flBPM; // 0x2c            
            uint8_t _pad0030[0x68];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatTrack, m_name) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatTrack, m_playbackType) == 0x20);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatTrack, m_nTranspose) == 0x24);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatTrack, m_bSyncToVoice) == 0x28);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatTrack, m_flBPM) == 0x2c);
        
        static_assert(sizeof(source2sdk::soundsystem::CSndBeatTrack) == 0x98);
    };
};
