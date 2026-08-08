#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"

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
        // Size: 0x1ad8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Fort : public source2sdk::client::C_DOTA_BaseNPC_Building
        {
        public:
            uint8_t _pad1a28[0xa8]; // 0x1a28
            std::uint32_t m_unRandomSeed; // 0x1ad0
            uint8_t _pad1ad4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Fort because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Fort) == 0x1ad8);
    };
};
