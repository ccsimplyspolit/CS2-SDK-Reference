#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifierAuraVData.hpp"

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
        // Size: 0x890
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelModifierTier2BossAoeWaveAuraVData : public source2sdk::server::CCitadelModifierAuraVData
        {
        public:
            float m_flWaveHeight; // 0x7a8            
            uint8_t _pad07ac[0x4]; // 0x7ac
            // metadata: MPropertyGroupName "Visuals"
            // m_waveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_waveParticle;
            char m_waveParticle[0xe0]; // 0x7b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelModifierTier2BossAoeWaveAuraVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelModifierTier2BossAoeWaveAuraVData) == 0x890);
    };
};
