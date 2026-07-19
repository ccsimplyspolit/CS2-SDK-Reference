#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"

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
        // Size: 0xa80
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "string_t m_iszSoundName"
        #pragma pack(push, 1)
        class C_TriggerItemShop : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSoundName; // 0xa78            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TriggerItemShop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TriggerItemShop) == 0xa80);
    };
};
