#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/GuildID_t.hpp"
#include "source2sdk/server/CDynamicProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xa10
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CDOTA_GuildBannerDynamic : public source2sdk::server::CDynamicProp
        {
        public:
            bool m_bRespawnClientEntity; // 0x9f0            
            bool m_bPlaySpawnAnimation; // 0x9f1            
            std::uint8_t m_unGuildTier; // 0x9f2            
            std::uint8_t m_unPrimaryColor; // 0x9f3            
            std::uint8_t m_unSecondaryColor; // 0x9f4            
            std::uint8_t m_unPattern; // 0x9f5            
            uint8_t _pad09f6[0x2]; // 0x9f6
            std::uint64_t m_unLogo; // 0x9f8            
            source2sdk::client::GuildID_t m_unGuildID; // 0xa00            
            std::uint32_t m_unGuildFlags; // 0xa04            
            bool m_bUsePanelCache; // 0xa08            
            uint8_t _pad0a09[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_GuildBannerDynamic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_GuildBannerDynamic) == 0xa10);
    };
};
