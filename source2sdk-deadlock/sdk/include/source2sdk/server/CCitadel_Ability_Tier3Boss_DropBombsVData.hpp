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
        // Size: 0x1e10
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Tier3Boss_DropBombsVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_AmberExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberExplodeParticle;
            char m_AmberExplodeParticle[0xe0]; // 0x1818            
            // m_AmberAoeWarningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberAoeWarningParticle;
            char m_AmberAoeWarningParticle[0xe0]; // 0x18f8            
            // m_AmberAoeWarningGroundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberAoeWarningGroundParticle;
            char m_AmberAoeWarningGroundParticle[0xe0]; // 0x19d8            
            // m_SapphExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphExplodeParticle;
            char m_SapphExplodeParticle[0xe0]; // 0x1ab8            
            // m_SapphAoeWarningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphAoeWarningParticle;
            char m_SapphAoeWarningParticle[0xe0]; // 0x1b98            
            // m_SapphAoeWarningGroundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphAoeWarningGroundParticle;
            char m_SapphAoeWarningGroundParticle[0xe0]; // 0x1c78            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_AmberAOEWarningSound; // 0x1d58            
            CSoundEventName m_AmberAOEImpactSound; // 0x1d68            
            CSoundEventName m_SapphireAOEWarningSound; // 0x1d78            
            CSoundEventName m_SapphireAOEImpactSound; // 0x1d88            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strLaunchSound; // 0x1d98            
            CSoundEventName m_strLandSound; // 0x1da8            
            CSoundEventName m_strExplodeSound; // 0x1db8            
            // metadata: MPropertyGroupName "Modifiers"
            // m_CurseModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_CurseModifier;
            char m_CurseModifier[0x10]; // 0x1dc8            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flExplodeRadius; // 0x1dd8            
            float m_flBombOffsets; // 0x1ddc            
            float m_flBaseDamage; // 0x1de0            
            float m_flDamageNonPlayer; // 0x1de4            
            float m_flMaxHealthPctDamage; // 0x1de8            
            float m_flDebuffDuration; // 0x1dec            
            float m_flCooldownMax; // 0x1df0            
            float m_flCooldownMin; // 0x1df4            
            float m_flDetonationTimeMax; // 0x1df8            
            float m_flDetonationTimeMin; // 0x1dfc            
            float m_flBossHealthMax; // 0x1e00            
            float m_flBossHealthMin; // 0x1e04            
            float m_flBombDropDist; // 0x1e08            
            float m_flWarningOffset; // 0x1e0c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tier3Boss_DropBombsVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Tier3Boss_DropBombsVData) == 0x1e10);
    };
};
