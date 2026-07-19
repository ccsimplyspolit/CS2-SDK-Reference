#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1c80
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsFullyCharged"
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_HauntingSkull : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_tPriorityTargetTime; // 0x11d8            
            // m_eSkullPriorityTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_eSkullPriorityTarget;
            char m_eSkullPriorityTarget[0x4]; // 0x11dc            
            VectorWS m_vLaunchPosition; // 0x11e0            
            QAngle m_qLaunchAngle; // 0x11ec            
            uint8_t _pad11f8[0x1]; // 0x11f8
            // metadata: MNetworkEnable
            bool m_bIsFullyCharged; // 0x11f9            
            uint8_t _pad11fa[0xa86];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_HauntingSkull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Necro_HauntingSkull) == 0x1c80);
    };
};
