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
        // Size: 0x180
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorCommandPatrol
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            VectorWS m_vOrderPosition; // 0x150            
            uint8_t _pad015c[0x4]; // 0x15c
            // m_vPatrolPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<VectorWS> m_vPatrolPoints;
            char m_vPatrolPoints[0x18]; // 0x160            
            std::int32_t m_nCurrentTargetIndex; // 0x178            
            std::int32_t m_nDirection; // 0x17c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandPatrol, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandPatrol, m_vOrderPosition) == 0x150);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandPatrol, m_vPatrolPoints) == 0x160);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandPatrol, m_nCurrentTargetIndex) == 0x178);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandPatrol, m_nDirection) == 0x17c);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorCommandPatrol) == 0x180);
    };
};
