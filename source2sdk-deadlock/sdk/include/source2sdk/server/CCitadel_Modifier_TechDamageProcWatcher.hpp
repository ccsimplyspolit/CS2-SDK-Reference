#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_BaseEventProc.hpp"

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
        // Size: 0x390
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_TechDamageProcWatcher : public source2sdk::server::CCitadel_Modifier_BaseEventProc
        {
        public:
            source2sdk::entity2::GameTime_t m_flNextProcTime; // 0x208            
            source2sdk::client::ShotID_t m_shotProced; // 0x20c            
            uint8_t _pad0210[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_TechDamageProcWatcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_TechDamageProcWatcher) == 0x390);
    };
};
