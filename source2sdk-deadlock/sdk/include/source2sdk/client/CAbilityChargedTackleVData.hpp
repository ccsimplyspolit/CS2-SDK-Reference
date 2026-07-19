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
        // Size: 0x1938
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityChargedTackleVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyGroupName "Visuals"
            // m_ChargePreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargePreviewParticle;
            char m_ChargePreviewParticle[0xe0]; // 0x1818            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ChargePrepareModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ChargePrepareModifier;
            char m_ChargePrepareModifier[0x10]; // 0x18f8            
            // m_ChargeActiveModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ChargeActiveModifier;
            char m_ChargeActiveModifier[0x10]; // 0x1908            
            // m_DragModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DragModifier;
            char m_DragModifier[0x10]; // 0x1918            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_strHitSound; // 0x1928            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityChargedTackleVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityChargedTackleVData) == 0x1938);
    };
};
