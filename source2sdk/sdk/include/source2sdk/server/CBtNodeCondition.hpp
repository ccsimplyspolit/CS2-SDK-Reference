#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBtNodeDecorator.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: false
        // Size: 0x60
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CBtNodeCondition : public source2sdk::server::CBtNodeDecorator
        {
        public:
            bool m_bNegated; // 0x58            
            uint8_t _pad0059[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBtNodeCondition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBtNodeCondition) == 0x60);
    };
};
