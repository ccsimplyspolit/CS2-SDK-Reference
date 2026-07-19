#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTALockpickingStageDefinition.hpp"
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
        // Standard-layout class: true
        // Size: 0x1e0
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTALockpickingGameDefinition
        {
        public:
            // m_vecStages has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTALockpickingStageDefinition> m_vecStages;
            char m_vecStages[0x18]; // 0x0            
            // m_successEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_successEffect;
            char m_successEffect[0xe0]; // 0x18            
            // m_failEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_failEffect;
            char m_failEffect[0xe0]; // 0xf8            
            std::int32_t m_nScorePerUnlock; // 0x1d8            
            uint8_t _pad01dc[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTALockpickingGameDefinition, m_vecStages) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingGameDefinition, m_successEffect) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingGameDefinition, m_failEffect) == 0xf8);
        static_assert(offsetof(source2sdk::client::CDOTALockpickingGameDefinition, m_nScorePerUnlock) == 0x1d8);
        
        static_assert(sizeof(source2sdk::client::CDOTALockpickingGameDefinition) == 0x1e0);
    };
};
