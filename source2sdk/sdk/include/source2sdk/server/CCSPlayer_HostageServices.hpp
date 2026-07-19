#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
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
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x50
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayer_HostageServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            // m_hCarriedHostage has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCarriedHostage;
            char m_hCarriedHostage[0x4]; // 0x48            
            // m_hCarriedHostageProp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCarriedHostageProp;
            char m_hCarriedHostageProp[0x4]; // 0x4c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_HostageServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_HostageServices) == 0x50);
    };
};
