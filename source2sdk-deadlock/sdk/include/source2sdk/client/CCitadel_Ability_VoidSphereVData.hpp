#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
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
        // Size: 0x19e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_VoidSphereVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyGroupName "Modifiers"
            // m_BubbleModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_BubbleModifier;
            char m_BubbleModifier[0x10]; // 0x1818            
            // metadata: MPropertyStartGroup "Visuals"
            // m_strCastEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strCastEffect;
            char m_strCastEffect[0xe0]; // 0x1828            
            // m_strAllyPositionPreview has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strAllyPositionPreview;
            char m_strAllyPositionPreview[0xe0]; // 0x1908            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VoidSphereVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_VoidSphereVData) == 0x19e8);
    };
};
