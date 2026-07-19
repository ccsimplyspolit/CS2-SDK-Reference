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
        class CDOTA_Modifier_Crystal_Maiden_GlacialGuard_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float mana_multiplier; // 0x1a58            
            float barrier_duration; // 0x1a5c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Crystal_Maiden_GlacialGuard_Passive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Crystal_Maiden_GlacialGuard_Passive) == 0x1a60);
    };
};
