#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DebugSnapshotBaseStructuredData_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AI_BaseNPC_DebugSnapshotData_t : public source2sdk::client::DebugSnapshotBaseStructuredData_t
        {
        public:
            CGlobalSymbol npc_state; // 0x8            
            // current_enemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> current_enemy;
            char current_enemy[0x4]; // 0x10            
            uint8_t _pad0014[0x4]; // 0x14
            CUtlString s_current_schedule; // 0x18            
            CGlobalSymbol s_current_task; // 0x20            
            CUtlString s_schedule_interrupt_reason; // 0x28            
            CUtlString s_schedule_fail_reason; // 0x30            
            // conditions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> conditions;
            char conditions[0x18]; // 0x38            
            // anim_events has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> anim_events;
            char anim_events[0x18]; // 0x50            
            CGlobalSymbol e_action_body_section; // 0x68            
            CGlobalSymbol e_movement_body_section; // 0x70            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in AI_BaseNPC_DebugSnapshotData_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::AI_BaseNPC_DebugSnapshotData_t) == 0x78);
    };
};
