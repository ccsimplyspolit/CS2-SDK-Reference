#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

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
        // Standard-layout class: false
        // Size: 0xfe8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_TextureBasedAnimatable : public source2sdk::client::C_BaseModelEntity
        {
        public:
            bool m_bLoop; // 0xfb0            
            uint8_t _pad0fb1[0x3]; // 0xfb1
            float m_flFPS; // 0xfb4            
            // m_hPositionKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hPositionKeys;
            char m_hPositionKeys[0x8]; // 0xfb8            
            // m_hRotationKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hRotationKeys;
            char m_hRotationKeys[0x8]; // 0xfc0            
            Vector m_vAnimationBoundsMin; // 0xfc8            
            Vector m_vAnimationBoundsMax; // 0xfd4            
            // metadata: MNotSaved
            float m_flStartTime; // 0xfe0            
            float m_flStartFrame; // 0xfe4            
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TextureBasedAnimatable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TextureBasedAnimatable) == 0xfe8);
    };
};
