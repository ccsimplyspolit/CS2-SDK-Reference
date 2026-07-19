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
        // Size: 0x28
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MDebugSnapshotDataSummaryFn
        #pragma pack(push, 1)
        struct AI_DefaultNPC_DebugSnapshotData_t_PathQuery_t
        {
        public:
            CGlobalSymbol m_nInitialMovementId; // 0x0            
            CGlobalSymbol m_nCurrentMovementId; // 0x8            
            CGlobalSymbol m_nMode; // 0x10            
            CGlobalSymbol m_nType; // 0x18            
            CGlobalSymbol m_nState; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AI_DefaultNPC_DebugSnapshotData_t_PathQuery_t, m_nInitialMovementId) == 0x0);
        static_assert(offsetof(source2sdk::client::AI_DefaultNPC_DebugSnapshotData_t_PathQuery_t, m_nCurrentMovementId) == 0x8);
        static_assert(offsetof(source2sdk::client::AI_DefaultNPC_DebugSnapshotData_t_PathQuery_t, m_nMode) == 0x10);
        static_assert(offsetof(source2sdk::client::AI_DefaultNPC_DebugSnapshotData_t_PathQuery_t, m_nType) == 0x18);
        static_assert(offsetof(source2sdk::client::AI_DefaultNPC_DebugSnapshotData_t_PathQuery_t, m_nState) == 0x20);
        
        static_assert(sizeof(source2sdk::client::AI_DefaultNPC_DebugSnapshotData_t_PathQuery_t) == 0x28);
    };
};
