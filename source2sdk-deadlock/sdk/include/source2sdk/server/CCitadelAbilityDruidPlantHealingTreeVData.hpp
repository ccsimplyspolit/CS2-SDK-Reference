#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x1bb8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelAbilityDruidPlantHealingTreeVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_HealingTreeModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_HealingTreeModel;
            char m_HealingTreeModel[0xe0]; // 0x1818            
            // m_HealingFruitModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_HealingFruitModel;
            char m_HealingFruitModel[0xe0]; // 0x18f8            
            // m_FruitGlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FruitGlowParticle;
            char m_FruitGlowParticle[0xe0]; // 0x19d8            
            // m_FruitPickupParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FruitPickupParticle;
            char m_FruitPickupParticle[0xe0]; // 0x1ab8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_HealingAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_HealingAuraModifier;
            char m_HealingAuraModifier[0x10]; // 0x1b98            
            // m_HealingFruitModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_HealingFruitModifier;
            char m_HealingFruitModifier[0x10]; // 0x1ba8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelAbilityDruidPlantHealingTreeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelAbilityDruidPlantHealingTreeVData) == 0x1bb8);
    };
};
