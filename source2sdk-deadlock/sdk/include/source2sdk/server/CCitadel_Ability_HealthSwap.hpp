#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x1380
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_HealthSwap : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0xf70            
            uint8_t _pad0f74[0x384]; // 0xf74
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPostCastHoldEndTime; // 0x12f8            
            uint8_t _pad12fc[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_HealthSwap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_HealthSwap) == 0x1380);
    };
};
