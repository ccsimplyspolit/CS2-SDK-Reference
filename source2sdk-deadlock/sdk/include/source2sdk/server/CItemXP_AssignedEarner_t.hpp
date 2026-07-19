#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECurrencySource.hpp"
#include "source2sdk/client/EDenyDistributionType.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CItemXP_AssignedEarner_t
        {
        public:
            source2sdk::client::ECurrencySource m_eSource; // 0x0            
            std::int32_t m_iBounty; // 0x4            
            source2sdk::client::EDenyDistributionType m_eDenyType; // 0x8            
            uint8_t _pad000c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CItemXP_AssignedEarner_t, m_eSource) == 0x0);
        static_assert(offsetof(source2sdk::server::CItemXP_AssignedEarner_t, m_iBounty) == 0x4);
        static_assert(offsetof(source2sdk::server::CItemXP_AssignedEarner_t, m_eDenyType) == 0x8);
        
        static_assert(sizeof(source2sdk::server::CItemXP_AssignedEarner_t) == 0x10);
    };
};
