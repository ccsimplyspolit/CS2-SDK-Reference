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
        class CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_speed; // 0x1a78
            float agility_duration; // 0x1a7c
            bool m_bGiveAgility; // 0x1a80
            uint8_t _pad1a81[0x3]; // 0x1a81
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a84
            std::int32_t bonus_agility; // 0x1a88
            float illusion_spawn_radius; // 0x1a8c
            float illusion_spawn_travel_distance; // 0x1a90
            float evasion; // 0x1a94
            float m_flDistanceAccumulator; // 0x1a98
            VectorWS m_vPreviousLocation; // 0x1a9c
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1aa8
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost) == 0x1ac0);
    };
};
