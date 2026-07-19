#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x48
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Facing Services"
        // static metadata: MDebugSnapshotDataRenderFn
        #pragma pack(push, 1)
        struct AI_FacingServices_DebugSnapshotData_t
        {
        public:
            VectorWS npc_position; // 0x0            
            uint8_t _pad000c[0x4]; // 0xc
            CGlobalSymbol facing_target_source; // 0x10            
            VectorWS facing_target; // 0x18            
            uint8_t _pad0024[0x4]; // 0x24
            CGlobalSymbol schedule_facing_priority; // 0x28            
            CGlobalSymbol strafing_source; // 0x30            
            bool strafing_enabled; // 0x38            
            uint8_t _pad0039[0x7]; // 0x39
            CGlobalSymbol movement_id; // 0x40            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AI_FacingServices_DebugSnapshotData_t, npc_position) == 0x0);
        static_assert(offsetof(source2sdk::client::AI_FacingServices_DebugSnapshotData_t, facing_target_source) == 0x10);
        static_assert(offsetof(source2sdk::client::AI_FacingServices_DebugSnapshotData_t, facing_target) == 0x18);
        static_assert(offsetof(source2sdk::client::AI_FacingServices_DebugSnapshotData_t, schedule_facing_priority) == 0x28);
        static_assert(offsetof(source2sdk::client::AI_FacingServices_DebugSnapshotData_t, strafing_source) == 0x30);
        static_assert(offsetof(source2sdk::client::AI_FacingServices_DebugSnapshotData_t, strafing_enabled) == 0x38);
        static_assert(offsetof(source2sdk::client::AI_FacingServices_DebugSnapshotData_t, movement_id) == 0x40);
        
        static_assert(sizeof(source2sdk::client::AI_FacingServices_DebugSnapshotData_t) == 0x48);
    };
};
