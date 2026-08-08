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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind : public source2sdk::client::CDOTA_Buff
        {
        public:
            float slow; // 0x1a78
            std::int32_t magic_resistance; // 0x1a7c
            float stun_duration; // 0x1a80
            VectorWS vLastPos; // 0x1a84
            bool bResetPosition; // 0x1a90
            uint8_t _pad1a91[0x3]; // 0x1a91
            float m_fAccumulatedDistance; // 0x1a94
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a98
            source2sdk::client::ParticleIndex_t m_nStatusFXIndex; // 0x1a9c
            bool m_bStunned; // 0x1aa0
            uint8_t _pad1aa1[0x7];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind) == 0x1aa8);
    };
};
