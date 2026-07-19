#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rubick_FadeBolt : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a58            
            std::int32_t damage; // 0x1a5c            
            std::int32_t jump_damage_reduction_pct; // 0x1a60            
            std::int32_t attack_damage_reduction; // 0x1a64            
            std::int32_t attack_damage_reduction_creep_reduction_pct; // 0x1a68            
            std::int32_t steals_damage; // 0x1a6c            
            float jump_delay; // 0x1a70            
            std::int32_t m_iCurJumpCount; // 0x1a74            
            VectorWS m_vCurTargetLoc; // 0x1a78            
            uint8_t _pad1a84[0x4]; // 0x1a84
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1a88            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_FadeBolt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Rubick_FadeBolt) == 0x1aa0);
    };
};
