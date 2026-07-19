#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelPlayerPawnBase.hpp"

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
        // Size: 0x10f0
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
        class C_CitadelObserverPawn : public source2sdk::client::CCitadelPlayerPawnBase
        {
        public:
            uint8_t _pad10d8[0x18];
            // Datamap fields:
            // CCitadelPlayer_ObserverServices m_pObserverServices; // 0xf00
            // CCitadelPlayer_CameraServices m_pCameraServices; // 0xf20
            // CCitadelObserver_MovementServices m_pMovementServices; // 0xf28
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_CitadelObserverPawn) == 0x10f0);
    };
};
