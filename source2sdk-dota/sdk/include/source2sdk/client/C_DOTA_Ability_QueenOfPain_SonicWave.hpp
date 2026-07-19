#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x6d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_QueenOfPain_SonicWave : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x6a8            
            float m_fTotalTime; // 0x6ac            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6b0            
            float starting_aoe; // 0x6b4            
            float final_aoe; // 0x6b8            
            uint8_t _pad06bc[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_QueenOfPain_SonicWave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_QueenOfPain_SonicWave) == 0x6d0);
    };
};
