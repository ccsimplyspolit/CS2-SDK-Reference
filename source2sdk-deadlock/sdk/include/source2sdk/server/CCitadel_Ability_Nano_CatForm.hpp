#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1430
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsInCatform"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDamageTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flTransformStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flTransformEndTime"
        // static metadata: MNetworkVarNames "float m_flStoredDamageAmp"
        #pragma pack(push, 1)
        class CCitadel_Ability_Nano_CatForm : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x2c]; // 0xf70
            // metadata: MNetworkEnable
            bool m_bIsInCatform; // 0xf9c            
            uint8_t _pad0f9d[0x3]; // 0xf9d
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0xfa0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTransformStartTime; // 0xfa4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTransformEndTime; // 0xfa8            
            // metadata: MNetworkEnable
            float m_flStoredDamageAmp; // 0xfac            
            uint8_t _pad0fb0[0x480];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Nano_CatForm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Nano_CatForm) == 0x1430);
    };
};
