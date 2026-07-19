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
        // Size: 0x330
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_SalvoBullet : public source2sdk::server::CCitadel_Modifier_BaseBulletPreRollProc
        {
        public:
            uint8_t _pad0228[0x100]; // 0x228
            source2sdk::client::ShotID_t m_BuffedShotId; // 0x328            
            uint8_t _pad032c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_SalvoBullet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_SalvoBullet) == 0x330);
    };
};
