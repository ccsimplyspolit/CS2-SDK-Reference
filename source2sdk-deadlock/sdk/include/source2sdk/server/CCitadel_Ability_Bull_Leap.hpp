#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ELeapState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
        // Size: 0x13a0
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
        class CCitadel_Ability_Bull_Leap : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bBraceParamTriggered; // 0xf70            
            uint8_t _pad0f71[0x3]; // 0xf71
            // metadata: MNetworkEnable
            float m_flBoostYaw; // 0xf74            
            // metadata: MNetworkEnable
            Vector m_vecCrashPosition; // 0xf78            
            // metadata: MNetworkEnable
            Vector m_vecCrashDirection; // 0xf84            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnLeapStateChanged"
            source2sdk::client::ELeapState_t m_eLeapState; // 0xf90            
            uint8_t _pad0f91[0x3]; // 0xf91
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStateEnterTime; // 0xf94            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flNextStateTime; // 0xf98            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flBoostEndTime; // 0xfb0            
            uint8_t _pad0fc8[0x380]; // 0xfc8
            Vector m_vPrevPos; // 0x1348            
            uint8_t _pad1354[0x4]; // 0x1354
            // m_vecDraggedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecDraggedEntities;
            char m_vecDraggedEntities[0x18]; // 0x1358            
            uint8_t _pad1370[0xc]; // 0x1370
            Vector m_vecLastVel; // 0x137c            
            Vector m_vecCrashDownLastPos; // 0x1388            
            bool m_bInputBufferCrash; // 0x1394            
            uint8_t _pad1395[0xb];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bull_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Bull_Leap) == 0x13a0);
    };
};
