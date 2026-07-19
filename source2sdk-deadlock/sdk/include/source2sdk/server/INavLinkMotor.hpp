#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/Navigation_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_BaseNPC;
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
        // Standard-layout class: true
        // Size: 0x18
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class INavLinkMotor
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_hNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CAI_BaseNPC> m_hNPC;
            char m_hNPC[0x4]; // 0x8            
            source2sdk::server::Navigation_t m_eNavType; // 0xc            
            std::int32_t m_eLifetimeState; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::INavLinkMotor, m_hNPC) == 0x8);
        static_assert(offsetof(source2sdk::server::INavLinkMotor, m_eNavType) == 0xc);
        static_assert(offsetof(source2sdk::server::INavLinkMotor, m_eLifetimeState) == 0x10);
        
        static_assert(sizeof(source2sdk::server::INavLinkMotor) == 0x18);
    };
};
