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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Zuus_ThundergodsWrathThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage; // 0x1a58            
            float damage_pct; // 0x1a5c            
            float sight_duration; // 0x1a60            
            float growing_delay; // 0x1a64            
            float grow_kill_amp; // 0x1a68            
            bool m_bZeusHasArcana; // 0x1a6c            
            uint8_t _pad1a6d[0x3]; // 0x1a6d
            // m_hTargetEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTargetEntities;
            char m_hTargetEntities[0x18]; // 0x1a70            
            std::int32_t m_nFarKills; // 0x1a88            
            std::int32_t m_nKills; // 0x1a8c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Zuus_ThundergodsWrathThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Zuus_ThundergodsWrathThinker) == 0x1a90);
    };
};
