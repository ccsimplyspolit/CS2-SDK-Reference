#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/GLOBALESTATE.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct globalentity_t
        {
        public:
            // metadata: MKV3TransferSaveOpsForField
            CUtlSymbol name; // 0x0            
            // metadata: MKV3TransferSaveOpsForField
            CUtlSymbol levelName; // 0x2            
            source2sdk::client::GLOBALESTATE state; // 0x4            
            uint8_t _pad0005[0x3]; // 0x5
            std::int32_t counter; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::globalentity_t, name) == 0x0);
        static_assert(offsetof(source2sdk::client::globalentity_t, levelName) == 0x2);
        static_assert(offsetof(source2sdk::client::globalentity_t, state) == 0x4);
        static_assert(offsetof(source2sdk::client::globalentity_t, counter) == 0x8);
        
        static_assert(sizeof(source2sdk::client::globalentity_t) == 0xc);
    };
};
