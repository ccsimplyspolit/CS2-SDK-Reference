#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1700
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_vecTagAlongVisitedAllies"
        // static metadata: MNetworkVarNames "EHANDLE m_hLastAttachedTo"
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_Attach : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x8]; // 0x11d8
            // metadata: MNetworkEnable
            // m_vecTagAlongVisitedAllies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecTagAlongVisitedAllies;
            char m_vecTagAlongVisitedAllies[0x18]; // 0x11e0            
            // metadata: MNetworkEnable
            // m_hLastAttachedTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAttachedTo;
            char m_hLastAttachedTo[0x4]; // 0x11f8            
            uint8_t _pad11fc[0x504];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_Attach because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Familiar_Attach) == 0x1700);
    };
};
