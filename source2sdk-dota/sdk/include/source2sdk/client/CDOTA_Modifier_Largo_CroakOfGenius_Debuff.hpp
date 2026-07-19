#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Largo_CroakOfGenius_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_portion_pct; // 0x1a58            
            float damage_per_second; // 0x1a5c            
            float damage_hp_pct; // 0x1a60            
            float trigger_damage; // 0x1a64            
            float damage_duration; // 0x1a68            
            float m_flDamageInterval; // 0x1a6c            
            float damage_aoe; // 0x1a70            
            uint8_t _pad1a74[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_CroakOfGenius_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Largo_CroakOfGenius_Debuff) == 0x1a78);
    };
};
