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
        // Size: 0x7e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSprite : public source2sdk::server::CBaseModelEntity
        {
        public:
            // m_hSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSpriteMaterial;
            char m_hSpriteMaterial[0x8]; // 0x778            
            // m_hAttachedToEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttachedToEntity;
            char m_hAttachedToEntity[0x4]; // 0x780            
            source2sdk::modellib::AttachmentHandle_t m_nAttachment; // 0x784            
            uint8_t _pad0785[0x3]; // 0x785
            float m_flSpriteFramerate; // 0x788            
            float m_flFrame; // 0x78c            
            source2sdk::entity2::GameTime_t m_flDieTime; // 0x790            
            uint8_t _pad0794[0xc]; // 0x794
            std::uint32_t m_nBrightness; // 0x7a0            
            float m_flBrightnessDuration; // 0x7a4            
            float m_flSpriteScale; // 0x7a8            
            float m_flScaleDuration; // 0x7ac            
            bool m_bWorldSpaceScale; // 0x7b0            
            uint8_t _pad07b1[0x3]; // 0x7b1
            float m_flGlowProxySize; // 0x7b4            
            float m_flHDRColorScale; // 0x7b8            
            source2sdk::entity2::GameTime_t m_flLastTime; // 0x7bc            
            float m_flMaxFrame; // 0x7c0            
            float m_flStartScale; // 0x7c4            
            float m_flDestScale; // 0x7c8            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart; // 0x7cc            
            std::int32_t m_nStartBrightness; // 0x7d0            
            std::int32_t m_nDestBrightness; // 0x7d4            
            source2sdk::entity2::GameTime_t m_flBrightnessTimeStart; // 0x7d8            
            // metadata: MNotSaved
            std::int32_t m_nSpriteWidth; // 0x7dc            
            // metadata: MNotSaved
            std::int32_t m_nSpriteHeight; // 0x7e0            
            float m_flSpeed; // 0x7e4            
            
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
        
        static_assert(sizeof(source2sdk::server::CSprite) == 0x7e8);
    };
};
