#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0x15e8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_HealthSwap : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x11d8            
            uint8_t _pad11dc[0x384]; // 0x11dc
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPostCastHoldEndTime; // 0x1560            
            uint8_t _pad1564[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_HealthSwap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_HealthSwap) == 0x15e8);
    };
};
