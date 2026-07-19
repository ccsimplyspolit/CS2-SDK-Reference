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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CTestPulseIO_EntityHandleIntArgs_t
        {
        public:
            CEntityHandle handleA; // 0x0            
            std::int32_t valueB; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CTestPulseIO_EntityHandleIntArgs_t, handleA) == 0x0);
        static_assert(offsetof(source2sdk::server::CTestPulseIO_EntityHandleIntArgs_t, valueB) == 0x4);
        
        static_assert(sizeof(source2sdk::server::CTestPulseIO_EntityHandleIntArgs_t) == 0x8);
    };
};
