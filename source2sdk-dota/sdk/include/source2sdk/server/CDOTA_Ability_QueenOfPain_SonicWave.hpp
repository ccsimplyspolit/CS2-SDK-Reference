#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_QueenOfPain_SonicWave : public source2sdk::server::CDOTABaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x580            
            float m_fTotalTime; // 0x584            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x588            
            float starting_aoe; // 0x58c            
            float final_aoe; // 0x590            
            uint8_t _pad0594[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_QueenOfPain_SonicWave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_QueenOfPain_SonicWave) == 0x5a8);
    };
};
