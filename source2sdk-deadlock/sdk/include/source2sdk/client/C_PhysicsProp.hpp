#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BreakableProp.hpp"

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
        // Size: 0xe30
        // Has VTable
        // 
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "bool m_bAwake"
        #pragma pack(push, 1)
        class C_PhysicsProp : public source2sdk::client::C_BreakableProp
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bAwake; // 0xe20            
            uint8_t _pad0e21[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PhysicsProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PhysicsProp) == 0xe30);
    };
};
