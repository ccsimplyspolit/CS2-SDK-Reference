#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

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
        class CDOTA_Modifier_Item_Caster_Rapier : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t cast_range_limit; // 0x1a58            
            std::int32_t bonus_spell_amp; // 0x1a5c            
            std::int32_t backstab_duration; // 0x1a60            
            uint8_t _pad1a64[0x4]; // 0x1a64
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Caster_Rapier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Caster_Rapier) == 0x1a80);
    };
};
