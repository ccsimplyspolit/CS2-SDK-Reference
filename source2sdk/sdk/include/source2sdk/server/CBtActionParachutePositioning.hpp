#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBtNode.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x78
        // Has VTable
        #pragma pack(push, 1)
        class CBtActionParachutePositioning : public source2sdk::server::CBtNode
        {
        public:
            source2sdk::server::CountdownTimer m_ActionTimer; // 0x58            
            uint8_t _pad0070[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBtActionParachutePositioning because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBtActionParachutePositioning) == 0x78);
    };
};
