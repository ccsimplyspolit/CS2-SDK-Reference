#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Broodmother_StickySnare : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vOrigin; // 0x1a58            
            VectorWS m_vWallDirection; // 0x1a64            
            Vector m_vWallRight; // 0x1a70            
            float width; // 0x1a7c            
            float root_duration; // 0x1a80            
            float formation_delay; // 0x1a84            
            bool m_bTouching; // 0x1a88            
            uint8_t _pad1a89[0x3]; // 0x1a89
            // m_hRight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRight;
            char m_hRight[0x4]; // 0x1a8c            
            bool m_bParticle; // 0x1a90            
            uint8_t _pad1a91[0x3]; // 0x1a91
            source2sdk::entity2::GameTime_t m_flStartingTime; // 0x1a94            
            std::int32_t m_nFoWID; // 0x1a98            
            std::int32_t m_nTeamID; // 0x1a9c            
            // m_vecAffectedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecAffectedHeroes;
            char m_vecAffectedHeroes[0x18]; // 0x1aa0            
            source2sdk::client::ParticleIndex_t m_nWarmupFXIndex; // 0x1ab8            
            uint8_t _pad1abc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Broodmother_StickySnare because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Broodmother_StickySnare) == 0x1ac0);
    };
};
