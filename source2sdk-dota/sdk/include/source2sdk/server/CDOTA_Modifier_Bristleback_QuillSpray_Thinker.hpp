#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bristleback_QuillSpray_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fCurRadius; // 0x1a58            
            source2sdk::entity2::GameTime_t m_fLastThink; // 0x1a5c            
            // m_entitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_entitiesHit;
            char m_entitiesHit[0x18]; // 0x1a60            
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x1a78            
            std::int32_t projectile_speed; // 0x1a90            
            float radius; // 0x1a94            
            bool m_bTriggeredByBristleback; // 0x1a98            
            bool m_bDelayed; // 0x1a99            
            uint8_t _pad1a9a[0x2]; // 0x1a9a
            std::int32_t m_nAngleRestriction; // 0x1a9c            
            Vector m_vFacing; // 0x1aa0            
            uint8_t _pad1aac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_QuillSpray_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Bristleback_QuillSpray_Thinker) == 0x1ab0);
    };
};
