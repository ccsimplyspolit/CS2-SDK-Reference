#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_NPC_TrooperNeutral.hpp"

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
        // Size: 0x1c38
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iVaultState"
        #pragma pack(push, 1)
        class C_NPC_Neutral_SinnersSacrifice : public source2sdk::client::C_NPC_TrooperNeutral
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnVaultStateChanged"
            std::int32_t m_iVaultState; // 0x1c10            
            uint8_t _pad1c14[0x24];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_Neutral_SinnersSacrifice because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_Neutral_SinnersSacrifice) == 0x1c38);
    };
};
