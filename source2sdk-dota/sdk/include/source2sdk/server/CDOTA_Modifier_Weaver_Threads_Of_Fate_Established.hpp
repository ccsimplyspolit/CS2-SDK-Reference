#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CDOTA_Modifier_Weaver_Threads_Of_Fate_Established : public source2sdk::client::CDOTA_Buff
        {
        public:
            float established_thread_break_distance; // 0x1a58            
            float thread_setup_distance; // 0x1a5c            
            std::int32_t damage_per_thread_creep; // 0x1a60            
            std::int32_t damage_per_thread_hero; // 0x1a64            
            float death_linger_duration; // 0x1a68            
            float thread_setup_time; // 0x1a6c            
            source2sdk::client::ParticleIndex_t m_nTetherParticle; // 0x1a70            
            bool m_bEstablished; // 0x1a74            
            uint8_t _pad1a75[0x3]; // 0x1a75
            source2sdk::entity2::GameTime_t m_fEstablishTime; // 0x1a78            
            uint8_t _pad1a7c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Weaver_Threads_Of_Fate_Established because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Weaver_Threads_Of_Fate_Established) == 0x1a80);
    };
};
