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
        // Size: 0x40
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "AnimGraph"
        #pragma pack(push, 1)
        struct AI_BaseNPCAnimGraph_DebugSnapshotData_t
        {
        public:
            CGlobalSymbol e_action_desired; // 0x0            
            CGlobalSymbol e_action_handshake_restart; // 0x8            
            CGlobalSymbol e_action_handshake_body_authority_current; // 0x10            
            CGlobalSymbol e_action_handshake_body_authority_desired; // 0x18            
            CGlobalSymbol e_movement_type_desired; // 0x20            
            CGlobalSymbol e_movement_handshake_restart; // 0x28            
            CGlobalSymbol e_movement_handshake_body_authority_current; // 0x30            
            CGlobalSymbol e_movement_handshake_body_authority_desired; // 0x38            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AI_BaseNPCAnimGraph_DebugSnapshotData_t, e_action_desired) == 0x0);
        static_assert(offsetof(source2sdk::client::AI_BaseNPCAnimGraph_DebugSnapshotData_t, e_action_handshake_restart) == 0x8);
        static_assert(offsetof(source2sdk::client::AI_BaseNPCAnimGraph_DebugSnapshotData_t, e_action_handshake_body_authority_current) == 0x10);
        static_assert(offsetof(source2sdk::client::AI_BaseNPCAnimGraph_DebugSnapshotData_t, e_action_handshake_body_authority_desired) == 0x18);
        static_assert(offsetof(source2sdk::client::AI_BaseNPCAnimGraph_DebugSnapshotData_t, e_movement_type_desired) == 0x20);
        static_assert(offsetof(source2sdk::client::AI_BaseNPCAnimGraph_DebugSnapshotData_t, e_movement_handshake_restart) == 0x28);
        static_assert(offsetof(source2sdk::client::AI_BaseNPCAnimGraph_DebugSnapshotData_t, e_movement_handshake_body_authority_current) == 0x30);
        static_assert(offsetof(source2sdk::client::AI_BaseNPCAnimGraph_DebugSnapshotData_t, e_movement_handshake_body_authority_desired) == 0x38);
        
        static_assert(sizeof(source2sdk::client::AI_BaseNPCAnimGraph_DebugSnapshotData_t) == 0x40);
    };
};
