#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct AISquadSlotTargetInfo_t
        {
        public:
            // hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> hTarget;
            char hTarget[0x4]; // 0x0            
            // metadata: MNotSaved
            // slots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVec<48> slots;
            char slots[0x8]; // 0x4            
            // metadata: MNotSaved
            // inactive_slots_by_mode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVec<48> inactive_slots_by_mode;
            char inactive_slots_by_mode[0x8]; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::AISquadSlotTargetInfo_t, hTarget) == 0x0);
        static_assert(offsetof(source2sdk::server::AISquadSlotTargetInfo_t, slots) == 0x4);
        static_assert(offsetof(source2sdk::server::AISquadSlotTargetInfo_t, inactive_slots_by_mode) == 0xc);
        
        static_assert(sizeof(source2sdk::server::AISquadSlotTargetInfo_t) == 0x14);
    };
};
