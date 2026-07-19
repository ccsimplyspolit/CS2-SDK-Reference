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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CCSGameModeRules
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCSGameModeRules, __m_pChainEntity) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CCSGameModeRules) == 0x30);
    };
};
