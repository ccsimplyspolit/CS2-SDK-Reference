#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x960
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelModifierChronoPulseGrenadePulseAreaVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x750            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x760            
            // metadata: MPropertyStartGroup "Visuals"
            // m_PreviewRingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PreviewRingParticle;
            char m_PreviewRingParticle[0xe0]; // 0x770            
            // m_AreaEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AreaEffect;
            char m_AreaEffect[0xe0]; // 0x850            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strArmingSound; // 0x930            
            CSoundEventName m_strArmedSound; // 0x940            
            CSoundEventName m_strHitSound; // 0x950            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelModifierChronoPulseGrenadePulseAreaVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelModifierChronoPulseGrenadePulseAreaVData) == 0x960);
    };
};
