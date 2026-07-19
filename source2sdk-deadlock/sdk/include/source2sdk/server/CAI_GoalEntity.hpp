#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_GoalEntity_SearchType_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4e8
        // Has VTable
        #pragma pack(push, 1)
        class CAI_GoalEntity : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a0[0x8]; // 0x4a0
            CUtlSymbolLarge m_iszActor; // 0x4a8            
            CUtlSymbolLarge m_iszGoal; // 0x4b0            
            bool m_fStartActive; // 0x4b8            
            uint8_t _pad04b9[0x3]; // 0x4b9
            source2sdk::server::CAI_GoalEntity_SearchType_t m_SearchType; // 0x4bc            
            CUtlSymbolLarge m_iszConceptModifiers; // 0x4c0            
            // m_actors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CAI_BaseNPC>> m_actors;
            char m_actors[0x18]; // 0x4c8            
            // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGoalEntity;
            char m_hGoalEntity[0x4]; // 0x4e0            
            std::uint32_t m_flags; // 0x4e4            
            
            // Datamap fields:
            // void CAI_GoalEntityDelayedRefresh; // 0x0
            // void InputActivate; // 0x0
            // void InputUpdateActors; // 0x0
            // void InputDeactivate; // 0x0
            // void InputToggle; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_GoalEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_GoalEntity) == 0x4e8);
    };
};
