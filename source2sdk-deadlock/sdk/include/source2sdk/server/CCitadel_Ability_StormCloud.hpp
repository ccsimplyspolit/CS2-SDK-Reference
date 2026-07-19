#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1300
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flFloat"
        // static metadata: MNetworkVarNames "int m_nLightningStrikesRemaining"
        #pragma pack(push, 1)
        class CCitadel_Ability_StormCloud : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nTargetingParticleIndex; // 0xf70            
            uint8_t _pad0f74[0x384]; // 0xf74
            // metadata: MNetworkEnable
            float m_flFloat; // 0x12f8            
            // metadata: MNetworkEnable
            std::int32_t m_nLightningStrikesRemaining; // 0x12fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_StormCloud because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_StormCloud) == 0x1300);
    };
};
