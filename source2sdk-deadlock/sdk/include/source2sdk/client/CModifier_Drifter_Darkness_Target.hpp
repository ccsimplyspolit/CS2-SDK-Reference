#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierAura.hpp"

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
        // Size: 0x420
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Drifter_Darkness_Target : public source2sdk::client::CCitadelModifierAura
        {
        public:
            uint8_t _pad0110[0x310];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CModifier_Drifter_Darkness_Target) == 0x420);
    };
};
