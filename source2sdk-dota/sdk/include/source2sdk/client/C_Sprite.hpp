#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0xb08
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_Sprite : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // m_hSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSpriteMaterial;
            char m_hSpriteMaterial[0x8]; // 0xa88            
            // m_hAttachedToEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttachedToEntity;
            char m_hAttachedToEntity[0x4]; // 0xa90            
            source2sdk::modellib::AttachmentHandle_t m_nAttachment; // 0xa94            
            uint8_t _pad0a95[0x3]; // 0xa95
            float m_flSpriteFramerate; // 0xa98            
            float m_flFrame; // 0xa9c            
            source2sdk::entity2::GameTime_t m_flDieTime; // 0xaa0            
            uint8_t _pad0aa4[0xc]; // 0xaa4
            std::uint32_t m_nBrightness; // 0xab0            
            float m_flBrightnessDuration; // 0xab4            
            float m_flSpriteScale; // 0xab8            
            float m_flScaleDuration; // 0xabc            
            bool m_bWorldSpaceScale; // 0xac0            
            uint8_t _pad0ac1[0x3]; // 0xac1
            float m_flGlowProxySize; // 0xac4            
            float m_flHDRColorScale; // 0xac8            
            source2sdk::entity2::GameTime_t m_flLastTime; // 0xacc            
            float m_flMaxFrame; // 0xad0            
            float m_flStartScale; // 0xad4            
            float m_flDestScale; // 0xad8            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart; // 0xadc            
            std::int32_t m_nStartBrightness; // 0xae0            
            std::int32_t m_nDestBrightness; // 0xae4            
            source2sdk::entity2::GameTime_t m_flBrightnessTimeStart; // 0xae8            
            uint8_t _pad0aec[0xc]; // 0xaec
            // metadata: MNotSaved
            std::int32_t m_nSpriteWidth; // 0xaf8            
            // metadata: MNotSaved
            std::int32_t m_nSpriteHeight; // 0xafc            
            float m_flSpeed; // 0xb00            
            uint8_t _pad0b04[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Sprite because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Sprite) == 0xb08);
    };
};
