#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_NPC_SimpleAnimatingAI.hpp"

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
        // Size: 0xcc8
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_bTakesDamage"
        // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
        // static metadata: MNetworkVarNames "Vector m_vecUnitStatusOffset"
        #pragma pack(push, 1)
        class C_NPC_BaseDefenseSentry : public source2sdk::client::C_NPC_SimpleAnimatingAI
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            Vector m_vecUnitStatusOffset; // 0xcb8            
            uint8_t _pad0cc4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_BaseDefenseSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_BaseDefenseSentry) == 0xcc8);
    };
};
