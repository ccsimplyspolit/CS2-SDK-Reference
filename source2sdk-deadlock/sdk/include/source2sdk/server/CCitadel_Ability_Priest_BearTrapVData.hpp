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
        // Size: 0x1a88
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Priest_BearTrapVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_ArmedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ArmedParticle;
            char m_ArmedParticle[0xe0]; // 0x1818            
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x18f8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strExpiredSound; // 0x19d8            
            CSoundEventName m_strDestroyedSound; // 0x19e8            
            CSoundEventName m_strArmSound; // 0x19f8            
            CSoundEventName m_strProjBounceSound; // 0x1a08            
            CSoundEventName m_strProjThrowLoopSound; // 0x1a18            
            CSoundEventName m_strProjArmedLoopSound; // 0x1a28            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_TetherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_TetherModifier;
            char m_TetherModifier[0x10]; // 0x1a38            
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1a48            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flVerticalSpawnOffset; // 0x1a58            
            float m_flHorizontalSpawnOffset; // 0x1a5c            
            float m_flDropDownRate; // 0x1a60            
            float m_flClimbHeight; // 0x1a64            
            float m_flDistanceAboveGround; // 0x1a68            
            float m_flDeceleration; // 0x1a6c            
            float m_flMinSpeedToArm; // 0x1a70            
            float m_flReflectSpeedReductionRatio; // 0x1a74            
            float m_flGroundYawSpeedRatio; // 0x1a78            
            float m_flAirYawSpeedRatio; // 0x1a7c            
            float m_flAirPitchSpeedRatio; // 0x1a80            
            float m_flAirRollSpeedRatio; // 0x1a84            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Priest_BearTrapVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Priest_BearTrapVData) == 0x1a88);
    };
};
