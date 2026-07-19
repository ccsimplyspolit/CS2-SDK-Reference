#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1a18
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsFullyCharged"
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_HauntingSkull : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_tPriorityTargetTime; // 0xf70            
            // m_eSkullPriorityTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_eSkullPriorityTarget;
            char m_eSkullPriorityTarget[0x4]; // 0xf74            
            VectorWS m_vLaunchPosition; // 0xf78            
            QAngle m_qLaunchAngle; // 0xf84            
            uint8_t _pad0f90[0x1]; // 0xf90
            // metadata: MNetworkEnable
            bool m_bIsFullyCharged; // 0xf91            
            uint8_t _pad0f92[0xa86];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_HauntingSkull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Necro_HauntingSkull) == 0x1a18);
    };
};
