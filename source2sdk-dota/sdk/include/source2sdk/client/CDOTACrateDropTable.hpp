#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTACrateDropTable
        {
        public:
            CUtlString m_sDropType; // 0x0            
            CUtlString szDropName; // 0x8            
            std::int32_t nDropWeight; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACrateDropTable, m_sDropType) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropTable, szDropName) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTACrateDropTable, nDropWeight) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CDOTACrateDropTable) == 0x18);
    };
};
