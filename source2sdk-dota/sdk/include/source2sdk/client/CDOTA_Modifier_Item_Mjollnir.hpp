#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Mjollnir : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_damage; // 0x1a58            
            std::int32_t bonus_attack_speed; // 0x1a5c            
            std::int32_t chain_chance; // 0x1a60            
            std::int32_t chain_strikes; // 0x1a64            
            std::int32_t chain_damage; // 0x1a68            
            std::int32_t chain_radius; // 0x1a6c            
            std::int32_t chain_damage_per_charge; // 0x1a70            
            std::int32_t max_charges; // 0x1a74            
            float chain_cooldown; // 0x1a78            
            uint8_t _pad1a7c[0x4]; // 0x1a7c
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a80            
            source2sdk::client::CountdownTimer m_ChainTimer; // 0x1a98            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mjollnir because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Mjollnir) == 0x1ab0);
    };
};
