#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
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
        // Size: 0x3e8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ColdFrontAOE : public source2sdk::server::CCitadelModifier
        {
        public:
            // m_vecDamagedTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CBaseEntity*> m_vecDamagedTargets;
            char m_vecDamagedTargets[0x18]; // 0xd0            
            uint8_t _pad00e8[0x300];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ColdFrontAOE because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ColdFrontAOE) == 0x3e8);
    };
};
