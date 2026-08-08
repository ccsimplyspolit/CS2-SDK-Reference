#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tusk_WalrusPunch : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t crit_multiplier; // 0x1a78
            std::int32_t bonus_damage; // 0x1a7c
            float air_time; // 0x1a80
            float slow_duration; // 0x1a84
            CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1a88
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a90
            bool m_bWalrusPunch; // 0x1a94
            bool m_bTalentProc; // 0x1a95
            uint8_t _pad1a96[0x2]; // 0x1a96
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a98
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1ab0
            uint8_t _pad1ab4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Tusk_WalrusPunch because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Tusk_WalrusPunch) == 0x1ab8);
    };
};
