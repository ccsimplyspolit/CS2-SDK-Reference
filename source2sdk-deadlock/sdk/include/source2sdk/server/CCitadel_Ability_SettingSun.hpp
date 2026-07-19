#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x1420
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_SettingSun : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            bool m_bProjectileActive; // 0xf70            
            uint8_t _pad0f71[0x387]; // 0xf71
            // m_TargetPreviews has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_TargetPreviews;
            char m_TargetPreviews[0x18]; // 0x12f8            
            uint8_t _pad1310[0x108]; // 0x1310
            bool m_bWasSelected; // 0x1418            
            uint8_t _pad1419[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_SettingSun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_SettingSun) == 0x1420);
    };
};
