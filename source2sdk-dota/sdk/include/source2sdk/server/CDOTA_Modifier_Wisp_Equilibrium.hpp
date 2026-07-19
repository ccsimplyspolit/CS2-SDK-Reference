#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a60
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Wisp_Equilibrium : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_amplification; // 0x1a58            
            float heal_amplification; // 0x1a5c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Wisp_Equilibrium because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Wisp_Equilibrium) == 0x1a60);
    };
};
