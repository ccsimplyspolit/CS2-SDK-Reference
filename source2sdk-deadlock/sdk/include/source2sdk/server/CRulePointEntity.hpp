#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CRuleEntity.hpp"

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
        // Size: 0x790
        // Has VTable
        #pragma pack(push, 1)
        class CRulePointEntity : public source2sdk::server::CRuleEntity
        {
        public:
            std::int32_t m_Score; // 0x788            
            uint8_t _pad078c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRulePointEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRulePointEntity) == 0x790);
    };
};
