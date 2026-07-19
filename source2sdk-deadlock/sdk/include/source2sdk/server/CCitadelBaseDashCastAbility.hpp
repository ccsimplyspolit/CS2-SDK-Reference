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
        struct CCitadelBaseAbility;
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
        // Size: 0x1008
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flDashCastStartTime"
        // static metadata: MNetworkVarNames "Vector m_vDashCastDir"
        #pragma pack(push, 1)
        class CCitadelBaseDashCastAbility : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_hAbilityToTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hAbilityToTrigger;
            char m_hAbilityToTrigger[0x4]; // 0xf70            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDashCastStartTime; // 0xf74            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashCastDir; // 0xf78            
            uint8_t _pad0f84[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelBaseDashCastAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelBaseDashCastAbility) == 0x1008);
    };
};
