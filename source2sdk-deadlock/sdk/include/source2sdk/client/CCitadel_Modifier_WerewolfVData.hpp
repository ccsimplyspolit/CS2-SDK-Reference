#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"
#include "source2sdk/client/HeroCardOverride_t.hpp"
#include "source2sdk/client/ModelChange_t.hpp"
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
        // Size: 0x988
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_WerewolfVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Gameplay"
            // m_mapWerewolfAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EAbilitySlots_t,CSubclassName<4>> m_mapWerewolfAbilities;
            char m_mapWerewolfAbilities[0x28]; // 0x750            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_StackingBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_StackingBuffModifier;
            char m_StackingBuffModifier[0x10]; // 0x778            
            // metadata: MPropertyStartGroup "Visuals"
            // m_BuffEndingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BuffEndingParticle;
            char m_BuffEndingParticle[0xe0]; // 0x788            
            source2sdk::client::ModelChange_t m_WerewolfModel; // 0x868            
            float m_flModelScale; // 0x950            
            uint8_t _pad0954[0x4]; // 0x954
            source2sdk::client::HeroCardOverride_t m_HeroCardOverride; // 0x958            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_WerewolfVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_WerewolfVData) == 0x988);
    };
};
