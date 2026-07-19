#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelYamatoBaseVData.hpp"

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
        // Size: 0x1aa8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_InfinitySlashVData : public source2sdk::server::CCitadelYamatoBaseVData
        {
        public:
            float m_flRiseSpeed; // 0x1820            
            float m_flRiseDuration; // 0x1824            
            float m_flSpeedDecayScale; // 0x1828            
            float m_flExplodeHoldTime; // 0x182c            
            float m_flExplosionShakeAmplitude; // 0x1830            
            float m_flExplosionShakeFrequency; // 0x1834            
            float m_flExplosionShakeDuration; // 0x1838            
            uint8_t _pad183c[0x4]; // 0x183c
            // metadata: MPropertyStartGroup "Visuals"
            // m_AOERangeEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOERangeEffect;
            char m_AOERangeEffect[0xe0]; // 0x1840            
            // m_AnimCastEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AnimCastEffect;
            char m_AnimCastEffect[0xe0]; // 0x1920            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // 0x1a00            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x10]; // 0x1a88            
            // m_BuffTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BuffTimerModifier;
            char m_BuffTimerModifier[0x10]; // 0x1a98            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_InfinitySlashVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_InfinitySlashVData) == 0x1aa8);
    };
};
