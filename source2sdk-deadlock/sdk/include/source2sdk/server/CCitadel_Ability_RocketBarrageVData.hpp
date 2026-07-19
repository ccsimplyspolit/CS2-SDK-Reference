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
        // Size: 0x19d8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_RocketBarrageVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BarrageModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BarrageModifier;
            char m_BarrageModifier[0x10]; // 0x1818            
            // m_MoveSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_MoveSlowModifier;
            char m_MoveSlowModifier[0x10]; // 0x1828            
            // metadata: MPropertyStartGroup "Visuals"
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x1838            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strExplodeSound; // 0x1918            
            CSoundEventName m_strBarrageSound; // 0x1928            
            CSoundEventName m_strBarrageLoop; // 0x1938            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceSelected; // 0x1948            
            // metadata: MPropertyStartGroup "+Rocket Barrage Properties"
            float m_flMoveSpeedReductionPct; // 0x19d0            
            float m_flHeightTestDistance; // 0x19d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_RocketBarrageVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_RocketBarrageVData) == 0x19d8);
    };
};
