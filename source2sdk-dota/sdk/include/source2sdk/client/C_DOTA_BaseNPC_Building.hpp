#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/C_DOTA_BaseNPC.hpp"
#include "source2sdk/client/FowCustomTeams_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1a20
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Building : public source2sdk::client::C_DOTA_BaseNPC
        {
        public:
            std::int32_t m_iDamageLevel; // 0x19b0            
            source2sdk::client::ParticleIndex_t m_nAmbientFXIndex; // 0x19b4            
            source2sdk::client::ParticleIndex_t m_nTPFXIndex; // 0x19b8            
            source2sdk::client::ParticleIndex_t m_nStatusFXIndex; // 0x19bc            
            // m_nFXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndex;
            char m_nFXIndex[0x8]; // 0x19c0            
            // m_nFXIndexDestruction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndexDestruction;
            char m_nFXIndexDestruction[0x8]; // 0x19c8            
            QAngle m_angInitialAngles; // 0x19d0            
            source2sdk::animationsystem::HSequence m_hHeroStatueSequence; // 0x19dc            
            source2sdk::animationsystem::HSequence m_hConstantLayerSequence; // 0x19e0            
            float m_fHeroStatueCycle; // 0x19e4            
            std::int32_t m_iHeroStatueStatusEffectIndex; // 0x19e8            
            bool m_bHeroStatue; // 0x19ec            
            bool m_bBattleCup; // 0x19ed            
            char m_HeroStatueInscription[32]; // 0x19ee            
            uint8_t _pad1a0e[0x2]; // 0x1a0e
            source2sdk::client::PlayerID_t m_iHeroStatueOwnerPlayerID; // 0x1a10            
            Color m_ParticleTintColor; // 0x1a14            
            source2sdk::client::FowCustomTeams_t m_nFoWTeam; // 0x1a18            
            uint8_t _pad1a1c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Building because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Building) == 0x1a20);
    };
};
