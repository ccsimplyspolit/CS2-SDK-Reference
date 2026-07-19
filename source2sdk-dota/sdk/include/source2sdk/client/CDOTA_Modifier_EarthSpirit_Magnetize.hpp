#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_EarthSpirit_Magnetize : public source2sdk::client::CDOTA_Buff
        {
        public:
            float rock_search_radius; // 0x1a58            
            float damage_per_second; // 0x1a5c            
            float damage_interval; // 0x1a60            
            float rock_explosion_delay; // 0x1a64            
            float damage_duration; // 0x1a68            
            float cast_radius; // 0x1a6c            
            float rock_explosion_radius; // 0x1a70            
            bool magnetized_rocks_buff_self; // 0x1a74            
            uint8_t _pad1a75[0x3]; // 0x1a75
            std::int32_t magnetized_rocks_buff_self_duration; // 0x1a78            
            std::int32_t magnetize_self; // 0x1a7c            
            // m_hExplodedRocks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hExplodedRocks;
            char m_hExplodedRocks[0x18]; // 0x1a80            
            float duration; // 0x1a98            
            bool m_bShowOverhead; // 0x1a9c            
            uint8_t _pad1a9d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_Magnetize because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_EarthSpirit_Magnetize) == 0x1aa0);
    };
};
