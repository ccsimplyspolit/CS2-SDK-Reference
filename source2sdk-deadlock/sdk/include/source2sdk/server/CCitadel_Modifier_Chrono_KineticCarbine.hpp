#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBulletTimeWarp;
    };
};

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
        // Size: 0x5e8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Chrono_KineticCarbine : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bShotAnimPlayed; // 0xd0            
            uint8_t _pad00d1[0x3]; // 0xd1
            std::int32_t m_nBulletCount; // 0xd4            
            float m_flElapsedPct; // 0xd8            
            // m_hTimeWarp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBulletTimeWarp> m_hTimeWarp;
            char m_hTimeWarp[0x4]; // 0xdc            
            source2sdk::client::ParticleIndex_t m_nFullyChargedParticle; // 0xe0            
            uint8_t _pad00e4[0x504];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Chrono_KineticCarbine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Chrono_KineticCarbine) == 0x5e8);
    };
};
