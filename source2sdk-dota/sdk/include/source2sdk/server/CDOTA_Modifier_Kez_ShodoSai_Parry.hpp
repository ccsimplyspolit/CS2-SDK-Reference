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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_ShodoSai_Parry : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t speed_penalty; // 0x1a58            
            std::int32_t forward_angle; // 0x1a5c            
            float vuln_duration; // 0x1a60            
            float parry_window_duration; // 0x1a64            
            float parry_stun_duration; // 0x1a68            
            uint8_t _pad1a6c[0x4]; // 0x1a6c
            // m_vecParriedEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecParriedEnemies;
            char m_vecParriedEnemies[0x18]; // 0x1a70            
            Vector m_vFacing; // 0x1a88            
            float m_flFacingTarget; // 0x1a94            
            float m_flLastOverheadTime; // 0x1a98            
            float m_flOldPitch; // 0x1a9c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1aa0            
            // m_hVulnAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hVulnAttackTarget;
            char m_hVulnAttackTarget[0x4]; // 0x1aa4            
            bool m_bAttackingVuln; // 0x1aa8            
            uint8_t _pad1aa9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_ShodoSai_Parry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kez_ShodoSai_Parry) == 0x1ab0);
    };
};
