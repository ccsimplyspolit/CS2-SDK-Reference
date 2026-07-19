#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1d98
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Unit_Hero_Wisp : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            source2sdk::client::ParticleIndex_t m_nAmbientFXIndex; // 0x1d80            
            source2sdk::client::ParticleIndex_t m_nStunnedFXIndex; // 0x1d84            
            source2sdk::client::ParticleIndex_t m_nTalkFXIndex; // 0x1d88            
            source2sdk::client::ParticleIndex_t m_nIllusionFXIndex; // 0x1d8c            
            bool m_bParticleHexed; // 0x1d90            
            bool m_bParticleStunned; // 0x1d91            
            bool m_bDetermineAmbientEffect; // 0x1d92            
            uint8_t _pad1d93[0x1]; // 0x1d93
            float m_flPrevHealth; // 0x1d94            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Wisp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Hero_Wisp) == 0x1d98);
    };
};
