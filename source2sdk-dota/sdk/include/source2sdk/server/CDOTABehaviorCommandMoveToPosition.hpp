#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"

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
        // Standard-layout class: true
        // Size: 0x160
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorCommandMoveToPosition
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            VectorWS m_vPosition; // 0x150            
            bool m_bDirectional; // 0x15c            
            bool m_bRelative; // 0x15d            
            uint8_t _pad015e[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToPosition, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToPosition, m_vPosition) == 0x150);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToPosition, m_bDirectional) == 0x15c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToPosition, m_bRelative) == 0x15d);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorCommandMoveToPosition) == 0x160);
    };
};
