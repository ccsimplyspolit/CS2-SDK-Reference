#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_ExplosiveShots_BulletEntityPair_t.hpp"

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
        // Size: 0x270
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ExplosiveShots : public source2sdk::server::CCitadelModifier
        {
        public:
            // m_vecHitEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CCitadel_Modifier_ExplosiveShots_BulletEntityPair_t> m_vecHitEnts;
            char m_vecHitEnts[0x18]; // 0xd0            
            bool m_bExplosionCanHitMultipleTimes; // 0xe8            
            uint8_t _pad00e9[0x187];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ExplosiveShots because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ExplosiveShots) == 0x270);
    };
};
