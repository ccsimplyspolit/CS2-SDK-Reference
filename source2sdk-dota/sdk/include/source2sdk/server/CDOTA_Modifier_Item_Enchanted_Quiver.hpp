#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Enchanted_Quiver : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_attack_range; // 0x1a58            
            std::int32_t bonus_damage; // 0x1a5c            
            std::int32_t active_bonus_attack_range; // 0x1a60            
            uint8_t _pad1a64[0x4]; // 0x1a64
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Enchanted_Quiver because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Enchanted_Quiver) == 0x1a80);
    };
};
