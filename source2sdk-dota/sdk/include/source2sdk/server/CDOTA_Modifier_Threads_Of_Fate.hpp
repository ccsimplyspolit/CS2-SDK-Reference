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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Threads_Of_Fate : public source2sdk::client::CDOTA_Buff
        {
        public:
            float thread_setup_distance; // 0x1a58            
            float established_thread_duration; // 0x1a5c            
            float thread_setup_time; // 0x1a60            
            std::int32_t damage_per_thread_creep; // 0x1a64            
            std::int32_t damage_per_thread_hero; // 0x1a68            
            float death_linger_duration; // 0x1a6c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Threads_Of_Fate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Threads_Of_Fate) == 0x1a70);
    };
};
