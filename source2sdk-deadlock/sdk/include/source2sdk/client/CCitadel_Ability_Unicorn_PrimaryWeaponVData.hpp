#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_PrimaryWeaponVData.hpp"
#include "source2sdk/client/ELOSCheck.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x1b10
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Unicorn_PrimaryWeaponVData : public source2sdk::client::CCitadel_Ability_PrimaryWeaponVData
        {
        public:
            // metadata: MPropertyStartGroup "Visual"
            // m_BatonFlameParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BatonFlameParticle;
            char m_BatonFlameParticle[0xe0]; // 0x19c0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strBounceSound; // 0x1aa0            
            CSoundEventName m_strFiringLoopSound; // 0x1ab0            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flTargetingRadius; // 0x1ac0            
            float m_flUnitHitTargetingRadius; // 0x1ac4            
            float m_flOrbHitTargetingRadius; // 0x1ac8            
            source2sdk::client::ELOSCheck m_eLosCheckType; // 0x1acc            
            std::int32_t m_nRicochetTargets; // 0x1ad0            
            float m_flRicochetPitchAddition; // 0x1ad4            
            float m_flOrbRicochetPitchAddition; // 0x1ad8            
            float m_flRicochetGravity; // 0x1adc            
            float m_flOrbRicochetConeAngle; // 0x1ae0            
            float m_flRicochetConeAngle; // 0x1ae4            
            float m_flMaxRicohetDot; // 0x1ae8            
            float m_flMinTargetDot; // 0x1aec            
            float m_flRicochetDamageScale; // 0x1af0            
            float m_flRearOffset; // 0x1af4            
            float m_flRicochetDotMaxDampening; // 0x1af8            
            float m_flRicochetDotMinDampening; // 0x1afc            
            float m_flMinVelocityDampening; // 0x1b00            
            float m_flMaxVelocityDampening; // 0x1b04            
            float m_flMinButtonHoldTimeToPlaySound; // 0x1b08            
            uint8_t _pad1b0c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Unicorn_PrimaryWeaponVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Unicorn_PrimaryWeaponVData) == 0x1b10);
    };
};
