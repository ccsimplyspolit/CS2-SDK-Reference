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
        // Size: 0xa58
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierVacuumAuraVData : public source2sdk::client::CCitadelModifierAuraVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_FinishParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FinishParticle;
            char m_FinishParticle[0xe0]; // 0x7a8            
            // m_AlliedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AlliedParticle;
            char m_AlliedParticle[0xe0]; // 0x888            
            // m_EnemyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyParticle;
            char m_EnemyParticle[0xe0]; // 0x968            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0xa48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierVacuumAuraVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierVacuumAuraVData) == 0xa58);
    };
};
