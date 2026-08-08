#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PackedRank_t.hpp"
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
        // Size: 0xce0
        // Has VTable
        //
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "PackedRank_t m_unPackedRank"
        #pragma pack(push, 1)
        class CCitadelRankedBadgeProp : public source2sdk::server::CDynamicProp
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::PackedRank_t m_unPackedRank; // 0xcd0
            uint8_t _pad0cd1[0xf];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CCitadelRankedBadgeProp because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CCitadelRankedBadgeProp) == 0xce0);
    };
};
