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
        // Size: 0x1320
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_vecDeployedGravestones"
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_GraveStone : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // m_vecDeployedGravestones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecDeployedGravestones;
            char m_vecDeployedGravestones[0x18]; // 0xf70            
            Vector m_vCastPosition; // 0xf88            
            QAngle m_qCastAngle; // 0xf94            
            uint8_t _pad0fa0[0x380];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_GraveStone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Necro_GraveStone) == 0x1320);
    };
};
