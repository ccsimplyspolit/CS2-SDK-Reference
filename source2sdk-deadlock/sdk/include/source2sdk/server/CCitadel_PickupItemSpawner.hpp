#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"

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
        // Size: 0xaa0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tNextDropTime"
        // static metadata: MNetworkVarNames "bool m_bPowerupActive"
        #pragma pack(push, 1)
        class CCitadel_PickupItemSpawner : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0a90[0x8]; // 0xa90
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tNextDropTime; // 0xa98            
            // metadata: MNetworkEnable
            bool m_bPowerupActive; // 0xa9c            
            uint8_t _pad0a9d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_PickupItemSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_PickupItemSpawner) == 0xaa0);
    };
};
