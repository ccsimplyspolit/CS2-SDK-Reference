#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_BaseBulletPreRollProc.hpp"

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
        // Size: 0x2b0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ChainLightning : public source2sdk::server::CCitadel_Modifier_BaseBulletPreRollProc
        {
        public:
            uint8_t _pad0228[0x80]; // 0x228
            source2sdk::entity2::GameTime_t m_flNextProcTime; // 0x2a8            
            uint8_t _pad02ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ChainLightning because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ChainLightning) == 0x2b0);
    };
};
