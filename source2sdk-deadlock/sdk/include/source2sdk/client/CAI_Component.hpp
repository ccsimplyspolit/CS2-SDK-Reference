#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CNetworkVarChainer.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x50
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Component
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x8            
            uint8_t _pad0030[0x20];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CAI_Component, __m_pChainEntity) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CAI_Component) == 0x50);
    };
};
