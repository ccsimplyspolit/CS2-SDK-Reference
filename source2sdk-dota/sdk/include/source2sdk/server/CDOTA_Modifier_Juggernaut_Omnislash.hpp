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
        class CDOTA_Modifier_Juggernaut_Omnislash : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a58            
            // m_hLastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastTarget;
            char m_hLastTarget[0x4]; // 0x1a5c            
            std::int32_t m_nJumps; // 0x1a60            
            std::int32_t bonus_damage; // 0x1a64            
            std::int32_t bonus_attack_speed; // 0x1a68            
            float omni_slash_radius; // 0x1a6c            
            float attack_rate_multiplier; // 0x1a70            
            bool m_bFirstHit; // 0x1a74            
            uint8_t _pad1a75[0x3]; // 0x1a75
            std::int32_t m_iTotalDamage; // 0x1a78            
            std::int32_t m_iHeroDamage; // 0x1a7c            
            std::int32_t m_iKilledHeroes; // 0x1a80            
            source2sdk::entity2::GameTime_t m_fNextAttackTime; // 0x1a84            
            bool m_bScepterCast; // 0x1a88            
            bool m_bReflection; // 0x1a89            
            bool m_bEndNext; // 0x1a8a            
            uint8_t _pad1a8b[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Juggernaut_Omnislash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Juggernaut_Omnislash) == 0x1a90);
    };
};
