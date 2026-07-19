#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/ECrowdLevel.hpp"

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
        // Size: 0x600
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTACheers : public source2sdk::client::C_BaseEntity
        {
        public:
            std::int16_t m_nRadiantCheers; // 0x5f0            
            std::int16_t m_nDireCheers; // 0x5f2            
            std::int16_t m_nRadiantPremiumCheers; // 0x5f4            
            std::int16_t m_nDirePremiumCheers; // 0x5f6            
            source2sdk::client::ECrowdLevel m_nRadiantCrowdLevel; // 0x5f8            
            source2sdk::client::ECrowdLevel m_nDireCrowdLevel; // 0x5fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTACheers because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTACheers) == 0x600);
    };
};
