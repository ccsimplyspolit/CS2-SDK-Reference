#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1b40
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Beastmaster_WildAxes : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vLeftControl; // 0x1a78
            VectorWS m_vRightControl; // 0x1a84
            VectorWS m_vTargetLoc; // 0x1a90
            VectorWS m_vSourceLoc; // 0x1a9c
            float m_flAxeDuration; // 0x1aa8
            source2sdk::entity2::GameTime_t m_flAxeDieTime; // 0x1aac
            bool m_bReturning; // 0x1ab0
            bool m_bCatchingAxes; // 0x1ab1
            uint8_t _pad1ab2[0x6]; // 0x1ab2
            // m_hAxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAxes;
            char m_hAxes[0x18]; // 0x1ab8
            source2sdk::client::ParticleIndex_t m_nAxeFXIndex[2]; // 0x1ad0
            // m_hHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitList[2];
            char m_hHitList[0x30]; // 0x1ad8
            float radius; // 0x1b08
            float spread; // 0x1b0c
            float axe_damage; // 0x1b10
            float duration; // 0x1b14
            float min_throw_duration; // 0x1b18
            float max_throw_duration; // 0x1b1c
            // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecUniqueHitList;
            char m_vecUniqueHitList[0x18]; // 0x1b20
            bool m_bHitInvisibleHero; // 0x1b38
            uint8_t _pad1b39[0x7];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_WildAxes because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Beastmaster_WildAxes) == 0x1b40);
    };
};
