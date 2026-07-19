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
        // Size: 0xac0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_TextureBasedAnimatable : public source2sdk::client::C_BaseModelEntity
        {
        public:
            bool m_bLoop; // 0xa88            
            uint8_t _pad0a89[0x3]; // 0xa89
            float m_flFPS; // 0xa8c            
            // m_hPositionKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hPositionKeys;
            char m_hPositionKeys[0x8]; // 0xa90            
            // m_hRotationKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hRotationKeys;
            char m_hRotationKeys[0x8]; // 0xa98            
            Vector m_vAnimationBoundsMin; // 0xaa0            
            Vector m_vAnimationBoundsMax; // 0xaac            
            // metadata: MNotSaved
            float m_flStartTime; // 0xab8            
            float m_flStartFrame; // 0xabc            
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TextureBasedAnimatable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TextureBasedAnimatable) == 0xac0);
    };
};
