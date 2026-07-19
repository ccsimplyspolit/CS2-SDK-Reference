#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
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
        // Size: 0x1948
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityStormCloudVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_AoEPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEPreviewParticle;
            char m_AoEPreviewParticle[0xe0]; // 0x1818            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_StormCloudModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_StormCloudModifier;
            char m_StormCloudModifier[0x10]; // 0x18f8            
            // m_LightningStrikeAOEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_LightningStrikeAOEModifier;
            char m_LightningStrikeAOEModifier[0x10]; // 0x1908            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strLightningStrikeCast; // 0x1918            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flOscillateFrequency; // 0x1928            
            float m_flOscillateSpeed; // 0x192c            
            float m_flOscillateSpeedStart; // 0x1930            
            float m_flOscillateStartOffset; // 0x1934            
            float m_flAirDrag; // 0x1938            
            float m_flFlightAirDrag; // 0x193c            
            float m_flVerticalMoveSpeedPercent; // 0x1940            
            float m_flAirAcceleration; // 0x1944            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityStormCloudVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityStormCloudVData) == 0x1948);
    };
};
