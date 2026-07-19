#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/GuildID_t.hpp"
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xd70
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_DOTA_GuildBannerDynamic : public source2sdk::client::C_DynamicProp
        {
        public:
            bool m_bRespawnClientEntity; // 0xd10            
            bool m_bPlaySpawnAnimation; // 0xd11            
            std::uint8_t m_unGuildTier; // 0xd12            
            std::uint8_t m_unPrimaryColor; // 0xd13            
            std::uint8_t m_unSecondaryColor; // 0xd14            
            std::uint8_t m_unPattern; // 0xd15            
            uint8_t _pad0d16[0x2]; // 0xd16
            std::uint64_t m_unLogo; // 0xd18            
            source2sdk::client::GuildID_t m_unGuildID; // 0xd20            
            std::uint32_t m_unGuildFlags; // 0xd24            
            bool m_bUsePanelCache; // 0xd28            
            uint8_t _pad0d29[0x3]; // 0xd29
            // m_hClientEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hClientEntity;
            char m_hClientEntity[0x4]; // 0xd2c            
            uint8_t _pad0d30[0x40];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_GuildBannerDynamic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_GuildBannerDynamic) == 0xd70);
    };
};
