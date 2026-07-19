#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x610
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CCSPointScriptEntity : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a8[0x168];
            // Datamap fields:
            // CUtlSymbolLarge cs_script; // 0x7fffffff
            // CUtlSymbolLarge script; // 0x7fffffff
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCSPointScriptEntity) == 0x610);
    };
};
