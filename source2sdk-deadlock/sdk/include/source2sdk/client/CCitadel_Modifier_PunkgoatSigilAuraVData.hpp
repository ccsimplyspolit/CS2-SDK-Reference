#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x890
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_PunkgoatSigilAuraVData : public source2sdk::client::CCitadelModifierAuraVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_WaveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WaveParticle;
            char m_WaveParticle[0xe0]; // 0x7a8            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flHeight; // 0x888            
            uint8_t _pad088c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PunkgoatSigilAuraVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_PunkgoatSigilAuraVData) == 0x890);
    };
};
