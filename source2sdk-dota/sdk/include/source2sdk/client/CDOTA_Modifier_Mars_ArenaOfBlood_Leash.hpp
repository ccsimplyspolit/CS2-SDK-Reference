#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mars_ArenaOfBlood_Leash : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a58            
            float width; // 0x1a5c            
            std::int32_t obscure_vision; // 0x1a60            
            bool block_targeting; // 0x1a64            
            uint8_t _pad1a65[0x3]; // 0x1a65
            float reduced_vision_percent; // 0x1a68            
            VectorWS m_vOriginLoc; // 0x1a6c            
            bool pierces_debuff_immunity; // 0x1a78            
            uint8_t _pad1a79[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_ArenaOfBlood_Leash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Mars_ArenaOfBlood_Leash) == 0x1a80);
    };
};
