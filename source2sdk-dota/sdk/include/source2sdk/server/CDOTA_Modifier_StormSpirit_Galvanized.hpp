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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_StormSpirit_Galvanized : public source2sdk::client::CDOTA_Buff
        {
        public:
            float perma_mp_per_kill; // 0x1a58            
            float mp_per_kill; // 0x1a5c            
            float aoe; // 0x1a60            
            std::int32_t charges_per_death; // 0x1a64            
            std::int32_t m_nCounter; // 0x1a68            
            uint8_t _pad1a6c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_StormSpirit_Galvanized because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_StormSpirit_Galvanized) == 0x1a70);
    };
};
