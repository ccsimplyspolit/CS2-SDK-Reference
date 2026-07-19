#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CCitadelYamatoBaseVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
        // Size: 0x1eb0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelAbilityFlyingStrikeVData : public source2sdk::client::CCitadelYamatoBaseVData
        {
        public:
            // metadata: MPropertyStartGroup "+Cast Properties"
            float m_flJumpFallSpeedMax; // 0x1820            
            float m_flJumpAirDrag; // 0x1824            
            float m_flJumpAirSpeedMax; // 0x1828            
            // metadata: MPropertyStartGroup "+Flying to Target Properties"
            // metadata: MPropertyDescription "When cancelling flying strike while flying, how much extra vertical speed to add"
            float m_flOnCancelVerticalSpeedBonus; // 0x182c            
            float m_flFlyingCloseEnoughToTarget; // 0x1830            
            uint8_t _pad1834[0x4]; // 0x1834
            CPiecewiseCurve m_curveSpeedScale; // 0x1838            
            // metadata: MPropertyStartGroup "+Attack Properties"
            float m_flAnimToStrikePointTime; // 0x1878            
            float m_flAnimToStrikeArrivalBias; // 0x187c            
            // metadata: MPropertyStartGroup "+Grapple Properties"
            float m_flGrappleShotFloatTime; // 0x1880            
            float m_flGrappleShotDelayToFlyOnHit; // 0x1884            
            float m_flGrappleSpeed; // 0x1888            
            uint8_t _pad188c[0x4]; // 0x188c
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1890            
            // m_GrappleTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_GrappleTargetModifier;
            char m_GrappleTargetModifier[0x10]; // 0x18a0            
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_BuffModifier;
            char m_BuffModifier[0x10]; // 0x18b0            
            // metadata: MPropertyStartGroup "Visuals"
            // m_LeapParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LeapParticle;
            char m_LeapParticle[0xe0]; // 0x18c0            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x19a0            
            // m_SlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashParticle;
            char m_SlashParticle[0xe0]; // 0x1a80            
            // m_BulletGrappleTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle;
            char m_BulletGrappleTracerParticle[0xe0]; // 0x1b60            
            // m_EnemyGrappleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle;
            char m_EnemyGrappleParticle[0xe0]; // 0x1c40            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDamageTarget; // 0x1d20            
            CSoundEventName m_strStartFlyingToTarget; // 0x1d30            
            CSoundEventName m_strStartAttack; // 0x1d40            
            CSoundEventName m_strGrappleHitTarget; // 0x1d50            
            CSoundEventName m_strGrappleHitWorld; // 0x1d60            
            CSoundEventName m_strGrappleHitNothing; // 0x1d70            
            CSoundEventName m_strGrappleLoop; // 0x1d80            
            CSoundEventName m_strFlyingLoop; // 0x1d90            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1da0            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1e28            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelAbilityFlyingStrikeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelAbilityFlyingStrikeVData) == 0x1eb0);
    };
};
