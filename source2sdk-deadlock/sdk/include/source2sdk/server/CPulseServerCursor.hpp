#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseExecCursor.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Standard-layout class: false
        // Size: 0xe0
        // Has VTable
        #pragma pack(push, 1)
        class CPulseServerCursor : public source2sdk::pulse_runtime_lib::CPulseExecCursor
        {
        public:
            uint8_t _pad00d0[0x8]; // 0xd0
            // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActivator;
            char m_hActivator[0x4]; // 0xd8            
            // m_hCaller has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCaller;
            char m_hCaller[0x4]; // 0xdc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseServerCursor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPulseServerCursor) == 0xe0);
    };
};
