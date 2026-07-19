#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_Citadel_Pickup.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CitadelItemVData;
    };
};

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
        // Size: 0xdf0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "AbilityID_t m_unItemID"
        #pragma pack(push, 1)
        class C_Citadel_Pickup_Item : public source2sdk::client::C_Citadel_Pickup
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ItemChanged"
            CUtlStringToken m_unItemID; // 0xde0            
            uint8_t _pad0de4[0x4]; // 0xde4
            source2sdk::client::CitadelItemVData* m_pItemData; // 0xde8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_Pickup_Item because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_Pickup_Item) == 0xdf0);
    };
};
