#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Obsidian_Destroyer_Equilibrium : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t proc_chance; // 0x1a58            
            std::int32_t barrier_bonus; // 0x1a5c            
            float mana_restore; // 0x1a60            
            float mana_restore_attack; // 0x1a64            
            float mana_increase_duration; // 0x1a68            
            float mana_as_ms; // 0x1a6c            
            float min_mana; // 0x1a70            
            uint8_t _pad1a74[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Obsidian_Destroyer_Equilibrium because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Obsidian_Destroyer_Equilibrium) == 0x1a78);
    };
};
