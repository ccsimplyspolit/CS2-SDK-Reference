#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Base_Buildup.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x568
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Necro_RampUp : public source2sdk::client::CCitadel_Modifier_Base_Buildup
        {
        public:
            uint8_t _pad00d0[0x4]; // 0xd0
            float m_flCurrBuildup; // 0xd4            
            uint8_t _pad00d8[0x488]; // 0xd8
            source2sdk::entity2::GameTime_t m_tLastTetherTime; // 0x560            
            uint8_t _pad0564[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Necro_RampUp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Necro_RampUp) == 0x568);
    };
};
