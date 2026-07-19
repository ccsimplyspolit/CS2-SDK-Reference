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
        // Size: 0x970
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelModifierTier3BossAoeWaveAuraVData : public source2sdk::server::CCitadelModifierAuraVData
        {
        public:
            float m_flWaveHeight; // 0x7a8            
            uint8_t _pad07ac[0x4]; // 0x7ac
            // metadata: MPropertyGroupName "Visuals"
            // m_AmberWaveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberWaveParticle;
            char m_AmberWaveParticle[0xe0]; // 0x7b0            
            // m_SapphWaveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphWaveParticle;
            char m_SapphWaveParticle[0xe0]; // 0x890            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelModifierTier3BossAoeWaveAuraVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelModifierTier3BossAoeWaveAuraVData) == 0x970);
    };
};
