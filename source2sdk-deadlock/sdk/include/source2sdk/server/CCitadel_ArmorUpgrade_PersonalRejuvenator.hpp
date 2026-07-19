#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadel_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1100
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_ArmorUpgrade_PersonalRejuvenator : public source2sdk::server::CCitadel_Item
        {
        public:
            bool m_bActivated; // 0xf78            
            uint8_t _pad0f79[0x3]; // 0xf79
            source2sdk::client::ParticleIndex_t m_nFxIndex; // 0xf7c            
            uint8_t _pad0f80[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_ArmorUpgrade_PersonalRejuvenator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_ArmorUpgrade_PersonalRejuvenator) == 0x1100);
    };
};
