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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Obsidian_Destroyer_ObjurgationMana : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bonus_mana; // 0x1a58            
            float automatic_trigger_cd; // 0x1a5c            
            float automatic_trigger_threshold; // 0x1a60            
            float mana_to_barrier; // 0x1a64            
            float barrier_flat; // 0x1a68            
            float barrier_duration; // 0x1a6c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Obsidian_Destroyer_ObjurgationMana because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Obsidian_Destroyer_ObjurgationMana) == 0x1a70);
    };
};
