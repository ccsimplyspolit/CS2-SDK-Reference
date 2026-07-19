#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CSPlayerPawnBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1488
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_CSObserverPawn : public source2sdk::client::C_CSPlayerPawnBase
        {
        public:
            CEntityHandle m_hDetectParentChange; // 0x1480            
            uint8_t _pad1484[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSObserverPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSObserverPawn) == 0x1488);
    };
};
