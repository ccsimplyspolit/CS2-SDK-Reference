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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_AncestralSpirit : public source2sdk::client::CDOTA_Buff
        {
        public:
            float pass_damage; // 0x1a78
            float radius; // 0x1a7c
            std::int32_t controllable; // 0x1a80
            std::int32_t m_nCreepsHit; // 0x1a84
            std::int32_t m_nHeroesHit; // 0x1a88
            float m_flSpeed; // 0x1a8c
            // m_hHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitUnits;
            char m_hHitUnits[0x18]; // 0x1a90
            VectorWS m_vCasterStartPosition; // 0x1aa8
            VectorWS m_vSpiritStartPosition; // 0x1ab4
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_AncestralSpirit because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Elder_Titan_AncestralSpirit) == 0x1ac0);
    };
};
