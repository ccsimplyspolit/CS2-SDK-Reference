#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrackedStatsEntity.hpp"

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
        // Size: 0x510
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CPlayerSlot m_nPlayerSlot"
        #pragma pack(push, 1)
        class CPlayerTrackedStatsEntity : public source2sdk::server::CBaseTrackedStatsEntity
        {
        public:
            // metadata: MNetworkEnable
            CPlayerSlot m_nPlayerSlot; // 0x508            
            std::int32_t m_nTeam; // 0x50c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayerTrackedStatsEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayerTrackedStatsEntity) == 0x510);
    };
};
