#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECatStatueState_t.hpp"
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
        // Size: 0x1320
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "ECatStatueState_t m_eState"
        // static metadata: MNetworkVarNames "EHANDLE m_hStatue"
        #pragma pack(push, 1)
        class CCitadel_Ability_ProximityRitual : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::ECatStatueState_t m_eState; // 0xf70            
            uint8_t _pad0f71[0x3]; // 0xf71
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_hStatue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hStatue;
            char m_hStatue[0x4]; // 0xf74            
            source2sdk::entity2::GameTime_t m_tCatRecallTime; // 0xf78            
            std::int32_t m_iCatRecallHealth; // 0xf7c            
            VectorWS m_vLaunchPosition; // 0xf80            
            QAngle m_qLaunchAngle; // 0xf8c            
            uint8_t _pad0f98[0x388];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ProximityRitual because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ProximityRitual) == 0x1320);
    };
};
