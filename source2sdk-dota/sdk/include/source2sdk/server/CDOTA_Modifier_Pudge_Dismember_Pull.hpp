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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pudge_Dismember_Pull : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vDestination; // 0x1a58            
            std::int32_t pull_units_per_second; // 0x1a64            
            float pull_distance_limit; // 0x1a68            
            uint8_t _pad1a6c[0x14]; // 0x1a6c
            float animation_rate; // 0x1a80            
            uint8_t _pad1a84[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Dismember_Pull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pudge_Dismember_Pull) == 0x1a88);
    };
};
