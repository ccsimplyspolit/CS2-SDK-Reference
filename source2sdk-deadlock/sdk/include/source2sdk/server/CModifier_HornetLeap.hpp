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
        // Size: 0x1d8
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_HornetLeap : public source2sdk::server::CCitadelModifier
        {
        public:
            std::int32_t m_iBonusClip; // 0xd0            
            uint8_t _pad00d4[0x104];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_HornetLeap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_HornetLeap) == 0x1d8);
    };
};
