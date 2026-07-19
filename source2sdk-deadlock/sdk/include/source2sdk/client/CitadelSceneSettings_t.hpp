#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x20
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelSceneSettings_t
        {
        public:
            // metadata: MPropertyFriendlyName "Don't Pre-Settle Cloth"
            bool m_bDontPreSettleCloth; // 0x0            
            uint8_t _pad0001[0x7]; // 0x1
            // metadata: MPropertyStartGroup "Camera Settings"
            // metadata: MPropertyFriendlyName "Camera Attachment"
            // metadata: MPropertyCustomFGDType "model_attachment"
            CUtlString m_strAttachmentName; // 0x8            
            // metadata: MPropertyFriendlyName "FOV"
            float m_flFOV; // 0x10            
            // metadata: MPropertyFriendlyName "Z-Near"
            float m_flZNear; // 0x14            
            // metadata: MPropertyFriendlyName "Z-Far"
            float m_flZFar; // 0x18            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelSceneSettings_t, m_bDontPreSettleCloth) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelSceneSettings_t, m_strAttachmentName) == 0x8);
        static_assert(offsetof(source2sdk::client::CitadelSceneSettings_t, m_flFOV) == 0x10);
        static_assert(offsetof(source2sdk::client::CitadelSceneSettings_t, m_flZNear) == 0x14);
        static_assert(offsetof(source2sdk::client::CitadelSceneSettings_t, m_flZFar) == 0x18);
        
        static_assert(sizeof(source2sdk::client::CitadelSceneSettings_t) == 0x20);
    };
};
