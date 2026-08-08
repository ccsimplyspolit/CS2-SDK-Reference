#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Imbue_Choice : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nBehaviorFlagRequired; // 0x1a78
            std::int32_t m_nTeamTargetRequired; // 0x1a7c
            bool m_bCastRangeRequired; // 0x1a80
            bool m_bAOERequired; // 0x1a81
            uint8_t _pad1a82[0x2]; // 0x1a82
            source2sdk::client::AbilityID_t m_nItemID; // 0x1a84
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Imbue_Choice because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Imbue_Choice) == 0x1a88);
    };
};
