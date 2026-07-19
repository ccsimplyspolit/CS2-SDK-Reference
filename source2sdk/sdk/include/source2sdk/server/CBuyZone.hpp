#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0x8f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBuyZone : public source2sdk::server::CBaseTrigger
        {
        public:
            std::int32_t m_LegacyTeamNum; // 0x8e8            
            uint8_t _pad08ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBuyZone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBuyZone) == 0x8f0);
    };
};
