#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bonus_armor; // 0x1a58            
            float magic_resist; // 0x1a5c            
            float dodge_chance; // 0x1a60            
            float bonus_move_speed; // 0x1a64            
            float crit_chance; // 0x1a68            
            float crit_multiplier; // 0x1a6c            
            float attack_speed; // 0x1a70            
            float brewed_up_duration; // 0x1a74            
            float brewed_up_duration_extend; // 0x1a78            
            float brewed_up_bonus; // 0x1a7c            
            bool m_bBrewedUp; // 0x1a80            
            uint8_t _pad1a81[0x7]; // 0x1a81
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a88            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive) == 0x1aa0);
    };
};
