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
        // Size: 0x38
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AI_DefaultNPC_DebugSnapshotData_t : public source2sdk::client::DebugSnapshotBaseStructuredData_t
        {
        public:
            CGlobalSymbol s_npc_current_ability; // 0x8            
            CGlobalSymbol s_npc_move_tactic_current; // 0x10            
            CGlobalSymbol s_npc_move_tactic_phase; // 0x18            
            // move_tactic_interrupt_conditions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> move_tactic_interrupt_conditions;
            char move_tactic_interrupt_conditions[0x18]; // 0x20            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in AI_DefaultNPC_DebugSnapshotData_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::AI_DefaultNPC_DebugSnapshotData_t) == 0x38);
    };
};
