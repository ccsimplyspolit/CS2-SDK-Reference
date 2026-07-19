#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierAura.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBulletTimeWarp;
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
        // Size: 0x3b8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_TimeWall_Aura : public source2sdk::server::CCitadelModifierAura
        {
        public:
            uint8_t _pad0108[0x280]; // 0x108
            // m_vecTimeWarps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CCitadelBulletTimeWarp>> m_vecTimeWarps;
            char m_vecTimeWarps[0x18]; // 0x388            
            uint8_t _pad03a0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_TimeWall_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_TimeWall_Aura) == 0x3b8);
    };
};
