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
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMonsterHunterMaterialDropDefinition
        {
        public:
            CUtlString m_strMaterialName; // 0x0            
            std::int32_t m_nAmount; // 0x8            
            uint8_t _pad000c[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterMaterialDropDefinition, m_strMaterialName) == 0x0);
        static_assert(offsetof(source2sdk::client::CMonsterHunterMaterialDropDefinition, m_nAmount) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterMaterialDropDefinition) == 0x18);
    };
};
