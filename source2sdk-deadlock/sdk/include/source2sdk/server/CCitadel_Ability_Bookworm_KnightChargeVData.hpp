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
        // Size: 0x1af0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Bookworm_KnightChargeVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_KnightChargeChannelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KnightChargeChannelParticle;
            char m_KnightChargeChannelParticle[0xe0]; // 0x1818            
            // m_KnightChargeCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KnightChargeCastParticle;
            char m_KnightChargeCastParticle[0xe0]; // 0x18f8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strKnightChargeExplosionSound; // 0x19d8            
            CSoundEventName m_strCastDelayLocalPlayerSound; // 0x19e8            
            CSoundEventName m_strExpireSound; // 0x19f8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x10]; // 0x1a08            
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1a18            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flNavMeshSearchRange; // 0x1a28            
            float m_flNavMeshSearchForwardOffset; // 0x1a2c            
            float m_flObstacleAvoidanceAmount; // 0x1a30            
            float m_flGravity; // 0x1a34            
            float m_flGroundCheckDistance; // 0x1a38            
            float m_flGroundSnapDistance; // 0x1a3c            
            float m_flJumpSpeed; // 0x1a40            
            float m_flTimescale; // 0x1a44            
            float m_flHintRecoveryStrength; // 0x1a48            
            uint8_t _pad1a4c[0x4]; // 0x1a4c
            CPiecewiseCurve m_worldPositionHeightCurveX; // 0x1a50            
            CPiecewiseCurve m_worldPositionHeightCurveY; // 0x1a90            
            float m_flDestroyLeashDistance; // 0x1ad0            
            float m_flDestroyMapDistance; // 0x1ad4            
            float m_flQAngleSpringConstant; // 0x1ad8            
            float m_flMiniHopSpeedMin; // 0x1adc            
            float m_flMiniHopSpeedMax; // 0x1ae0            
            float m_flMinPitch; // 0x1ae4            
            float m_flMaxPitch; // 0x1ae8            
            bool m_bDebug; // 0x1aec            
            uint8_t _pad1aed[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bookworm_KnightChargeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Bookworm_KnightChargeVData) == 0x1af0);
    };
};
