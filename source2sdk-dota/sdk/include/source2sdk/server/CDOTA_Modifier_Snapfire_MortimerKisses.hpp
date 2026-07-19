#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1ac8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_MortimerKisses : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fIntervalPerRocket; // 0x1a58            
            float m_flFacingTarget; // 0x1a5c            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x1a60            
            // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBeamEnd;
            char m_hBeamEnd[0x4]; // 0x1a64            
            float m_flCurDistance; // 0x1a68            
            VectorWS m_vAimTarget; // 0x1a6c            
            float m_fLastTurnAmount; // 0x1a78            
            std::int32_t m_nProjectilesLaunched; // 0x1a7c            
            bool m_bDestroyOnNextThink; // 0x1a80            
            uint8_t _pad1a81[0x3]; // 0x1a81
            std::int32_t m_nProjectilesToLaunch; // 0x1a84            
            uint8_t _pad1a88[0x14]; // 0x1a88
            bool has_bonus_projectile; // 0x1a9c            
            uint8_t _pad1a9d[0x3]; // 0x1a9d
            std::int32_t projectile_count; // 0x1aa0            
            float projectile_speed; // 0x1aa4            
            float projectile_width; // 0x1aa8            
            float projectile_vision; // 0x1aac            
            float turn_rate; // 0x1ab0            
            float min_range; // 0x1ab4            
            float impact_radius; // 0x1ab8            
            float min_lob_travel_time; // 0x1abc            
            float max_lob_travel_time; // 0x1ac0            
            float delay_after_last_projectile; // 0x1ac4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_MortimerKisses because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Snapfire_MortimerKisses) == 0x1ac8);
    };
};
