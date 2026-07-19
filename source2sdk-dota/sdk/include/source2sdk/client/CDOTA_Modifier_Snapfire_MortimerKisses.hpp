#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_MortimerKisses : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fIntervalPerRocket; // 0x1a58            
            float m_flFacingTarget; // 0x1a5c            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x1a60            
            // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBeamEnd;
            char m_hBeamEnd[0x4]; // 0x1a64            
            float m_flCurDistance; // 0x1a68            
            VectorWS m_vAimTarget; // 0x1a6c            
            float m_fLastTurnAmount; // 0x1a78            
            std::int32_t m_nProjectilesLaunched; // 0x1a7c            
            bool m_bDestroyOnNextThink; // 0x1a80            
            uint8_t _pad1a81[0x3]; // 0x1a81
            std::int32_t m_nProjectilesToLaunch; // 0x1a84            
            bool has_bonus_projectile; // 0x1a88            
            uint8_t _pad1a89[0x3]; // 0x1a89
            std::int32_t projectile_count; // 0x1a8c            
            float projectile_speed; // 0x1a90            
            float projectile_width; // 0x1a94            
            float projectile_vision; // 0x1a98            
            float turn_rate; // 0x1a9c            
            float min_range; // 0x1aa0            
            float impact_radius; // 0x1aa4            
            float min_lob_travel_time; // 0x1aa8            
            float max_lob_travel_time; // 0x1aac            
            float delay_after_last_projectile; // 0x1ab0            
            uint8_t _pad1ab4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_MortimerKisses because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Snapfire_MortimerKisses) == 0x1ab8);
    };
};
