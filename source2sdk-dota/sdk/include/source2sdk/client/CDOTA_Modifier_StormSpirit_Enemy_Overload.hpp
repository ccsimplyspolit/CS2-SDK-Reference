#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_StormSpirit_Enemy_Overload : public source2sdk::client::CDOTA_Buff
        {
        public:
            float overload_aoe; // 0x1a78
            uint8_t _pad1a7c[0x4]; // 0x1a7c
            // m_vecHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHitUnits;
            char m_vecHitUnits[0x18]; // 0x1a80
            source2sdk::client::AttackRecord_t m_nAttackRecordIndex; // 0x1a98
            uint8_t _pad1a9a[0x6];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_StormSpirit_Enemy_Overload because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_StormSpirit_Enemy_Overload) == 0x1aa0);
    };
};
