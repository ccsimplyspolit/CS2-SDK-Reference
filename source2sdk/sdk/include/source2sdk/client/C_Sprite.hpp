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
        // Size: 0x1030
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_Sprite : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // m_hSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSpriteMaterial;
            char m_hSpriteMaterial[0x8]; // 0xfb0            
            // m_hAttachedToEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttachedToEntity;
            char m_hAttachedToEntity[0x4]; // 0xfb8            
            source2sdk::modellib::AttachmentHandle_t m_nAttachment; // 0xfbc            
            uint8_t _pad0fbd[0x3]; // 0xfbd
            float m_flSpriteFramerate; // 0xfc0            
            float m_flFrame; // 0xfc4            
            source2sdk::entity2::GameTime_t m_flDieTime; // 0xfc8            
            uint8_t _pad0fcc[0xc]; // 0xfcc
            std::uint32_t m_nBrightness; // 0xfd8            
            float m_flBrightnessDuration; // 0xfdc            
            float m_flSpriteScale; // 0xfe0            
            float m_flScaleDuration; // 0xfe4            
            bool m_bWorldSpaceScale; // 0xfe8            
            uint8_t _pad0fe9[0x3]; // 0xfe9
            float m_flGlowProxySize; // 0xfec            
            float m_flHDRColorScale; // 0xff0            
            source2sdk::entity2::GameTime_t m_flLastTime; // 0xff4            
            float m_flMaxFrame; // 0xff8            
            float m_flStartScale; // 0xffc            
            float m_flDestScale; // 0x1000            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart; // 0x1004            
            std::int32_t m_nStartBrightness; // 0x1008            
            std::int32_t m_nDestBrightness; // 0x100c            
            source2sdk::entity2::GameTime_t m_flBrightnessTimeStart; // 0x1010            
            uint8_t _pad1014[0xc]; // 0x1014
            // metadata: MNotSaved
            std::int32_t m_nSpriteWidth; // 0x1020            
            // metadata: MNotSaved
            std::int32_t m_nSpriteHeight; // 0x1024            
            float m_flSpeed; // 0x1028            
            uint8_t _pad102c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Sprite because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Sprite) == 0x1030);
    };
};
