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
        // Size: 0x10
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CTestPulseIO_FloatStringArgs_t
        {
        public:
            float flOutFloat; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            CUtlSymbolLarge strOutString; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CTestPulseIO_FloatStringArgs_t, flOutFloat) == 0x0);
        static_assert(offsetof(source2sdk::server::CTestPulseIO_FloatStringArgs_t, strOutString) == 0x8);
        
        static_assert(sizeof(source2sdk::server::CTestPulseIO_FloatStringArgs_t) == 0x10);
    };
};
