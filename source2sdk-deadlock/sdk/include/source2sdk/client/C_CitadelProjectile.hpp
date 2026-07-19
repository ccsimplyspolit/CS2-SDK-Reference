#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"

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
        // Size: 0xad8
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_flTimeScale"
        // static metadata: MNetworkOverride "m_flTimeScale"
        // static metadata: MNetworkOverride "m_flTimeScale"
        // static metadata: MNetworkVarNames "Vector m_vInitialVelocity"
        // static metadata: MNetworkVarNames "VectorWS m_vInitialPosition"
        // static metadata: MNetworkVarNames "AbilityID_t m_abilityID"
        // static metadata: MNetworkVarNames "string_t m_sParticleName"
        // static metadata: MNetworkVarNames "Vector m_vecSpawnPosition"
        // static metadata: MNetworkVarNames "float m_flProjectileSpeed"
        // static metadata: MNetworkVarNames "float m_flMaxLifetime"
        #pragma pack(push, 1)
        class C_CitadelProjectile : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad09a8[0x40]; // 0x9a8
            float m_flMaxDistance; // 0x9e8            
            uint8_t _pad09ec[0x4]; // 0x9ec
            std::uint64_t m_nCachedExcludeFlags; // 0x9f0            
            bool m_bInPortalEnvironment; // 0x9f8            
            bool m_bHandlingPortalResult; // 0x9f9            
            uint8_t _pad09fa[0x2]; // 0x9fa
            float m_flArmingTime; // 0x9fc            
            float m_flChargeAmount; // 0xa00            
            bool m_bCollideWithThrower; // 0xa04            
            bool m_bNewCollideWithThrower; // 0xa05            
            uint8_t _pad0a06[0xa]; // 0xa06
            float m_flTickSoundInterval; // 0xa10            
            uint8_t _pad0a14[0x4]; // 0xa14
            // metadata: MNetworkEnable
            Vector m_vInitialVelocity; // 0xa18            
            // metadata: MNetworkEnable
            VectorWS m_vInitialPosition; // 0xa24            
            // metadata: MNetworkEnable
            CUtlStringToken m_abilityID; // 0xa30            
            uint8_t _pad0a34[0x4]; // 0xa34
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_sParticleName; // 0xa38            
            // metadata: MNetworkEnable
            Vector m_vecSpawnPosition; // 0xa40            
            // metadata: MNetworkEnable
            float m_flProjectileSpeed; // 0xa4c            
            // metadata: MNetworkEnable
            float m_flMaxLifetime; // 0xa50            
            uint8_t _pad0a54[0x4]; // 0xa54
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ParticleRadiusChanged"
            float m_flParticleRadius; // 0xa58            
            uint8_t _pad0a5c[0x74]; // 0xa5c
            float m_flPreviousTimeScale; // 0xad0            
            uint8_t _pad0ad4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelProjectile) == 0xad8);
    };
};
