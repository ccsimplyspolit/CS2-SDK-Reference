#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        #pragma pack(push, 1)
        struct DOTANeutralCampInfo_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hNeutralSpawner;
            char m_hNeutralSpawner[0x4]; // 0x30
            std::int32_t m_nStackCount; // 0x34
        };
        #pragma pack(pop)

        static_assert(offsetof(source2sdk::client::DOTANeutralCampInfo_t, m_hNeutralSpawner) == 0x30);
        static_assert(offsetof(source2sdk::client::DOTANeutralCampInfo_t, m_nStackCount) == 0x34);

        static_assert(sizeof(source2sdk::client::DOTANeutralCampInfo_t) == 0x38);
    };
};
