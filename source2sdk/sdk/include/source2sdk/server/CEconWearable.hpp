#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CEconEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xca0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CEconWearable : public source2sdk::server::CEconEntity
        {
        public:
            std::int32_t m_nForceSkin; // 0xc90            
            bool m_bAlwaysAllow; // 0xc94            
            uint8_t _pad0c95[0xb];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEconWearable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEconWearable) == 0xca0);
    };
};
