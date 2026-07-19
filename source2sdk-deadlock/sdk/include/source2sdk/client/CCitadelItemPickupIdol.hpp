#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelItemPickup.hpp"

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
        // Size: 0xd00
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nTeamBias"
        // static metadata: MNetworkVarNames "bool m_bPlaySpawnMusic"
        #pragma pack(push, 1)
        class CCitadelItemPickupIdol : public source2sdk::client::C_CitadelItemPickup
        {
        public:
            uint8_t _pad0cf0[0x8]; // 0xcf0
            // metadata: MNetworkEnable
            std::int32_t m_nTeamBias; // 0xcf8            
            // metadata: MNetworkEnable
            bool m_bPlaySpawnMusic; // 0xcfc            
            uint8_t _pad0cfd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelItemPickupIdol because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelItemPickupIdol) == 0xd00);
    };
};
