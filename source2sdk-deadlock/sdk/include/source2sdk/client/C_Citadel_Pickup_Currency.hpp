#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_Citadel_Pickup.hpp"

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
        // Size: 0xde8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nCurrencyAmount"
        #pragma pack(push, 1)
        class C_Citadel_Pickup_Currency : public source2sdk::client::C_Citadel_Pickup
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nCurrencyAmount; // 0xde0            
            uint8_t _pad0de4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_Pickup_Currency because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_Pickup_Currency) == 0xde8);
    };
};
