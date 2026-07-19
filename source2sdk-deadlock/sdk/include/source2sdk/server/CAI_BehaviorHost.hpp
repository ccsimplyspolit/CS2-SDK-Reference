#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CAI_BaseNPC;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_Behavior;
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        #pragma pack(push, 1)
        class CAI_BehaviorHost
        {
        public:
            // metadata: MNotSaved
            source2sdk::server::CAI_Behavior* m_pActiveBehavior; // 0x0            
            // metadata: MNotSaved
            // m_Behaviors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CAI_Behavior*> m_Behaviors;
            char m_Behaviors[0x18]; // 0x8            
            // metadata: MNotSaved
            source2sdk::server::CAI_BaseNPC* m_pOuter; // 0x20            
            // metadata: MNotSaved
            bool m_bCalledBehaviorSelectSchedule; // 0x28            
            uint8_t _pad0029[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAI_BehaviorHost, m_pActiveBehavior) == 0x0);
        static_assert(offsetof(source2sdk::server::CAI_BehaviorHost, m_Behaviors) == 0x8);
        static_assert(offsetof(source2sdk::server::CAI_BehaviorHost, m_pOuter) == 0x20);
        static_assert(offsetof(source2sdk::server::CAI_BehaviorHost, m_bCalledBehaviorSelectSchedule) == 0x28);
        
        static_assert(sizeof(source2sdk::server::CAI_BehaviorHost) == 0x30);
    };
};
