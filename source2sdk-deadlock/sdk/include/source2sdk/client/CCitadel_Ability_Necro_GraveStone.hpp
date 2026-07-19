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
        // Size: 0x1588
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_vecDeployedGravestones"
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_GraveStone : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // m_vecDeployedGravestones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecDeployedGravestones;
            char m_vecDeployedGravestones[0x18]; // 0x11d8            
            Vector m_vCastPosition; // 0x11f0            
            QAngle m_qCastAngle; // 0x11fc            
            uint8_t _pad1208[0x380];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_GraveStone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Necro_GraveStone) == 0x1588);
    };
};
