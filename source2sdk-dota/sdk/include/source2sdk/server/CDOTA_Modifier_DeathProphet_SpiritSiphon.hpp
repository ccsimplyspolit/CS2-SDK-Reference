#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        class CDOTA_Modifier_DeathProphet_SpiritSiphon : public source2sdk::client::CDOTA_Buff
        {
        public:
            float flSmoothness; // 0x1a78
            float damage; // 0x1a7c
            float damage_pct; // 0x1a80
            std::int32_t drain_range; // 0x1a84
            float haunt_duration; // 0x1a88
            std::int32_t siphon_buffer; // 0x1a8c
            std::int32_t movement_steal; // 0x1a90
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a94
            source2sdk::client::ParticleIndex_t m_iLinkIndex; // 0x1a98
            std::int32_t m_nSelfBuffSerialNumber; // 0x1a9c
            std::int32_t m_nTargetDebuffSerialNumber; // 0x1aa0
            bool m_bAppliedFear; // 0x1aa4
            uint8_t _pad1aa5[0x3]; // 0x1aa5
            float shard_fear_duration; // 0x1aa8
            float shard_consecutive_siphon_duration; // 0x1aac
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_DeathProphet_SpiritSiphon because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DeathProphet_SpiritSiphon) == 0x1ab0);
    };
};
