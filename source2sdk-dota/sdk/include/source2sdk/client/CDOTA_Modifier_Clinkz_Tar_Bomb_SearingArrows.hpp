#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Clinkz_Tar_Bomb_SearingArrows : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage_bonus; // 0x1a58            
            uint8_t _pad1a5c[0x4]; // 0x1a5c
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a60            
            bool m_bBonusAttack; // 0x1a78            
            uint8_t _pad1a79[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Clinkz_Tar_Bomb_SearingArrows because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Clinkz_Tar_Bomb_SearingArrows) == 0x1a80);
    };
};
