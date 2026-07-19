#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Size: 0x1600
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vStrikeVel"
        // static metadata: MNetworkVarNames "float m_flInitialYaw"
        // static metadata: MNetworkVarNames "float m_flStartHeight"
        #pragma pack(push, 1)
        class CCitadel_Ability_LashDownStrike : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x180]; // 0xf70
            source2sdk::entity2::GameTime_t m_ImpactTime; // 0x10f0            
            Vector m_vDamagePos; // 0x10f4            
            Vector m_vDamageDir; // 0x1100            
            uint8_t _pad110c[0x4]; // 0x110c
            // m_vHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitEnemies;
            char m_vHitEnemies[0x18]; // 0x1110            
            uint8_t _pad1128[0x20]; // 0x1128
            // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEntities;
            char m_vecHitEntities[0x18]; // 0x1148            
            source2sdk::client::ParticleIndex_t m_PreviewEffect; // 0x1160            
            uint8_t _pad1164[0x484]; // 0x1164
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStrikeVel; // 0x15e8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flInitialYaw; // 0x15f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flStartHeight; // 0x15f8            
            uint8_t _pad15fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_LashDownStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_LashDownStrike) == 0x1600);
    };
};
