#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
        // Size: 0xae0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierTier3BossLaserBeamDebuffVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            float m_flTickRate; // 0x750            
            float m_flNPCDPS; // 0x754            
            float m_flPlayerDPS; // 0x758            
            float m_flMaxHealthDPS; // 0x75c            
            // metadata: MPropertyStartGroup "Visuals"
            // m_AmberStatusEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberStatusEffect;
            char m_AmberStatusEffect[0xe0]; // 0x760            
            // m_AmberEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberEffect;
            char m_AmberEffect[0xe0]; // 0x840            
            // m_SapphStatusEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphStatusEffect;
            char m_SapphStatusEffect[0xe0]; // 0x920            
            // m_SapphEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphEffect;
            char m_SapphEffect[0xe0]; // 0xa00            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierTier3BossLaserBeamDebuffVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifierTier3BossLaserBeamDebuffVData) == 0xae0);
    };
};
