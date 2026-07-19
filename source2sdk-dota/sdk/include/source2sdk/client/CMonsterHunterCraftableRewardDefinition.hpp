#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x70
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMonsterHunterCraftableRewardDefinition
        {
        public:
            std::uint32_t m_unActionID; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // m_mapRequiredMaterials has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,std::int32_t> m_mapRequiredMaterials;
            char m_mapRequiredMaterials[0x28]; // 0x8            
            bool m_bPremium; // 0x30            
            uint8_t _pad0031[0x3f];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterCraftableRewardDefinition, m_unActionID) == 0x0);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCraftableRewardDefinition, m_mapRequiredMaterials) == 0x8);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCraftableRewardDefinition, m_bPremium) == 0x30);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterCraftableRewardDefinition) == 0x70);
    };
};
