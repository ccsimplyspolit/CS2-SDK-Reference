#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nevermore_Necromastery : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t souls_per_kill; // 0x1a58            
            std::int32_t souls_per_hero_kill; // 0x1a5c            
            float necromastery_damage_per_soul; // 0x1a60            
            std::int32_t necromastery_max_souls; // 0x1a64            
            std::int32_t max_soul_increase_on_hero_kill; // 0x1a68            
            std::int32_t shard_crit_pct; // 0x1a6c            
            std::int32_t shard_souls_per_kill; // 0x1a70            
            float shard_fear_duration; // 0x1a74            
            std::int32_t m_nPermanentMaxSouls; // 0x1a78            
            source2sdk::client::ParticleIndex_t m_iParticleSoulsIndex; // 0x1a7c            
            source2sdk::client::ParticleIndex_t m_FXIndex; // 0x1a80            
            uint8_t _pad1a84[0x4]; // 0x1a84
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a88            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nevermore_Necromastery because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nevermore_Necromastery) == 0x1aa0);
    };
};
