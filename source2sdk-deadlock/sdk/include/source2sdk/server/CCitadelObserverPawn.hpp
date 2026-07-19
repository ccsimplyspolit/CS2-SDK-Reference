#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelPlayerPawnBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xd70
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_flEncodedController"
        // static metadata: MNetworkExcludeByName "m_flPoseParameter"
        // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_ObserverServices m_pObserverServices"
        // static metadata: MNetworkIncludeByName "m_pObserverServices"
        // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
        // static metadata: MNetworkIncludeByName "m_pCameraServices"
        // static metadata: MNetworkVarTypeOverride "CCitadelObserver_MovementServices m_pMovementServices"
        // static metadata: MNetworkIncludeByName "m_pMovementServices"
        #pragma pack(push, 1)
        class CCitadelObserverPawn : public source2sdk::server::CCitadelPlayerPawnBase
        {
        public:
            // Datamap fields:
            // CCitadelPlayer_ObserverServices m_pObserverServices; // 0xbb8
            // CCitadelPlayer_CameraServices m_pCameraServices; // 0xbd8
            // CCitadelObserver_MovementServices m_pMovementServices; // 0xbe0
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCitadelObserverPawn) == 0xd70);
    };
};
