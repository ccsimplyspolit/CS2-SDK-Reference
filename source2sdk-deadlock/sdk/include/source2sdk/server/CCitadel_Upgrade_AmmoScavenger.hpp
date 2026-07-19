#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Item.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1080
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Upgrade_AmmoScavenger : public source2sdk::server::CCitadel_Item
        {
        public:
            // m_hLastOrbTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastOrbTarget;
            char m_hLastOrbTarget[0x4]; // 0xf78            
            uint8_t _pad0f7c[0x104];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Upgrade_AmmoScavenger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Upgrade_AmmoScavenger) == 0x1080);
    };
};
