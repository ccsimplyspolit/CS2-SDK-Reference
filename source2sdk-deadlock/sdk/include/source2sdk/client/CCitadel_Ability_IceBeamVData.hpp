#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_Base_Buildup.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
        // Size: 0x1a70
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_IceBeamVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            float m_SplitBeamWidth; // 0x1818            
            uint8_t _pad181c[0x4]; // 0x181c
            // metadata: MPropertyStartGroup "Visuals"
            // m_BeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticle;
            char m_BeamParticle[0xe0]; // 0x1820            
            // m_HitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle;
            char m_HitParticle[0xe0]; // 0x1900            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_IceBeamModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_IceBeamModifier;
            char m_IceBeamModifier[0x10]; // 0x19e0            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x19f0            
            // m_BuildupModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadel_Modifier_Base_Buildup> m_BuildupModifier;
            char m_BuildupModifier[0x10]; // 0x1a00            
            // m_BuildupProcModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BuildupProcModifier;
            char m_BuildupProcModifier[0x10]; // 0x1a10            
            // metadata: MPropertyStartGroup "Sound"
            CSoundEventName m_BeamStartSound; // 0x1a20            
            CSoundEventName m_BeamStopSound; // 0x1a30            
            CSoundEventName m_BeamPointStartLoopSound; // 0x1a40            
            CSoundEventName m_BeamPointEndLoopSound; // 0x1a50            
            CSoundEventName m_BeamPointClosestLoopSound; // 0x1a60            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_IceBeamVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_IceBeamVData) == 0x1a70);
    };
};
