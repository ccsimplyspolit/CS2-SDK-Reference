#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Random Panner Control"
        // static metadata: MPropertyDescription "Sets a control input every time it's instantiated"
        #pragma pack(push, 1)
        class CRandomPannerControls
        {
        public:
            // metadata: MPropertyFriendlyName "Panning Control Input Name"
            CUtlString m_panningControlInputName; // 0x0            
            // metadata: MPropertyFriendlyName "Volume Control Input Name"
            CUtlString m_volumeControlInputName; // 0x8            
            // metadata: MPropertyFriendlyName "Minimum Random Volume DB"
            float m_flMinVolume; // 0x10            
            // metadata: MPropertyFriendlyName "Maximum Random Volume DB"
            float m_flMaxVolume; // 0x14            
            // metadata: MPropertyFriendlyName "Forward Vector Stack Parameter Name"
            CUtlString m_strVectorStackParam; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CRandomPannerControls, m_panningControlInputName) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CRandomPannerControls, m_volumeControlInputName) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CRandomPannerControls, m_flMinVolume) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CRandomPannerControls, m_flMaxVolume) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CRandomPannerControls, m_strVectorStackParam) == 0x18);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CRandomPannerControls) == 0x20);
    };
};
