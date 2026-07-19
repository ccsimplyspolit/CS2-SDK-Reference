#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_BaseEventProc.hpp"
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
        // Size: 0x300
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_CharmedWraps : public source2sdk::client::CCitadel_Modifier_BaseEventProc
        {
        public:
            source2sdk::entity2::GameTime_t m_fLastPrimingLightAttackTime; // 0x1f8            
            uint8_t _pad01fc[0x104];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_CharmedWraps because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_CharmedWraps) == 0x300);
    };
};
