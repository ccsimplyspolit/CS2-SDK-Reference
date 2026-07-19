#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x4b8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointGamestatsCounter : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_strStatisticName; // 0x4a8            
            bool m_bDisabled; // 0x4b0            
            uint8_t _pad04b1[0x7];
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetName; // 0x0
            // float InputIncrement; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointGamestatsCounter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointGamestatsCounter) == 0x4b8);
    };
};
