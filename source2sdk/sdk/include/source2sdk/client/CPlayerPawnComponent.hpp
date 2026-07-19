#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerPtr.hpp"
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x48
        // Has VTable
        // Construct allowed
        // Construct disallowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPlayerPawnComponent
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x8            
            source2sdk::client::CAnimGraphControllerPtr m_pComponentGraphController; // 0x30            
            uint8_t _pad0038[0x10];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CPlayerPawnComponent, __m_pChainEntity) == 0x8);
        static_assert(offsetof(source2sdk::client::CPlayerPawnComponent, m_pComponentGraphController) == 0x30);
        
        static_assert(sizeof(source2sdk::client::CPlayerPawnComponent) == 0x48);
    };
};
