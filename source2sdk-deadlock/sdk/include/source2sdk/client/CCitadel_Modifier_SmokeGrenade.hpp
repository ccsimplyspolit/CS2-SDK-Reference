#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CPointModifierThinker;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_Citadel_SmokeGrenade_Blocker;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x268
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_SmokeGrenade : public source2sdk::client::CCitadelModifier
        {
        public:
            // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_Citadel_SmokeGrenade_Blocker> m_hBlocker;
            char m_hBlocker[0x4]; // 0xc0            
            // m_hFriendlyAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CPointModifierThinker> m_hFriendlyAura;
            char m_hFriendlyAura[0x4]; // 0xc4            
            // m_hEnemyAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CPointModifierThinker> m_hEnemyAura;
            char m_hEnemyAura[0x4]; // 0xc8            
            source2sdk::client::ParticleIndex_t m_nParticleIndex; // 0xcc            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xd0            
            uint8_t _pad00d4[0x184]; // 0xd4
            Vector m_vOrigin; // 0x258            
            uint8_t _pad0264[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_SmokeGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_SmokeGrenade) == 0x268);
    };
};
