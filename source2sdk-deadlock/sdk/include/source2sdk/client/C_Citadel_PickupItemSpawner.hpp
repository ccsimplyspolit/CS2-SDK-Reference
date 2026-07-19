#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Standard-layout class: false
        // Size: 0xcb8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tNextDropTime"
        // static metadata: MNetworkVarNames "bool m_bPowerupActive"
        #pragma pack(push, 1)
        class C_Citadel_PickupItemSpawner : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad0ca8[0x8]; // 0xca8
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNextDropTimeChanged"
            source2sdk::entity2::GameTime_t m_tNextDropTime; // 0xcb0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPowerupActiveChanged"
            bool m_bPowerupActive; // 0xcb4            
            uint8_t _pad0cb5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_PickupItemSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_PickupItemSpawner) == 0xcb8);
    };
};
