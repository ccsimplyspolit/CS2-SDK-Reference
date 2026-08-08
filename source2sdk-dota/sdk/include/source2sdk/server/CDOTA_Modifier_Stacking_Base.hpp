#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1a98
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CDOTA_Modifier_Stacking_Base : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t max_stacks; // 0x1a78
            bool destroy_on_zero_stacks; // 0x1a7c
            uint8_t _pad1a7d[0x3]; // 0x1a7d
            float sub_modifier_forced_duration; // 0x1a80
            uint8_t _pad1a84[0x4]; // 0x1a84
            CUtlString m_szSubModifierName; // 0x1a88
            KeyValues* m_pSubModifierKV; // 0x1a90
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Stacking_Base because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Stacking_Base) == 0x1a98);
    };
};
