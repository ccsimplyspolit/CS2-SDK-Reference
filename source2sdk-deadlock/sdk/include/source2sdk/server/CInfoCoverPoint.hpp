#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyPointEntity.hpp"

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
        // Size: 0x4b0
        // Has VTable
        #pragma pack(push, 1)
        class CInfoCoverPoint : public source2sdk::server::CServerOnlyPointEntity
        {
        public:
            std::int32_t m_nGroupID; // 0x4a0            
            std::int32_t m_nVisionRadius; // 0x4a4            
            bool m_bAllowOffNav; // 0x4a8            
            uint8_t _pad04a9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoCoverPoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoCoverPoint) == 0x4b0);
    };
};
