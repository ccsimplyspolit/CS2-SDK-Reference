#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Stunned.hpp"

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
        class CDOTA_Modifier_Tiny_Avalanche_Stun : public source2sdk::server::CDOTA_Modifier_Stunned
        {
        public:
            float m_flAvalancheDuration; // 0x1a58            
            float m_flAvalancheStartTime; // 0x1a5c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tiny_Avalanche_Stun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tiny_Avalanche_Stun) == 0x1a60);
    };
};
