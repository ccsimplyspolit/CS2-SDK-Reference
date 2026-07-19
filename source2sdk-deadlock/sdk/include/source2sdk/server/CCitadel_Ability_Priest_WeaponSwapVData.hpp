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
        // Size: 0x1a98
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Priest_WeaponSwapVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SelfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SelfModifier;
            char m_SelfModifier[0x10]; // 0x1818            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1828            
            // metadata: MPropertyStartGroup "Gameplay"
            // m_NewWeaponAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSubclassName<4> m_NewWeaponAbility;
            char m_NewWeaponAbility[0x10]; // 0x1838            
            float m_flMinTimeBeforeSwappingBack; // 0x1848            
            uint8_t _pad184c[0x4]; // 0x184c
            // metadata: MPropertyStartGroup "Visuals"
            // m_CrossbowEntImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CrossbowEntImpactParticle;
            char m_CrossbowEntImpactParticle[0xe0]; // 0x1850            
            // m_CrossbowImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CrossbowImpactParticle;
            char m_CrossbowImpactParticle[0xe0]; // 0x1930            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceSwapWeapons; // 0x1a10            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Priest_WeaponSwapVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Priest_WeaponSwapVData) == 0x1a98);
    };
};
