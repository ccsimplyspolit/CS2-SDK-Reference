#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierAura.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelControlPointTrigger;
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
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x110
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ControlPointBlockerAura : public source2sdk::server::CCitadelModifierAura
        {
        public:
            // m_hCP has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelControlPointTrigger> m_hCP;
            char m_hCP[0x4]; // 0x108            
            uint8_t _pad010c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ControlPointBlockerAura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ControlPointBlockerAura) == 0x110);
    };
};
