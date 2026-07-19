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
        // Size: 0x20
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AI_Motor_DebugSnapshotData_t : public source2sdk::client::DebugSnapshotBaseStructuredData_t
        {
        public:
            CGlobalSymbol current_movement_gait_set; // 0x8            
            CGlobalSymbol current_movement_gait; // 0x10            
            CGlobalSymbol movement_setting_id; // 0x18            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in AI_Motor_DebugSnapshotData_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::AI_Motor_DebugSnapshotData_t) == 0x20);
    };
};
