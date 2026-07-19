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
        // Size: 0x1a28
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Werewolf_TransformationVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ReadyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ReadyModifier;
            char m_ReadyModifier[0x10]; // 0x1818            
            // m_WerewolfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_WerewolfModifier;
            char m_WerewolfModifier[0x10]; // 0x1828            
            // m_KillCreditModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_KillCreditModifier;
            char m_KillCreditModifier[0x10]; // 0x1838            
            // metadata: MPropertyStartGroup "Visuals"
            // m_TransformEndParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TransformEndParticle;
            char m_TransformEndParticle[0xe0]; // 0x1848            
            // m_TransformKillParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TransformKillParticle;
            char m_TransformKillParticle[0xe0]; // 0x1928            
            // metadata: MPropertyStartGroup "Gameplay"
            bool m_bAutoTransformOnReadyComplete; // 0x1a08            
            uint8_t _pad1a09[0x7]; // 0x1a09
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strEndingWarningSound; // 0x1a10            
            // metadata: MPropertyStartGroup "AnimGraph2"
            CGlobalSymbol m_strAG2PostCastAction; // 0x1a20            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Werewolf_TransformationVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Werewolf_TransformationVData) == 0x1a28);
    };
};
