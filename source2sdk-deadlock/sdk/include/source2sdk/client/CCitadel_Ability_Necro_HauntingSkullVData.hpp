#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x20b8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_HauntingSkullVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_JarExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JarExplodeParticle;
            char m_JarExplodeParticle[0xe0]; // 0x1818            
            // m_SkullFriendlyFoundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SkullFriendlyFoundParticle;
            char m_SkullFriendlyFoundParticle[0xe0]; // 0x18f8            
            // m_SkullTargetDashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SkullTargetDashParticle;
            char m_SkullTargetDashParticle[0xe0]; // 0x19d8            
            // m_SkullHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SkullHitParticle;
            char m_SkullHitParticle[0xe0]; // 0x1ab8            
            // m_SkullExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SkullExplodeParticle;
            char m_SkullExplodeParticle[0xe0]; // 0x1b98            
            // m_ResourceGainedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ResourceGainedParticle;
            char m_ResourceGainedParticle[0xe0]; // 0x1c78            
            // m_HeroResourceGainedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HeroResourceGainedParticle;
            char m_HeroResourceGainedParticle[0xe0]; // 0x1d58            
            // m_SkullModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_SkullModel;
            char m_SkullModel[0xe0]; // 0x1e38            
            float m_flSkullScale; // 0x1f18            
            uint8_t _pad1f1c[0x4]; // 0x1f1c
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_ResourceGainedSound; // 0x1f20            
            CSoundEventName m_HeroResourceGainedSound; // 0x1f30            
            CSoundEventName m_JarExplodeSound; // 0x1f40            
            CSoundEventName m_SkullHitSound; // 0x1f50            
            CSoundEventName m_SkullKilledSound; // 0x1f60            
            CSoundEventName m_SkullAttackSound; // 0x1f70            
            CSoundEventName m_SkullLoopStartSound; // 0x1f80            
            CSoundEventName m_SkullLoopEndSound; // 0x1f90            
            CSoundEventName m_SkullLoopSound; // 0x1fa0            
            CSoundEventName m_SkullLastHitSound; // 0x1fb0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_AreaModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_AreaModifier;
            char m_AreaModifier[0x10]; // 0x1fc0            
            // m_SummonModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SummonModifier;
            char m_SummonModifier[0x10]; // 0x1fd0            
            // m_SummonBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SummonBuffModifier;
            char m_SummonBuffModifier[0x10]; // 0x1fe0            
            // m_StackingDebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_StackingDebuffModifier;
            char m_StackingDebuffModifier[0x10]; // 0x1ff0            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x2000            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flSkullRadius; // 0x2010            
            bool m_bAllowStackingDamageFromGun; // 0x2014            
            uint8_t _pad2015[0x3]; // 0x2015
            float m_flInitialVelocityVariance; // 0x2018            
            float m_flDrag; // 0x201c            
            float m_flCurlNoiseStrength; // 0x2020            
            float m_flCurlNoiseStrengthDuringTarget; // 0x2024            
            float m_flCurlNoiseStrengthDuringFriendly; // 0x2028            
            float m_flCurlNoiseMinFrequency; // 0x202c            
            float m_flCurlNoiseMaxFrequency; // 0x2030            
            float m_flBobbingFrequency; // 0x2034            
            float m_flBobbingStrength; // 0x2038            
            float m_flFloorSpringLength; // 0x203c            
            float m_flFloorSpringStrength; // 0x2040            
            uint8_t _pad2044[0x4]; // 0x2044
            CPiecewiseCurve m_flTargetForwardSpeed; // 0x2048            
            float m_flTargetHitRecoilRatio; // 0x2088            
            float m_flTargetHitRecoilRandomness; // 0x208c            
            float m_flTargetHitUpVelocity; // 0x2090            
            float m_flFriendlyChaseAcceleration; // 0x2094            
            float m_flFriendlyChaseMaxSpeed; // 0x2098            
            float m_flFriendlyChaseMinDistance; // 0x209c            
            float m_flFriendlyChaseMaxDistance; // 0x20a0            
            float m_flFriendlyChaseRandomPositionDistance; // 0x20a4            
            float m_flFriendlyChaseBufferDelay; // 0x20a8            
            float m_flPriorityTargetLingerDuration; // 0x20ac            
            float m_flSkullMeleeRange; // 0x20b0            
            uint8_t _pad20b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_HauntingSkullVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Necro_HauntingSkullVData) == 0x20b8);
    };
};
