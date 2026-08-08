#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x390
        // Has VTable
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDOTA_ModifierManager
        {
        public:
            uint8_t _pad0000[0x28]; // 0x0
            bool m_bCompactBuffListPending; // 0x28
            uint8_t _pad0029[0x351]; // 0x29
            std::uint16_t m_nHasTruesightForTeam; // 0x37a
            std::uint16_t m_nHasTruesightForTeamValid; // 0x37c
            std::uint16_t m_nProvidesFOWPositionForTeam; // 0x37e
            std::uint16_t m_nProvidesFOWPositionForTeamValid; // 0x380
            uint8_t _pad0382[0x2]; // 0x382
            std::int32_t m_iBuffIndex; // 0x384
            std::int32_t m_iLockRefCount; // 0x388
            uint8_t _pad038c[0x4];
        };
        #pragma pack(pop)

        static_assert(offsetof(source2sdk::client::CDOTA_ModifierManager, m_bCompactBuffListPending) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTA_ModifierManager, m_nHasTruesightForTeam) == 0x37a);
        static_assert(offsetof(source2sdk::client::CDOTA_ModifierManager, m_nHasTruesightForTeamValid) == 0x37c);
        static_assert(offsetof(source2sdk::client::CDOTA_ModifierManager, m_nProvidesFOWPositionForTeam) == 0x37e);
        static_assert(offsetof(source2sdk::client::CDOTA_ModifierManager, m_nProvidesFOWPositionForTeamValid) == 0x380);
        static_assert(offsetof(source2sdk::client::CDOTA_ModifierManager, m_iBuffIndex) == 0x384);
        static_assert(offsetof(source2sdk::client::CDOTA_ModifierManager, m_iLockRefCount) == 0x388);

        static_assert(sizeof(source2sdk::client::CDOTA_ModifierManager) == 0x390);
    };
};
