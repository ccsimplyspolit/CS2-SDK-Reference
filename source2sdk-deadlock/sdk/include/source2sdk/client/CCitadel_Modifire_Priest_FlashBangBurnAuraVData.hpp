#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierAuraVData.hpp"
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
        // Size: 0x898
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifire_Priest_FlashBangBurnAuraVData : public source2sdk::client::CCitadelModifierAuraVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BurnModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BurnModifier;
            char m_BurnModifier[0x10]; // 0x7a8            
            // metadata: MPropertyStartGroup "Visuals"
            // m_RadiusParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RadiusParticle;
            char m_RadiusParticle[0xe0]; // 0x7b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifire_Priest_FlashBangBurnAuraVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifire_Priest_FlashBangBurnAuraVData) == 0x898);
    };
};
