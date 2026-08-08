#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCitadelRankedBadgeProp;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f8
        // Has VTable
        //
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CCitadelLocalPlayerRankedBadgeProp : public source2sdk::client::C_BaseEntity
        {
        public:
            // m_hBadgeProp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCitadelRankedBadgeProp> m_hBadgeProp;
            char m_hBadgeProp[0x4]; // 0x5f0
            uint8_t _pad05f4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CCitadelLocalPlayerRankedBadgeProp because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CCitadelLocalPlayerRankedBadgeProp) == 0x5f8);
    };
};
