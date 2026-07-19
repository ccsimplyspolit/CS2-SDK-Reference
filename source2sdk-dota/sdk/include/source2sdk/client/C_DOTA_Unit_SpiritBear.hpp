#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"

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
        // Size: 0x1d88
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Unit_SpiritBear : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            bool m_bShouldRespawn; // 0x1d80            
            bool m_bStolen; // 0x1d81            
            uint8_t _pad1d82[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_SpiritBear because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_SpiritBear) == 0x1d88);
    };
};
