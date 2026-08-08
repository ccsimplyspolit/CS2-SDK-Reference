#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_ColdSnap : public source2sdk::client::CDOTA_Buff
        {
        public:
            float freeze_damage; // 0x1a78
            float freeze_duration; // 0x1a7c
            float freeze_cooldown; // 0x1a80
            float damage_trigger; // 0x1a84
            float spell_lifesteal; // 0x1a88
            float spell_amp; // 0x1a8c
            float freeze_heal; // 0x1a90
            float freeze_mana; // 0x1a94
            std::int32_t nQuasApplications; // 0x1a98
            std::int32_t nExortApplications; // 0x1a9c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_ColdSnap because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Invoker_ColdSnap) == 0x1aa0);
    };
};
