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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Voidwalker_Phased : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage; // 0x1a58            
            float max_damage_duration; // 0x1a5c            
            std::int32_t attack_range_bonus; // 0x1a60            
            uint8_t _pad1a64[0x4]; // 0x1a64
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a68            
            bool bAttackRange; // 0x1a80            
            uint8_t _pad1a81[0x3]; // 0x1a81
            float m_flStartTime; // 0x1a84            
            float m_flFadeTime; // 0x1a88            
            float m_flDamageScale; // 0x1a8c            
            float duration; // 0x1a90            
            uint8_t _pad1a94[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Voidwalker_Phased because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Voidwalker_Phased) == 0x1a98);
    };
};
