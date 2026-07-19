#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/CCitadelProjectileTrackingParams.hpp"
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
        // Size: 0xb48
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_DazzlingOrbWatcherVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x750            
            // m_NextTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_NextTargetModifier;
            char m_NextTargetModifier[0x10]; // 0x760            
            // m_OrbFriendlyBounceWatcherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_OrbFriendlyBounceWatcherModifier;
            char m_OrbFriendlyBounceWatcherModifier[0x10]; // 0x770            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strExplodeSound; // 0x780            
            CSoundEventName m_strFinalExplodeSound; // 0x790            
            CSoundEventName m_strWorldHitSound; // 0x7a0            
            CSoundEventName m_strGraceLoopSound; // 0x7b0            
            CSoundEventName m_strExpireSound; // 0x7c0            
            // metadata: MPropertyStartGroup "Visuals"
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x7d0            
            // m_BounceParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BounceParticle;
            char m_BounceParticle[0xe0]; // 0x8b0            
            // m_GraceParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GraceParticle;
            char m_GraceParticle[0xe0]; // 0x990            
            // metadata: MPropertyStartGroup "Gameplay"
            CPiecewiseCurve m_BouncePositionCurve; // 0xa70            
            float m_flMinProjectileTravelTime; // 0xab0            
            uint8_t _pad0ab4[0x4]; // 0xab4
            source2sdk::client::CCitadelProjectileTrackingParams m_TrackingParams; // 0xab8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_DazzlingOrbWatcherVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_DazzlingOrbWatcherVData) == 0xb48);
    };
};
