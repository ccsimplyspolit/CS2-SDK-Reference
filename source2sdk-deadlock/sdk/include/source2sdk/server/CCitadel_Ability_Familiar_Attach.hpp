#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Size: 0x1498
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_vecTagAlongVisitedAllies"
        // static metadata: MNetworkVarNames "EHANDLE m_hLastAttachedTo"
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_Attach : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x8]; // 0xf70
            // metadata: MNetworkEnable
            // m_vecTagAlongVisitedAllies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecTagAlongVisitedAllies;
            char m_vecTagAlongVisitedAllies[0x18]; // 0xf78            
            // metadata: MNetworkEnable
            // m_hLastAttachedTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastAttachedTo;
            char m_hLastAttachedTo[0x4]; // 0xf90            
            uint8_t _pad0f94[0x504];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_Attach because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Familiar_Attach) == 0x1498);
    };
};
