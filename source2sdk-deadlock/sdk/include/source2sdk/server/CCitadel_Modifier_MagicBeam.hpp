#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadel_Magic_Beam_Blocker;
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
        // Size: 0x328
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_MagicBeam : public source2sdk::server::CCitadelModifier
        {
        public:
            // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadel_Magic_Beam_Blocker> m_hBlocker;
            char m_hBlocker[0x4]; // 0xd0            
            source2sdk::client::ParticleIndex_t m_nParticleIndex; // 0xd4            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xd8            
            uint8_t _pad00dc[0x204]; // 0xdc
            QAngle m_qAngle; // 0x2e0            
            Vector m_vOrigin; // 0x2ec            
            uint8_t _pad02f8[0x30];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_MagicBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_MagicBeam) == 0x328);
    };
};
