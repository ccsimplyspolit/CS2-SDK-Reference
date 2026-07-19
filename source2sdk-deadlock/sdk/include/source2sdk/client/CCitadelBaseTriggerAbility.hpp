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
        struct C_CitadelBaseAbility;
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
        // Size: 0x11e8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbilityToTrigger"
        // static metadata: MNetworkVarNames "GameTime_t m_SwappedToTime"
        #pragma pack(push, 1)
        class CCitadelBaseTriggerAbility : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_hAbilityToTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelBaseAbility> m_hAbilityToTrigger;
            char m_hAbilityToTrigger[0x4]; // 0x11d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_SwappedToTime; // 0x11dc            
            uint8_t _pad11e0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelBaseTriggerAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelBaseTriggerAbility) == 0x11e8);
    };
};
