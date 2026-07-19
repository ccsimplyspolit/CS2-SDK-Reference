#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x480
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Fencer_Ultimate_Target : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bDamageDone; // 0xd0            
            uint8_t _pad00d1[0x3]; // 0xd1
            float m_flDamageTime; // 0xd4            
            uint8_t _pad00d8[0x380]; // 0xd8
            Vector m_vDashDirection; // 0x458            
            uint8_t _pad0464[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Fencer_Ultimate_Target because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Fencer_Ultimate_Target) == 0x480);
    };
};
