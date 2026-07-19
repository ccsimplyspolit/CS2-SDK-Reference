#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ELeapState_t.hpp"
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
        // Size: 0x1608
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bBraceParamTriggered"
        // static metadata: MNetworkVarNames "float m_flBoostYaw"
        // static metadata: MNetworkVarNames "Vector m_vecCrashPosition"
        // static metadata: MNetworkVarNames "Vector m_vecCrashDirection"
        // static metadata: MNetworkVarNames "ELeapState_t m_eLeapState"
        // static metadata: MNetworkVarNames "GameTime_t m_flStateEnterTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Bull_Leap : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bBraceParamTriggered; // 0x11d8            
            uint8_t _pad11d9[0x3]; // 0x11d9
            // metadata: MNetworkEnable
            float m_flBoostYaw; // 0x11dc            
            // metadata: MNetworkEnable
            Vector m_vecCrashPosition; // 0x11e0            
            // metadata: MNetworkEnable
            Vector m_vecCrashDirection; // 0x11ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnLeapStateChanged"
            source2sdk::client::ELeapState_t m_eLeapState; // 0x11f8            
            uint8_t _pad11f9[0x3]; // 0x11f9
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStateEnterTime; // 0x11fc            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flNextStateTime; // 0x1200            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flBoostEndTime; // 0x1218            
            uint8_t _pad1230[0x380]; // 0x1230
            Vector m_vPrevPos; // 0x15b0            
            uint8_t _pad15bc[0x4]; // 0x15bc
            // m_vecDraggedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecDraggedEntities;
            char m_vecDraggedEntities[0x18]; // 0x15c0            
            uint8_t _pad15d8[0xc]; // 0x15d8
            Vector m_vecLastVel; // 0x15e4            
            Vector m_vecCrashDownLastPos; // 0x15f0            
            bool m_bInputBufferCrash; // 0x15fc            
            uint8_t _pad15fd[0xb];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bull_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Bull_Leap) == 0x1608);
    };
};
