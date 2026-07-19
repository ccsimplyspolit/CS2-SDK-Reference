#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AmmoTypeInfo_t.hpp"

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
        // Size: 0x50
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct GameAmmoTypeInfo_t : public source2sdk::client::AmmoTypeInfo_t
        {
        public:
            std::int32_t m_nBuySize; // 0x38            
            std::int32_t m_nCost; // 0x3c            
            uint8_t _pad0040[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in GameAmmoTypeInfo_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::GameAmmoTypeInfo_t) == 0x50);
    };
};
