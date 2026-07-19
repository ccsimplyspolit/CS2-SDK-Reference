#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
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
        // Size: 0x1d30
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityLashDownStrikeVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_TargetPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetPreviewParticle;
            char m_TargetPreviewParticle[0xe0]; // 0x1818            
            // metadata: MPropertyLeafSuggestionProviderFn
            CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x18f8            
            // metadata: MPropertyLeafSuggestionProviderFn
            CGlobalSymbol m_strAirCastAnimGraphParam; // 0x1900            
            // m_StompParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompParticle;
            char m_StompParticle[0xe0]; // 0x1908            
            // m_StompLineParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineParticle;
            char m_StompLineParticle[0xe0]; // 0x19e8            
            // m_StompLineObstructedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineObstructedParticle;
            char m_StompLineObstructedParticle[0xe0]; // 0x1ac8            
            // m_StompImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactParticle;
            char m_StompImpactParticle[0xe0]; // 0x1ba8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_StompExplosionSound; // 0x1c88            
            CSoundEventName m_StompEnemyImpactSound; // 0x1c98            
            CSoundEventName m_strFallCollideImpactSound; // 0x1ca8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DownStrikeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_DownStrikeModifier;
            char m_DownStrikeModifier[0x10]; // 0x1cb8            
            // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ImpactModifier;
            char m_ImpactModifier[0x10]; // 0x1cc8            
            // m_DragModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_DragModifier;
            char m_DragModifier[0x10]; // 0x1cd8            
            // metadata: MPropertyStartGroup "+Down Strike Params"
            float m_flHeightUILingerTime; // 0x1ce8            
            float m_flDamageFrustumHalfWidth; // 0x1cec            
            float m_flDamageFrustumAngle; // 0x1cf0            
            float m_flDamageWaveSpeed; // 0x1cf4            
            float m_flDamageTraceProbeDamageRadius; // 0x1cf8            
            float m_flDamageTraceProbeWorldRadius; // 0x1cfc            
            float m_flDamageTraceProbeStepUpHeight; // 0x1d00            
            float m_flDamageTraceProbeStepDownHeight; // 0x1d04            
            float m_flDamageTraceProbeDropDownRate; // 0x1d08            
            float m_flInitialDamageRadiusInMeters; // 0x1d0c            
            std::int32_t m_nGroundCrackGap; // 0x1d10            
            float m_flGroupLengthTolerance; // 0x1d14            
            float m_flDamageEffectScaleMin; // 0x1d18            
            float m_flDamageEffectScaleMax; // 0x1d1c            
            float m_flTrackAmount; // 0x1d20            
            float m_flCollideRadius; // 0x1d24            
            float m_flMaxTurnAmount; // 0x1d28            
            uint8_t _pad1d2c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityLashDownStrikeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityLashDownStrikeVData) == 0x1d30);
    };
};
