#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"

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
        // Size: 0x1f30
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Unit_Hero_Meepo : public source2sdk::server::CDOTA_BaseNPC_Hero
        {
        public:
            bool m_bRecursionGuard; // 0x1f08
            uint8_t _pad1f09[0x1f]; // 0x1f09
            std::int32_t m_nWhichMeepo; // 0x1f28
            uint8_t _pad1f2c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Unit_Hero_Meepo because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_Meepo) == 0x1f30);
    };
};
