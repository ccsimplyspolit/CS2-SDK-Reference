#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Marci_Bodyguarded : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bodyguard_attack_range_buffer; // 0x1a58            
            float lifesteal_pct; // 0x1a5c            
            std::int32_t bonus_damage; // 0x1a60            
            std::int32_t max_partner_penalty; // 0x1a64            
            std::int32_t creep_lifesteal_reduction_pct; // 0x1a68            
            std::int32_t shared_healing_percent; // 0x1a6c            
            float shared_barrier; // 0x1a70            
            float shared_barrier_replenish_amount; // 0x1a74            
            float counter_cooldown; // 0x1a78            
            source2sdk::entity2::GameTime_t m_flLastCounterTime; // 0x1a7c            
            bool bHasCountered; // 0x1a80            
            uint8_t _pad1a81[0x3]; // 0x1a81
            std::int32_t m_nDamageAbsorbed; // 0x1a84            
            // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPartner;
            char m_hPartner[0x4]; // 0x1a88            
            uint8_t _pad1a8c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Bodyguarded because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Marci_Bodyguarded) == 0x1a90);
    };
};
