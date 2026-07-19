#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1918
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_MageWalkVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyGroupName "Modifiers"
            // m_BubbleModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_BubbleModifier;
            char m_BubbleModifier[0x10]; // 0x1818            
            // m_TurretModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_TurretModifier;
            char m_TurretModifier[0x10]; // 0x1828            
            // metadata: MPropertyStartGroup "Visuals"
            // m_strCastEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strCastEffect;
            char m_strCastEffect[0xe0]; // 0x1838            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_MageWalkVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_MageWalkVData) == 0x1918);
    };
};
