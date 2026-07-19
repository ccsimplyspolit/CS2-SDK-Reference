#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTASlarkJailbreakStageDefinition.hpp"

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
        // Size: 0x28
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTASlarkJailbreakGameDefinition
        {
        public:
            std::int32_t m_nPointsPerBlock; // 0x0            
            std::int32_t m_nPointsPerBonusBlock; // 0x4            
            std::int32_t m_nPointsPerCompletedLevel; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            // m_vecStages has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTASlarkJailbreakStageDefinition> m_vecStages;
            char m_vecStages[0x18]; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTASlarkJailbreakGameDefinition, m_nPointsPerBlock) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTASlarkJailbreakGameDefinition, m_nPointsPerBonusBlock) == 0x4);
        static_assert(offsetof(source2sdk::client::CDOTASlarkJailbreakGameDefinition, m_nPointsPerCompletedLevel) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTASlarkJailbreakGameDefinition, m_vecStages) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CDOTASlarkJailbreakGameDefinition) == 0x28);
    };
};
