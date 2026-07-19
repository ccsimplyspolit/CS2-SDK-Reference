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
        // Size: 0x1710
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hHookVictim"
        // static metadata: MNetworkVarNames "Vector m_vecHookTargetStartPos"
        // static metadata: MNetworkVarNames "GameTime_t m_flCancelHookTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flBeginReelHookTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flBulletShouldExpireTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Hook : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "HookVictimChanged"
            // m_hHookVictim has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hHookVictim;
            char m_hHookVictim[0x4]; // 0x11d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecHookTargetStartPos; // 0x11dc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCancelHookTime; // 0x11e8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flBeginReelHookTime; // 0x11ec            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flBulletShouldExpireTime; // 0x11f0            
            uint8_t _pad11f4[0x8]; // 0x11f4
            float m_flMaxHookTravelTime; // 0x11fc            
            uint8_t _pad1200[0x510];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Hook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Hook) == 0x1710);
    };
};
