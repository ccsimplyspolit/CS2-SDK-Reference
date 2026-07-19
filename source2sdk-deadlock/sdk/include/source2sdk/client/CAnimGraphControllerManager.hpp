#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct CAnimGraphControllerBase;
    };
};

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
        // Size: 0xb0
        #pragma pack(push, 1)
        class CAnimGraphControllerManager
        {
        public:
            // m_controllers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CAnimGraphControllerBase*> m_controllers;
            char m_controllers[0x18]; // 0x0            
            uint8_t _pad0018[0x90]; // 0x18
            bool m_bGraphBindingsCreated; // 0xa8            
            uint8_t _pad00a9[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CAnimGraphControllerManager, m_controllers) == 0x0);
        static_assert(offsetof(source2sdk::client::CAnimGraphControllerManager, m_bGraphBindingsCreated) == 0xa8);
        
        static_assert(sizeof(source2sdk::client::CAnimGraphControllerManager) == 0xb0);
    };
};
