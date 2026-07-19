#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ShotID_t.hpp"
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
        class CCitadel_Modifier_CritShot : public source2sdk::server::CCitadel_Modifier_BaseBulletPreRollProc
        {
        public:
            source2sdk::client::ShotID_t m_iShotID; // 0x228            
            uint8_t _pad022c[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_CritShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_CritShot) == 0x2b0);
    };
};
