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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rattletrap_BatteryAssault : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a58[0x18];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CDOTA_Modifier_Rattletrap_BatteryAssault has no schema binary (size is a guess)
    };
};
