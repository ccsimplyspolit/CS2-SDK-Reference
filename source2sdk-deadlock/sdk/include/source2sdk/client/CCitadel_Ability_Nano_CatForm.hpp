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
        // Size: 0x1670
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsInCatform"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDamageTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flTransformStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flTransformEndTime"
        // static metadata: MNetworkVarNames "float m_flStoredDamageAmp"
        #pragma pack(push, 1)
        class CCitadel_Ability_Nano_CatForm : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            bool m_bIsInCatform; // 0x11d8            
            uint8_t _pad11d9[0x3]; // 0x11d9
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x11dc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTransformStartTime; // 0x11e0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTransformEndTime; // 0x11e4            
            // metadata: MNetworkEnable
            float m_flStoredDamageAmp; // 0x11e8            
            uint8_t _pad11ec[0x484];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Nano_CatForm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Nano_CatForm) == 0x1670);
    };
};
