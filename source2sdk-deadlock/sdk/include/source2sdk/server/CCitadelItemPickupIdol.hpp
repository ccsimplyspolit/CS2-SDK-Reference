#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelItemPickup.hpp"

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
        // Size: 0x5530
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nTeamBias"
        // static metadata: MNetworkVarNames "bool m_bPlaySpawnMusic"
        #pragma pack(push, 1)
        class CCitadelItemPickupIdol : public source2sdk::server::CCitadelItemPickup
        {
        public:
            uint8_t _pad5510[0x10]; // 0x5510
            // metadata: MNetworkEnable
            std::int32_t m_nTeamBias; // 0x5520            
            // metadata: MNetworkEnable
            bool m_bPlaySpawnMusic; // 0x5524            
            uint8_t _pad5525[0xb];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelItemPickupIdol because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelItemPickupIdol) == 0x5530);
    };
};
