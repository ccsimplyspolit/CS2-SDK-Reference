#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_TemplarAssassin_Meld : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_damage; // 0x1a58            
            bool launched_attack; // 0x1a5c            
            uint8_t _pad1a5d[0x3]; // 0x1a5d
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a60            
            source2sdk::client::AttackRecord_t m_nAttackRecord; // 0x1a64            
            uint8_t _pad1a66[0x2]; // 0x1a66
            std::int32_t attack_range_bonus; // 0x1a68            
            std::int32_t attack_range_increase_max; // 0x1a6c            
            float attack_range_increase_time; // 0x1a70            
            float m_fAttackRangeIncreaseSpeed; // 0x1a74            
            source2sdk::client::ParticleIndex_t m_nFXIndexAoE; // 0x1a78            
            float m_fElapsedTime; // 0x1a7c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_TemplarAssassin_Meld because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_TemplarAssassin_Meld) == 0x1a80);
    };
};
