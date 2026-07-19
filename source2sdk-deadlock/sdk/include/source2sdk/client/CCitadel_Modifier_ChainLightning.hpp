#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_BaseBulletPreRollProc.hpp"
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
        // Size: 0x2a0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ChainLightning : public source2sdk::client::CCitadel_Modifier_BaseBulletPreRollProc
        {
        public:
            uint8_t _pad0218[0x80]; // 0x218
            source2sdk::entity2::GameTime_t m_flNextProcTime; // 0x298            
            uint8_t _pad029c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ChainLightning because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_ChainLightning) == 0x2a0);
    };
};
