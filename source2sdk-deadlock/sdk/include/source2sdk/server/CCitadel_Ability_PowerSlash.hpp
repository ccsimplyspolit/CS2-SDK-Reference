#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseYamatoAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x1640
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nPowerLevel"
        #pragma pack(push, 1)
        class CCitadel_Ability_PowerSlash : public source2sdk::server::CCitadelBaseYamatoAbility
        {
        public:
            uint8_t _pad0f78[0x20]; // 0xf78
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPowerLevel; // 0xf98            
            uint8_t _pad0f9c[0x4]; // 0xf9c
            // m_vecHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitTargets;
            char m_vecHitTargets[0x18]; // 0xfa0            
            source2sdk::client::ParticleIndex_t m_nCastParticle; // 0xfb8            
            uint8_t _pad0fbc[0x684];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PowerSlash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PowerSlash) == 0x1640);
    };
};
