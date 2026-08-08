#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1b20
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VoidSpirit_Dissimilate_Phase : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vFirstPortalPos; // 0x1a78
            uint8_t _pad1a84[0x4]; // 0x1a84
            // m_vecDestinations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<VectorWS> m_vecDestinations;
            char m_vecDestinations[0x18]; // 0x1a88
            // m_vecDestinationParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecDestinationParticles;
            char m_vecDestinationParticles[0x18]; // 0x1aa0
            // m_vecDestinationParticles_EnemyTeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecDestinationParticles_EnemyTeam;
            char m_vecDestinationParticles_EnemyTeam[0x18]; // 0x1ab8
            std::int32_t m_nCurrentDestinationIndex; // 0x1ad0
            std::int32_t m_nClosestIndexPosToClick; // 0x1ad4
            std::int32_t m_flPortalHeightOffset; // 0x1ad8
            uint8_t _pad1adc[0x4]; // 0x1adc
            char* m_szAlliesPortalFX; // 0x1ae0
            char* m_szEnemiesPortalFX; // 0x1ae8
            float m_flPortalRadius; // 0x1af0
            float m_flPortalPadding; // 0x1af4
            float m_flFinalImpactDamageRadius; // 0x1af8
            float m_flFinalImpactFXRadius; // 0x1afc
            float destination_fx_radius; // 0x1b00
            float damage_radius; // 0x1b04
            std::int32_t portals_per_ring; // 0x1b08
            std::int32_t angle_per_ring_portal; // 0x1b0c
            float first_ring_distance_offset; // 0x1b10
            float debuff_duration; // 0x1b14
            std::int32_t aether_remnant_count; // 0x1b18
            float artifice_extra_offset; // 0x1b1c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_Dissimilate_Phase because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_VoidSpirit_Dissimilate_Phase) == 0x1b20);
    };
};
