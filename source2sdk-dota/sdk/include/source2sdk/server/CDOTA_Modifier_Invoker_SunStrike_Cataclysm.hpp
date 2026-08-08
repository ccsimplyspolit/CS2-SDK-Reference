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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_SunStrike_Cataclysm : public source2sdk::client::CDOTA_Buff
        {
        public:
            float area_of_effect; // 0x1a78
            float damage; // 0x1a7c
            float vision_distance; // 0x1a80
            float vision_duration; // 0x1a84
            float spell_amp; // 0x1a88
            float spell_lifesteal; // 0x1a8c
            VectorWS m_vSoundPos; // 0x1a90
            bool m_bPlaySound; // 0x1a9c
            uint8_t _pad1a9d[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_SunStrike_Cataclysm because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Invoker_SunStrike_Cataclysm) == 0x1aa0);
    };
};
