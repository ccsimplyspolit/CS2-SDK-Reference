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
        // Size: 0x1228
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bTetheringActive"
        #pragma pack(push, 1)
        class CCitadel_Ability_PunkGoat_Tether : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x18]; // 0xf70
            source2sdk::entity2::GameTime_t m_tTetherEndTime; // 0xf88            
            uint8_t _pad0f8c[0x14]; // 0xf8c
            // metadata: MNetworkEnable
            bool m_bTetheringActive; // 0xfa0            
            uint8_t _pad0fa1[0x287];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PunkGoat_Tether because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PunkGoat_Tether) == 0x1228);
    };
};
