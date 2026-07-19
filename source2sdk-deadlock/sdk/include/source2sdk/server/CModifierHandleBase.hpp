#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x18
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarNames "uint64 m_hStableHandle"
        #pragma pack(push, 1)
        class CModifierHandleBase
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "modifier_handle"
            // metadata: MNotSaved
            std::uint64_t m_hStableHandle; // 0x8            
            uint8_t _pad0010[0x8];
            
            // Datamap fields:
            // void m_hRuntimeListHandle; // 0x10
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CModifierHandleBase, m_hStableHandle) == 0x8);
        
        static_assert(sizeof(source2sdk::server::CModifierHandleBase) == 0x18);
    };
};
