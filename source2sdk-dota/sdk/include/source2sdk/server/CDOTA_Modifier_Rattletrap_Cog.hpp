#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rattletrap_Cog : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bEnabled; // 0x1a78
            bool m_bPassThrough; // 0x1a79
            uint8_t _pad1a7a[0x2]; // 0x1a7a
            std::int32_t push_length; // 0x1a7c
            float push_duration; // 0x1a80
            std::int32_t radius; // 0x1a84
            std::int32_t cogs_pullin; // 0x1a88
            std::int32_t attacks_to_destroy; // 0x1a8c
            float m_flTriggerDistance; // 0x1a90
            bool m_bCogsPullin; // 0x1a94
            uint8_t _pad1a95[0x3]; // 0x1a95
            std::int32_t m_iCogIndex; // 0x1a98
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a9c
            VectorWS vCenter; // 0x1aa0
            uint8_t _pad1aac[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Cog because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Rattletrap_Cog) == 0x1ab0);
    };
};
