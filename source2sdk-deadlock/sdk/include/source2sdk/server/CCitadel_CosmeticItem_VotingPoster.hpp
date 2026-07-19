#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/server/CCitadel_Item.hpp"

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
        // Size: 0x1200
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bPreview"
        // static metadata: MNetworkVarNames "HeroID_t m_nActiveHero"
        #pragma pack(push, 1)
        class CCitadel_CosmeticItem_VotingPoster : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0f78[0x280]; // 0xf78
            // metadata: MNetworkEnable
            bool m_bPreview; // 0x11f8            
            uint8_t _pad11f9[0x3]; // 0x11f9
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_nActiveHero; // 0x11fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_CosmeticItem_VotingPoster because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_CosmeticItem_VotingPoster) == 0x1200);
    };
};
