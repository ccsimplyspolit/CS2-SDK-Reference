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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Furion_WrathOfNature_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage; // 0x1a58            
            std::int32_t max_targets; // 0x1a5c            
            std::int32_t damage_percent_add; // 0x1a60            
            float jump_delay; // 0x1a64            
            std::int32_t m_iFixedDamage; // 0x1a68            
            source2sdk::entity2::GameTime_t m_flLastTickTime; // 0x1a6c            
            float m_flTimeAccumulator; // 0x1a70            
            uint8_t _pad1a74[0x4]; // 0x1a74
            // m_hHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitTargets;
            char m_hHitTargets[0x18]; // 0x1a78            
            std::int32_t m_nBaseDamage; // 0x1a90            
            std::int32_t m_nMaxTargets; // 0x1a94            
            float m_flJumpDelay; // 0x1a98            
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Furion_WrathOfNature_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Furion_WrathOfNature_Thinker) == 0x1aa0);
    };
};
