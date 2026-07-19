#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AI_DefaultNPC_DebugSnapshotData_t_PathQuery_t.hpp"
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
        // Size: 0x78
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Default NPC"
        #pragma pack(push, 1)
        struct AI_DefaultNPC_DebugSnapshotData_t : public source2sdk::client::DebugSnapshotBaseStructuredData_t
        {
        public:
            CGlobalSymbol s_npc_current_ability; // 0x8            
            CGlobalSymbol s_npc_tactic_current; // 0x10            
            CGlobalSymbol s_npc_tactic_phase; // 0x18            
            // tactic_interrupt_conditions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> tactic_interrupt_conditions;
            char tactic_interrupt_conditions[0x18]; // 0x20            
            source2sdk::client::AI_DefaultNPC_DebugSnapshotData_t_PathQuery_t path_query; // 0x38            
            // path_queries_speculative has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AI_DefaultNPC_DebugSnapshotData_t_PathQuery_t> path_queries_speculative;
            char path_queries_speculative[0x18]; // 0x60            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in AI_DefaultNPC_DebugSnapshotData_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::AI_DefaultNPC_DebugSnapshotData_t) == 0x78);
    };
};
