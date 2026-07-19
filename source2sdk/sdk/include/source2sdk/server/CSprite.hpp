#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7e0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSprite : public source2sdk::server::CBaseModelEntity
        {
        public:
            // m_hSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSpriteMaterial;
            char m_hSpriteMaterial[0x8]; // 0x770            
            // m_hAttachedToEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttachedToEntity;
            char m_hAttachedToEntity[0x4]; // 0x778            
            source2sdk::modellib::AttachmentHandle_t m_nAttachment; // 0x77c            
            uint8_t _pad077d[0x3]; // 0x77d
            float m_flSpriteFramerate; // 0x780            
            float m_flFrame; // 0x784            
            source2sdk::entity2::GameTime_t m_flDieTime; // 0x788            
            uint8_t _pad078c[0xc]; // 0x78c
            std::uint32_t m_nBrightness; // 0x798            
            float m_flBrightnessDuration; // 0x79c            
            float m_flSpriteScale; // 0x7a0            
            float m_flScaleDuration; // 0x7a4            
            bool m_bWorldSpaceScale; // 0x7a8            
            uint8_t _pad07a9[0x3]; // 0x7a9
            float m_flGlowProxySize; // 0x7ac            
            float m_flHDRColorScale; // 0x7b0            
            source2sdk::entity2::GameTime_t m_flLastTime; // 0x7b4            
            float m_flMaxFrame; // 0x7b8            
            float m_flStartScale; // 0x7bc            
            float m_flDestScale; // 0x7c0            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart; // 0x7c4            
            std::int32_t m_nStartBrightness; // 0x7c8            
            std::int32_t m_nDestBrightness; // 0x7cc            
            source2sdk::entity2::GameTime_t m_flBrightnessTimeStart; // 0x7d0            
            // metadata: MNotSaved
            std::int32_t m_nSpriteWidth; // 0x7d4            
            // metadata: MNotSaved
            std::int32_t m_nSpriteHeight; // 0x7d8            
            float m_flSpeed; // 0x7dc            
            
            // Datamap fields:
            // void InputHideSprite; // 0x0
            // void InputShowSprite; // 0x0
            // void InputToggleSprite; // 0x0
            // float InputColorRedValue; // 0x0
            // float InputColorGreenValue; // 0x0
            // float InputColorBlueValue; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSprite because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSprite) == 0x7e0);
    };
};
