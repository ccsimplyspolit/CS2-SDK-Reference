#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Jakiro_LiquidFire : public source2sdk::client::CDOTA_Buff
        {
        public:
            float duration; // 0x1a78
            uint8_t _pad1a7c[0x4]; // 0x1a7c
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a80
            float radius; // 0x1a98
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a9c
            bool double_head; // 0x1aa0
            bool m_bForceProc; // 0x1aa1
            uint8_t _pad1aa2[0x6];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Jakiro_LiquidFire because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Jakiro_LiquidFire) == 0x1aa8);
    };
};
