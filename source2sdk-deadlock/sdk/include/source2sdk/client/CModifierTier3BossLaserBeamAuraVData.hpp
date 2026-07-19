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
        // Size: 0x968
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierTier3BossLaserBeamAuraVData : public source2sdk::client::CCitadelModifierAuraVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_AmberGroundEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberGroundEffect;
            char m_AmberGroundEffect[0xe0]; // 0x7a8            
            // m_SapphGroundEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphGroundEffect;
            char m_SapphGroundEffect[0xe0]; // 0x888            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierTier3BossLaserBeamAuraVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierTier3BossLaserBeamAuraVData) == 0x968);
    };
};
