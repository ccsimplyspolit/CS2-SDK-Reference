#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item.hpp"
#include "source2sdk/client/HeroID_t.hpp"

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
        // Size: 0x1460
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bPreview"
        // static metadata: MNetworkVarNames "HeroID_t m_nActiveHero"
        #pragma pack(push, 1)
        class CCitadel_CosmeticItem_VotingPoster : public source2sdk::client::CCitadel_Item
        {
        public:
            uint8_t _pad11d8[0x280]; // 0x11d8
            // metadata: MNetworkEnable
            bool m_bPreview; // 0x1458            
            uint8_t _pad1459[0x3]; // 0x1459
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_nActiveHero; // 0x145c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_CosmeticItem_VotingPoster because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_CosmeticItem_VotingPoster) == 0x1460);
    };
};
