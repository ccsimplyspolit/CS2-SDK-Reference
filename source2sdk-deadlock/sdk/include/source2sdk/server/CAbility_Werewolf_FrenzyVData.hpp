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
        // Size: 0x1ae8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbility_Werewolf_FrenzyVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_TargetModifier;
            char m_TargetModifier[0x10]; // 0x1818            
            // metadata: MPropertyStartGroup "Visuals"
            // m_AreaParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AreaParticle;
            char m_AreaParticle[0xe0]; // 0x1828            
            // m_ChargeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeParticle;
            char m_ChargeParticle[0xe0]; // 0x1908            
            // m_TargetDamageParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetDamageParticle;
            char m_TargetDamageParticle[0xe0]; // 0x19e8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strHitConfirmSound; // 0x1ac8            
            CSoundEventName m_strPointBlankSweetenerSound; // 0x1ad8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Werewolf_FrenzyVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Werewolf_FrenzyVData) == 0x1ae8);
    };
};
