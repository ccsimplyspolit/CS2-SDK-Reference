#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Ability_BaseHeldItemVData.hpp"

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
        // Size: 0x1cf0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_GoldenIdolVData : public source2sdk::server::CCitadel_Ability_BaseHeldItemVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_OnKnockedOffHolderParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_OnKnockedOffHolderParticle;
            char m_OnKnockedOffHolderParticle[0xe0]; // 0x1900            
            // m_OnKnockedOffUrnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_OnKnockedOffUrnParticle;
            char m_OnKnockedOffUrnParticle[0xe0]; // 0x19e0            
            // m_OnOverheldDamageParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_OnOverheldDamageParticle;
            char m_OnOverheldDamageParticle[0xe0]; // 0x1ac0            
            // m_OnExpireParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_OnExpireParticle;
            char m_OnExpireParticle[0xe0]; // 0x1ba0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strUrnMeleeDropSound; // 0x1c80            
            CSoundEventName m_strUrnOverheldDamageSound; // 0x1c90            
            CSoundEventName m_strUrnDroppedOffSound; // 0x1ca0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DropoffTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DropoffTimerModifier;
            char m_DropoffTimerModifier[0x10]; // 0x1cb0            
            // m_HoldingIdolModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_HoldingIdolModifier;
            char m_HoldingIdolModifier[0x10]; // 0x1cc0            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flRevealTime; // 0x1cd0            
            std::int32_t m_iComebackBounty; // 0x1cd4            
            float m_flDamageTickRate; // 0x1cd8            
            float m_flMaxHealthDamage; // 0x1cdc            
            float m_flTimeToDamage; // 0x1ce0            
            float m_flTimeToRunBackInstantly; // 0x1ce4            
            float m_flHeldTimeRadius; // 0x1ce8            
            float m_flJuggleTimeAdd; // 0x1cec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_GoldenIdolVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_GoldenIdolVData) == 0x1cf0);
    };
};
