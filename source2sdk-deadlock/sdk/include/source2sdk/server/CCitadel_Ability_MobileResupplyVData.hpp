#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
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
        // Size: 0x1bd0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_MobileResupplyVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            float m_flResupplyForceScale; // 0x1818            
            float m_flResupplyUp; // 0x181c            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strKilledSound; // 0x1820            
            CSoundEventName m_strDeploySound; // 0x1830            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_AuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_AuraModifier;
            char m_AuraModifier[0x10]; // 0x1840            
            // metadata: MPropertyStartGroup "Visuals"
            // m_DispenserModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_DispenserModel;
            char m_DispenserModel[0xe0]; // 0x1850            
            // m_SprayParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SprayParticle;
            char m_SprayParticle[0xe0]; // 0x1930            
            // m_DestroyedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DestroyedParticle;
            char m_DestroyedParticle[0xe0]; // 0x1a10            
            // m_DeployParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeployParticle;
            char m_DeployParticle[0xe0]; // 0x1af0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_MobileResupplyVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_MobileResupplyVData) == 0x1bd0);
    };
};
