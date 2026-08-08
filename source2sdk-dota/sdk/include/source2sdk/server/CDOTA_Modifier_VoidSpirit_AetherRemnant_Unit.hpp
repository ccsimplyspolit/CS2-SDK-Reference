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
        // Size: 0x1b38
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vFacingDir; // 0x1a78
            uint8_t _pad1a84[0x4]; // 0x1a84
            // m_hWatchPathThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hWatchPathThinkers;
            char m_hWatchPathThinkers[0x18]; // 0x1a88
            // m_hShardWatchPathThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hShardWatchPathThinkers;
            char m_hShardWatchPathThinkers[0x18]; // 0x1aa0
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x1ab8
            source2sdk::client::ParticleIndex_t m_nShardBeamFXIndex; // 0x1abc
            source2sdk::client::ParticleIndex_t m_nHeroFXIndex; // 0x1ac0
            uint8_t _pad1ac4[0x4]; // 0x1ac4
            // m_nViewerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nViewerIDs;
            char m_nViewerIDs[0x18]; // 0x1ac8
            std::int32_t m_nViewerTeam; // 0x1ae0
            float remnant_watch_distance; // 0x1ae4
            float remnant_watch_radius; // 0x1ae8
            float duration; // 0x1aec
            float watch_path_vision_radius; // 0x1af0
            float impact_damage; // 0x1af4
            float pull_duration; // 0x1af8
            float activation_delay; // 0x1afc
            bool m_bPiercesCreeps; // 0x1b00
            uint8_t _pad1b01[0x7]; // 0x1b01
            // m_hAlreadyHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAlreadyHit;
            char m_hAlreadyHit[0x18]; // 0x1b08
            bool bIsArtifice; // 0x1b20
            uint8_t _pad1b21[0x3]; // 0x1b21
            float artifice_duration_override; // 0x1b24
            float artifice_pct_effectiveness; // 0x1b28
            bool m_bActivated; // 0x1b2c
            uint8_t _pad1b2d[0x3]; // 0x1b2d
            float m_flRotation; // 0x1b30
            // m_hPartnerRemnant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPartnerRemnant;
            char m_hPartnerRemnant[0x4]; // 0x1b34
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit) == 0x1b38);
    };
};
