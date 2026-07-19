#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CTier3BossAbility.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"

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
        // Standard-layout class: false
        // Size: 0x16e8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Tier3Boss_RocketBarrage : public source2sdk::client::CTier3BossAbility
        {
        public:
            std::int32_t m_nGrenadeIndex; // 0x11d8            
            std::int32_t m_nTotalGrenades; // 0x11dc            
            source2sdk::modellib::AttachmentHandle_t m_hShootPos; // 0x11e0            
            uint8_t _pad11e1[0x507];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tier3Boss_RocketBarrage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Tier3Boss_RocketBarrage) == 0x16e8);
    };
};
