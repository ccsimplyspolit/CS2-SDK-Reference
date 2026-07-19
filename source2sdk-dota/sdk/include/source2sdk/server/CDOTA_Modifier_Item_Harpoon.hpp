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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Harpoon : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_chance; // 0x1a58            
            std::int32_t bonus_chance_damage; // 0x1a5c            
            std::int32_t bonus_strength; // 0x1a60            
            std::int32_t bonus_agility; // 0x1a64            
            std::int32_t bonus_intellect; // 0x1a68            
            float bonus_mana_regen; // 0x1a6c            
            std::int32_t bonus_damage; // 0x1a70            
            std::int32_t bonus_speed; // 0x1a74            
            // m_InFlightProcAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightProcAttackRecords;
            char m_InFlightProcAttackRecords[0x18]; // 0x1a78            
            source2sdk::client::AttackRecord_t m_nBonusProcAttackRecord; // 0x1a90            
            uint8_t _pad1a92[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Harpoon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Harpoon) == 0x1a98);
    };
};
