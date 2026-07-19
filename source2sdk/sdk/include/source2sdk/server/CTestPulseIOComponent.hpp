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
        // Size: 0x30
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTestPulseIOComponent
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            CUtlString m_ComponentData; // 0x8            
            // m_OnComponentTestFunc has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlSymbolLarge> m_OnComponentTestFunc;
            char m_OnComponentTestFunc[0x20]; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CTestPulseIOComponent, m_ComponentData) == 0x8);
        static_assert(offsetof(source2sdk::server::CTestPulseIOComponent, m_OnComponentTestFunc) == 0x10);
        
        static_assert(sizeof(source2sdk::server::CTestPulseIOComponent) == 0x30);
    };
};
