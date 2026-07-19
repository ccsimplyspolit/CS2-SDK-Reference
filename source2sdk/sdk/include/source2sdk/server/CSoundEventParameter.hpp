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
        // Size: 0x4d0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundEventParameter : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a8[0x18]; // 0x4a8
            CUtlSymbolLarge m_iszParamName; // 0x4c0            
            float m_flFloatValue; // 0x4c8            
            uint8_t _pad04cc[0x4];
            
            // Datamap fields:
            // uint64_t InputSetEventGuid; // 0x0
            // CUtlSymbolLarge InputSetParamName; // 0x0
            // float InputSetFloatValue; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventParameter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventParameter) == 0x4d0);
    };
};
