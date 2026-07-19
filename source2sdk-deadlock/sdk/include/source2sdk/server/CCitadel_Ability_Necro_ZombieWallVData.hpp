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
        // Size: 0x1ad8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_ZombieWallVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_WallParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallParticle;
            char m_WallParticle[0xe0]; // 0x1818            
            // m_WallWarningEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallWarningEffect;
            char m_WallWarningEffect[0xe0]; // 0x18f8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x10]; // 0x19d8            
            // m_GroundAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GroundAuraModifier;
            char m_GroundAuraModifier[0x10]; // 0x19e8            
            // m_TetherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_TetherModifier;
            char m_TetherModifier[0x10]; // 0x19f8            
            // metadata: MPropertyStartGroup "+Gameplay"
            float m_flMiddleStitchDistance; // 0x1a08            
            float m_flTraceRadius; // 0x1a0c            
            float m_flDistanceAboveGround; // 0x1a10            
            float m_flFloatDownRate; // 0x1a14            
            float m_flClimbHeight; // 0x1a18            
            float m_flStepDownHeight; // 0x1a1c            
            float m_flCurlNoiseFrequency; // 0x1a20            
            uint8_t _pad1a24[0x4]; // 0x1a24
            CPiecewiseCurve m_CurlNoiseStrengthCurve; // 0x1a28            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strWallHitSound; // 0x1a68            
            CSoundEventName m_strWallPopSound; // 0x1a78            
            CSoundEventName m_strWallBeamStartSound; // 0x1a88            
            CSoundEventName m_strWallBeamStopSound; // 0x1a98            
            CSoundEventName m_strWallBeamPointStartLoopSound; // 0x1aa8            
            CSoundEventName m_strWallBeamPointEndLoopSound; // 0x1ab8            
            CSoundEventName m_strWallBeamPointClosestLoopSound; // 0x1ac8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_ZombieWallVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Necro_ZombieWallVData) == 0x1ad8);
    };
};
