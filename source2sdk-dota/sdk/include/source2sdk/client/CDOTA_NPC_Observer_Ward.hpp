#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/client/FowCustomTeams_t.hpp"
namespace source2sdk
{
    namespace particleslib
    {
        struct CNewParticleEffect;
    };
};

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
        // Size: 0x19c8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTA_NPC_Observer_Ward : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            std::int32_t m_iDuration; // 0x19b0            
            uint8_t _pad19b4[0x4]; // 0x19b4
            source2sdk::particleslib::CNewParticleEffect* m_pVisionRangeFX; // 0x19b8            
            std::int32_t m_nPreviewViewer; // 0x19c0            
            source2sdk::client::FowCustomTeams_t m_nFoWTeam; // 0x19c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_NPC_Observer_Ward because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_NPC_Observer_Ward) == 0x19c8);
    };
};
