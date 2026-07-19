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
        // Size: 0x1b00
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VoidSpirit_Dissimilate_Phase : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vFirstPortalPos; // 0x1a58            
            uint8_t _pad1a64[0x4]; // 0x1a64
            // m_vecDestinations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<VectorWS> m_vecDestinations;
            char m_vecDestinations[0x18]; // 0x1a68            
            // m_vecDestinationParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecDestinationParticles;
            char m_vecDestinationParticles[0x18]; // 0x1a80            
            // m_vecDestinationParticles_EnemyTeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecDestinationParticles_EnemyTeam;
            char m_vecDestinationParticles_EnemyTeam[0x18]; // 0x1a98            
            std::int32_t m_nCurrentDestinationIndex; // 0x1ab0            
            std::int32_t m_nClosestIndexPosToClick; // 0x1ab4            
            std::int32_t m_flPortalHeightOffset; // 0x1ab8            
            uint8_t _pad1abc[0x4]; // 0x1abc
            char* m_szAlliesPortalFX; // 0x1ac0            
            char* m_szEnemiesPortalFX; // 0x1ac8            
            float m_flPortalRadius; // 0x1ad0            
            float m_flPortalPadding; // 0x1ad4            
            float m_flFinalImpactDamageRadius; // 0x1ad8            
            float m_flFinalImpactFXRadius; // 0x1adc            
            float destination_fx_radius; // 0x1ae0            
            float damage_radius; // 0x1ae4            
            std::int32_t portals_per_ring; // 0x1ae8            
            std::int32_t angle_per_ring_portal; // 0x1aec            
            float first_ring_distance_offset; // 0x1af0            
            float debuff_duration; // 0x1af4            
            std::int32_t aether_remnant_count; // 0x1af8            
            float artifice_extra_offset; // 0x1afc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_Dissimilate_Phase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_VoidSpirit_Dissimilate_Phase) == 0x1b00);
    };
};
