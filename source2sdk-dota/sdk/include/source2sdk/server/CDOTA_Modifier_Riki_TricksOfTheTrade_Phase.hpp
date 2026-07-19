#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Riki_TricksOfTheTrade_Phase : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFxIndex; // 0x1a58            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a5c            
            source2sdk::server::CountdownTimer m_Timer; // 0x1a60            
            // m_hPreviousTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPreviousTarget;
            char m_hPreviousTarget[0x4]; // 0x1a78            
            std::int32_t m_nSucceessiveHits; // 0x1a7c            
            bool m_bGrantedGem; // 0x1a80            
            uint8_t _pad1a81[0x3]; // 0x1a81
            float attack_rate; // 0x1a84            
            float attack_damage; // 0x1a88            
            std::int32_t agility_pct; // 0x1a8c            
            float cooldown_reduction_per_creep_kill; // 0x1a90            
            float speed_per_attack; // 0x1a94            
            float radius; // 0x1a98            
            std::int32_t interval_targets; // 0x1a9c            
            bool pocket_riki_enabled; // 0x1aa0            
            uint8_t _pad1aa1[0x3]; // 0x1aa1
            float base_attack_damage_pct; // 0x1aa4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Riki_TricksOfTheTrade_Phase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Riki_TricksOfTheTrade_Phase) == 0x1aa8);
    };
};
