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
        // Size: 0x1ad0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bristleback_QuillSpray_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fCurRadius; // 0x1a78
            source2sdk::entity2::GameTime_t m_fLastThink; // 0x1a7c
            // m_entitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_entitiesHit;
            char m_entitiesHit[0x18]; // 0x1a80
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x1a98
            std::int32_t projectile_speed; // 0x1ab0
            float radius; // 0x1ab4
            bool m_bTriggeredByBristleback; // 0x1ab8
            bool m_bDelayed; // 0x1ab9
            uint8_t _pad1aba[0x2]; // 0x1aba
            std::int32_t m_nAngleRestriction; // 0x1abc
            Vector m_vFacing; // 0x1ac0
            uint8_t _pad1acc[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_QuillSpray_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Bristleback_QuillSpray_Thinker) == 0x1ad0);
    };
};
