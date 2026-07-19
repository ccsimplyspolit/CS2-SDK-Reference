#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierAura.hpp"

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
        // Size: 0x418
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Drifter_Darkness_Target : public source2sdk::server::CCitadelModifierAura
        {
        public:
            uint8_t _pad0108[0x310];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CModifier_Drifter_Darkness_Target has no schema binary (size is a guess)
    };
};
