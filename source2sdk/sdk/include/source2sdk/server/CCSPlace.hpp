#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyModelEntity.hpp"

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
        // Size: 0x790
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CCSPlace : public source2sdk::server::CServerOnlyModelEntity
        {
        public:
            uint8_t _pad0770[0x18]; // 0x770
            CUtlSymbolLarge m_name; // 0x788            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlace because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlace) == 0x790);
    };
};
