#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BinaryObject.hpp"

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
        // Size: 0xbe0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_DOTA_MapTree : public source2sdk::client::C_DOTA_BinaryObject
        {
        public:
            uint8_t _pad0ac8[0x30]; // 0xac8
            bool m_bInitialized; // 0xaf8            
            uint8_t _pad0af9[0xe7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_MapTree because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_MapTree) == 0xbe0);
    };
};
