#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
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
        // Size: 0x1958
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbility_Rutger_ForceField_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_AuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_AuraModifier;
            char m_AuraModifier[0x10]; // 0x1818            
            // m_VictimPushModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_VictimPushModifier;
            char m_VictimPushModifier[0x10]; // 0x1828            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1838            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_strDomeCreated; // 0x1848            
            CSoundEventName m_strChargeUpSound; // 0x1858            
            CSoundEventName m_strPushAndDamage; // 0x1868            
            // metadata: MPropertyStartGroup "Visuals"
            // m_ChronoSphereChargeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChronoSphereChargeParticle;
            char m_ChronoSphereChargeParticle[0xe0]; // 0x1878            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Rutger_ForceField_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Rutger_ForceField_VData) == 0x1958);
    };
};
