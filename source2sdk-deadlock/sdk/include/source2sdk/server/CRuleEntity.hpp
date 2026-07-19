#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x788
        // Has VTable
        #pragma pack(push, 1)
        class CRuleEntity : public source2sdk::server::CBaseModelEntity
        {
        public:
            CUtlSymbolLarge m_iszMaster; // 0x780            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRuleEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRuleEntity) == 0x788);
    };
};
