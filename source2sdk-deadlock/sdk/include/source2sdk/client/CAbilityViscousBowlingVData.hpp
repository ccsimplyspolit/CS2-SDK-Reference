#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1f08
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityViscousBowlingVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_TransformStartFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TransformStartFx;
            char m_TransformStartFx[0xe0]; // 0x1818            
            // m_ExplodeFX has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeFX;
            char m_ExplodeFX[0xe0]; // 0x18f8            
            // m_WallImpactFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactFx;
            char m_WallImpactFx[0xe0]; // 0x19d8            
            // m_BallTrailFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BallTrailFx;
            char m_BallTrailFx[0xe0]; // 0x1ab8            
            // m_GroundImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundImpactParticle;
            char m_GroundImpactParticle[0xe0]; // 0x1b98            
            // m_JumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JumpParticle;
            char m_JumpParticle[0xe0]; // 0x1c78            
            // m_DirectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DirectionParticle;
            char m_DirectionParticle[0xe0]; // 0x1d58            
            // metadata: MPropertyLeafSuggestionProviderFn
            CGlobalSymbol m_strPopGraphParamter; // 0x1e38            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_BallJumpSound; // 0x1e40            
            CSoundEventName m_EnterBallSound; // 0x1e50            
            CSoundEventName m_BallLoopSound; // 0x1e60            
            CSoundEventName m_ExitBallSound; // 0x1e70            
            CSoundEventName m_WallImpactSound; // 0x1e80            
            CSoundEventName m_PlayerImpactSound; // 0x1e90            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ImpactModifier;
            char m_ImpactModifier[0x10]; // 0x1ea0            
            // m_DamagePreventionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DamagePreventionModifier;
            char m_DamagePreventionModifier[0x10]; // 0x1eb0            
            // m_RollingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_RollingModifier;
            char m_RollingModifier[0x10]; // 0x1ec0            
            // metadata: MPropertyStartGroup "+Ball Parameters"
            float m_flTransformToBallTime; // 0x1ed0            
            float m_flTransformFromBallTime; // 0x1ed4            
            float m_flAirTurnRatio; // 0x1ed8            
            float m_flWallTurnRatioMax; // 0x1edc            
            float m_flWallTurnRatioMin; // 0x1ee0            
            float m_flTurnRatio; // 0x1ee4            
            float m_flDefaultBallSpeed; // 0x1ee8            
            float m_flFastBallSpeed; // 0x1eec            
            float m_flSpeedAccel; // 0x1ef0            
            float m_flSpeedDeccel; // 0x1ef4            
            float m_flElasticity; // 0x1ef8            
            float m_flWallCheckGroundOffset; // 0x1efc            
            float m_flWallPauseTime; // 0x1f00            
            float m_flWallAngleMin; // 0x1f04            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityViscousBowlingVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityViscousBowlingVData) == 0x1f08);
    };
};
