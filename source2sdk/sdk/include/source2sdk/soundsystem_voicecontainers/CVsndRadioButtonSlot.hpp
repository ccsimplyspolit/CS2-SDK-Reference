#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CSoundContainerReference.hpp"
#include "source2sdk/soundsystem_voicecontainers/EVsndPlaybackMode.hpp"

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
        // Size: 0x88
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVsndRadioButtonSlot
        {
        public:
            // metadata: MPropertyGroupName "Vsnd"
            // metadata: MPropertyFriendlyName "Enable Vsnd"
            bool m_bEnableVsnd; // 0x0            
            uint8_t _pad0001[0x7]; // 0x1
            // metadata: MPropertyGroupName "Vsnd"
            // metadata: MPropertyFriendlyName "Vsnd File"
            source2sdk::soundsystem_voicecontainers::CSoundContainerReference m_vsnd; // 0x8            
            // metadata: MPropertyGroupName "Endcap"
            // metadata: MPropertyFriendlyName "Enable Endcap"
            bool m_bEnableEndcap; // 0x28            
            uint8_t _pad0029[0x7]; // 0x29
            // metadata: MPropertyGroupName "Endcap"
            // metadata: MPropertyFriendlyName "Endcap Vsnd (Stop)"
            source2sdk::soundsystem_voicecontainers::CSoundContainerReference m_endcapVsnd; // 0x30            
            // metadata: MPropertyGroupName "Loopcap"
            // metadata: MPropertyFriendlyName "Enable Loopcap"
            bool m_bEnableLoopcap; // 0x50            
            uint8_t _pad0051[0x7]; // 0x51
            // metadata: MPropertyGroupName "Loopcap"
            // metadata: MPropertyFriendlyName "Loopcap Vsnd (Loop)"
            source2sdk::soundsystem_voicecontainers::CSoundContainerReference m_loopcapVsnd; // 0x58            
            // metadata: MPropertyFriendlyName "Group"
            std::int32_t m_group; // 0x78            
            // metadata: MPropertyFriendlyName "Volume"
            float m_volume; // 0x7c            
            // metadata: MPropertyFriendlyName "Fade Out (sec)"
            float m_fadeOut; // 0x80            
            // metadata: MPropertyFriendlyName "Mode"
            source2sdk::soundsystem_voicecontainers::EVsndPlaybackMode m_mode; // 0x84            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndRadioButtonSlot, m_bEnableVsnd) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndRadioButtonSlot, m_vsnd) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndRadioButtonSlot, m_bEnableEndcap) == 0x28);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndRadioButtonSlot, m_endcapVsnd) == 0x30);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndRadioButtonSlot, m_bEnableLoopcap) == 0x50);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndRadioButtonSlot, m_loopcapVsnd) == 0x58);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndRadioButtonSlot, m_group) == 0x78);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndRadioButtonSlot, m_volume) == 0x7c);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndRadioButtonSlot, m_fadeOut) == 0x80);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndRadioButtonSlot, m_mode) == 0x84);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVsndRadioButtonSlot) == 0x88);
    };
};
