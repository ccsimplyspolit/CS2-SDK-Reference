#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CSoundContainerReference.hpp"
#include "source2sdk/soundsystem_voicecontainers/EVsndTriggerMode.hpp"

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
        class CVsndTriggerSlot
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
            // metadata: MPropertyFriendlyName "Volume"
            float m_volume; // 0x78            
            // metadata: MPropertyFriendlyName "Fade Out (sec)"
            float m_fadeOut; // 0x7c            
            // metadata: MPropertyFriendlyName "Mode"
            source2sdk::soundsystem_voicecontainers::EVsndTriggerMode m_mode; // 0x80            
            uint8_t _pad0084[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot, m_bEnableVsnd) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot, m_vsnd) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot, m_bEnableEndcap) == 0x28);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot, m_endcapVsnd) == 0x30);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot, m_bEnableLoopcap) == 0x50);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot, m_loopcapVsnd) == 0x58);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot, m_volume) == 0x78);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot, m_fadeOut) == 0x7c);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot, m_mode) == 0x80);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot) == 0x88);
    };
};
