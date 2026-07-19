#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
        // Size: 0x1aa0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbility_Mirage_Tornado_VData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_TornadoCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TornadoCastParticle;
            char m_TornadoCastParticle[0xe0]; // 0x1818            
            // m_PurgeCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PurgeCastParticle;
            char m_PurgeCastParticle[0xe0]; // 0x18f8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_WhirlwindEvasionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_WhirlwindEvasionModifier;
            char m_WhirlwindEvasionModifier[0x10]; // 0x19d8            
            // m_TornadoAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_TornadoAura;
            char m_TornadoAura[0x10]; // 0x19e8            
            // m_GrenadeTrailModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GrenadeTrailModifier;
            char m_GrenadeTrailModifier[0x10]; // 0x19f8            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceTravelingInTornado; // 0x1a08            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_PurgeSound; // 0x1a90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Mirage_Tornado_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Mirage_Tornado_VData) == 0x1aa0);
    };
};
