#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_Batrider_StickyNapalm : public source2sdk::client::CDOTA_Buff
        {
        public:
            float movement_speed_pct; // 0x1a58            
            std::int32_t turn_rate_pct; // 0x1a5c            
            float damage; // 0x1a60            
            float application_damage; // 0x1a64            
            float building_damage_pct; // 0x1a68            
            float creep_damage_pct; // 0x1a6c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a70            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x1a74            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_StickyNapalm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Batrider_StickyNapalm) == 0x1a78);
    };
};
