#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x1970
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_SwingLineVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SwingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SwingModifier;
            char m_SwingModifier[0x10]; // 0x1818            
            // metadata: MPropertyStartGroup "Visuals"
            // m_SwingAttachParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SwingAttachParticle;
            char m_SwingAttachParticle[0xe0]; // 0x1828            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDaggerHitSound; // 0x1908            
            CSoundEventName m_strDaggerExplodeSound; // 0x1918            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flSwingStartDelay; // 0x1928            
            float m_flSwingMaxDuration; // 0x192c            
            float m_flMass; // 0x1930            
            float m_flBodyForwardForce; // 0x1934            
            float m_flCameraForwardForce; // 0x1938            
            float m_flInputForce; // 0x193c            
            float m_flPullForce; // 0x1940            
            float m_flGravityForce; // 0x1944            
            float m_flDampingConstant; // 0x1948            
            float m_flIdealSpringLengthOverride; // 0x194c            
            float m_flTensionSpringConstant; // 0x1950            
            float m_flMaxSpringForce; // 0x1954            
            float m_flMaxSpeed; // 0x1958            
            float m_flWhiskerLength; // 0x195c            
            float m_flWhiskerOffset; // 0x1960            
            float m_flWhiskerForce; // 0x1964            
            float m_flWhiskerPositionVerticalOffset; // 0x1968            
            uint8_t _pad196c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_SwingLineVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_SwingLineVData) == 0x1970);
    };
};
