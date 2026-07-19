#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_BaseEventProc.hpp"
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x380
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_TechDamageProcWatcher : public source2sdk::client::CCitadel_Modifier_BaseEventProc
        {
        public:
            source2sdk::entity2::GameTime_t m_flNextProcTime; // 0x1f8            
            source2sdk::client::ShotID_t m_shotProced; // 0x1fc            
            uint8_t _pad0200[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_TechDamageProcWatcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_TechDamageProcWatcher) == 0x380);
    };
};
