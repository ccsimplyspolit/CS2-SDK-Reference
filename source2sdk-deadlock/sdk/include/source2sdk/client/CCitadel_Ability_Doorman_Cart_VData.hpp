#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
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
        // Size: 0x1cd0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Cart_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "+Gameplay"
            float m_flTraceRadius; // 0x1818            
            float m_flDistanceAboveGround; // 0x181c            
            float m_flFloatDownRate; // 0x1820            
            float m_flClimbHeight; // 0x1824            
            float m_flStepDownHeight; // 0x1828            
            float m_flMinPitch; // 0x182c            
            float m_flMaxPitch; // 0x1830            
            float m_flJumpHeight; // 0x1834            
            float m_flQAngleSmoothRate; // 0x1838            
            float m_flCartSpeedFast; // 0x183c            
            CPiecewiseCurve m_flGroundHitPitchCurve; // 0x1840            
            CPiecewiseCurve m_flGroundHitRollCurve; // 0x1880            
            CPiecewiseCurve m_flGroundHitYawCurve; // 0x18c0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ModifierDrag has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_ModifierDrag;
            char m_ModifierDrag[0x10]; // 0x1900            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_CartExpireSound; // 0x1910            
            CSoundEventName m_CartHitSound; // 0x1920            
            CSoundEventName m_CartHitAllySound; // 0x1930            
            CSoundEventName m_strWallSlamSound; // 0x1940            
            // metadata: MPropertyStartGroup "Visuals"
            // m_FriendlyCastProjectileTrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FriendlyCastProjectileTrailParticle;
            char m_FriendlyCastProjectileTrailParticle[0xe0]; // 0x1950            
            // m_FriendlyCastProjectileModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_FriendlyCastProjectileModel;
            char m_FriendlyCastProjectileModel[0xe0]; // 0x1a30            
            // m_CartCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CartCastParticle;
            char m_CartCastParticle[0xe0]; // 0x1b10            
            // m_WallImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactParticle;
            char m_WallImpactParticle[0xe0]; // 0x1bf0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Cart_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Doorman_Cart_VData) == 0x1cd0);
    };
};
