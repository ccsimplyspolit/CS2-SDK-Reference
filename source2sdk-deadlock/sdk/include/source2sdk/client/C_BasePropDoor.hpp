#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/DoorState_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xf30
        // Has VTable
        // 
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "DoorState_t m_eDoorState"
        // static metadata: MNetworkVarNames "bool m_bLocked"
        // static metadata: MNetworkVarNames "bool m_bNoNPCs"
        // static metadata: MNetworkVarNames "Vector m_closedPosition"
        // static metadata: MNetworkVarNames "QAngle m_closedAngles"
        // static metadata: MNetworkVarNames "CHandle< C_BasePropDoor> m_hMaster"
        #pragma pack(push, 1)
        class C_BasePropDoor : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad0ef0[0x10]; // 0xef0
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::DoorState_t m_eDoorState; // 0xf00            
            // metadata: MNotSaved
            bool m_modelChanged; // 0xf04            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bLocked; // 0xf05            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bNoNPCs; // 0xf06            
            uint8_t _pad0f07[0x1]; // 0xf07
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            Vector m_closedPosition; // 0xf08            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            QAngle m_closedAngles; // 0xf14            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePropDoor> m_hMaster;
            char m_hMaster[0x4]; // 0xf20            
            // metadata: MNotSaved
            Vector m_vWhereToSetLightingOrigin; // 0xf24            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BasePropDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BasePropDoor) == 0xf30);
    };
};
