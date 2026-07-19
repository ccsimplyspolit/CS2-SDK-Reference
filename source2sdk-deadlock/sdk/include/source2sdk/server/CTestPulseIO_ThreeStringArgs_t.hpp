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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CTestPulseIO_ThreeStringArgs_t
        {
        public:
            CUtlString strArg1; // 0x0            
            CUtlString strArg2; // 0x8            
            CUtlString strArg3; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CTestPulseIO_ThreeStringArgs_t, strArg1) == 0x0);
        static_assert(offsetof(source2sdk::server::CTestPulseIO_ThreeStringArgs_t, strArg2) == 0x8);
        static_assert(offsetof(source2sdk::server::CTestPulseIO_ThreeStringArgs_t, strArg3) == 0x10);
        
        static_assert(sizeof(source2sdk::server::CTestPulseIO_ThreeStringArgs_t) == 0x18);
    };
};
