#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        class CDOTA_Modifier_SandKing_SandStorm : public source2sdk::client::CDOTA_Buff
        {
        public:
            float sand_storm_radius; // 0x1a58            
            std::int32_t sand_storm_damage; // 0x1a5c            
            float damage_tick_rate; // 0x1a60            
            float blind_debuff_duration; // 0x1a64            
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x1a68            
            source2sdk::client::ParticleIndex_t m_nSandStormParticleIndex1; // 0x1a6c            
            source2sdk::client::ParticleIndex_t m_nSandStormParticleIndex2; // 0x1a70            
            uint8_t _pad1a74[0x14]; // 0x1a74
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x1a88            
            std::int32_t sand_storm_move_speed_pct; // 0x1a8c            
            VectorWS vecSpawnPos; // 0x1a90            
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SandKing_SandStorm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_SandKing_SandStorm) == 0x1aa0);
    };
};
