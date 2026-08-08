#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_Bushwhack_Trap : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t visual_height; // 0x1a78
            float animation_rate; // 0x1a7c
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a80
            bool m_bPullComplete; // 0x1a84
            uint8_t _pad1a85[0x3]; // 0x1a85
            std::uint32_t m_TreeId; // 0x1a88
            float m_flDamagePerTick; // 0x1a8c
            std::int32_t m_nDamageTicks; // 0x1a90
            std::int32_t m_nTicksApplied; // 0x1a94
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Bushwhack_Trap because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Hoodwink_Bushwhack_Trap) == 0x1a98);
    };
};
