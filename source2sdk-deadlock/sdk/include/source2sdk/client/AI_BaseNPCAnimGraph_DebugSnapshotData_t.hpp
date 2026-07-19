#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DebugSnapshotBaseStructuredData_t.hpp"

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
        // Size: 0x28
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AI_BaseNPCAnimGraph_DebugSnapshotData_t : public source2sdk::client::DebugSnapshotBaseStructuredData_t
        {
        public:
            CGlobalSymbol e_action_desired; // 0x8            
            bool b_action_restart; // 0x10            
            uint8_t _pad0011[0x7]; // 0x11
            CGlobalSymbol e_movement_type_desired; // 0x18            
            bool b_movement_type_restart; // 0x20            
            uint8_t _pad0021[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in AI_BaseNPCAnimGraph_DebugSnapshotData_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::AI_BaseNPCAnimGraph_DebugSnapshotData_t) == 0x28);
    };
};
