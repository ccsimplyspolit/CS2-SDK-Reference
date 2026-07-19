#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0x1260
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsInRecast"
        // static metadata: MNetworkVarNames "GameTime_t m_RecastEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_KillSummon : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x82]; // 0x11d8
            // metadata: MNetworkEnable
            bool m_bIsInRecast; // 0x125a            
            uint8_t _pad125b[0x1]; // 0x125b
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_RecastEndTime; // 0x125c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_KillSummon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Necro_KillSummon) == 0x1260);
    };
};
