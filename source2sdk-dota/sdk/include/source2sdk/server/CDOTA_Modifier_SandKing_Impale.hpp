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
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_SandKing_Impale : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPower; // 0x1a58            
            float m_flStartZ; // 0x1a5c            
            float m_flCurTime; // 0x1a60            
            bool m_bDamageApplied; // 0x1a64            
            uint8_t _pad1a65[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SandKing_Impale because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_SandKing_Impale) == 0x1a68);
    };
};
