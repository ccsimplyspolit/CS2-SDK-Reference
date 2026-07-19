#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPointModifierThinker;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1018
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hWasAttachedTo"
        // static metadata: MNetworkVarNames "VectorWS m_vAuraPosition"
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_Spotlight : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_hAuraThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPointModifierThinker> m_hAuraThinker;
            char m_hAuraThinker[0x4]; // 0xf70            
            source2sdk::client::ParticleIndex_t m_nEyeGlowFX; // 0xf74            
            VectorWS m_vLastValidAuraPosition; // 0xf78            
            uint8_t _pad0f84[0x84]; // 0xf84
            // metadata: MNetworkEnable
            // m_hWasAttachedTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hWasAttachedTo;
            char m_hWasAttachedTo[0x4]; // 0x1008            
            // metadata: MNetworkEnable
            VectorWS m_vAuraPosition; // 0x100c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_Spotlight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Familiar_Spotlight) == 0x1018);
    };
};
