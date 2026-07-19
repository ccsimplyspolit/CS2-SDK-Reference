#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/CModifierHandleBase.hpp"
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
        // Size: 0x16b8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsFullyCharged"
        #pragma pack(push, 1)
        class CCitadel_Ability_Frank_ShockTarget2 : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x708]; // 0xf70
            // m_vecHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitTargets;
            char m_vecHitTargets[0x18]; // 0x1678            
            uint8_t _pad1690[0x8]; // 0x1690
            // metadata: MNetworkEnable
            bool m_bIsFullyCharged; // 0x1698            
            uint8_t _pad1699[0x7]; // 0x1699
            source2sdk::server::CModifierHandleBase m_hFullyChargedFXModifier; // 0x16a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Frank_ShockTarget2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Frank_ShockTarget2) == 0x16b8);
    };
};
