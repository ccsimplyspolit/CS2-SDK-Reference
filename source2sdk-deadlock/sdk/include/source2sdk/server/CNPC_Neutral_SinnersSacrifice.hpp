#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNPC_TrooperNeutral.hpp"

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
        // Size: 0x1b50
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iVaultState"
        #pragma pack(push, 1)
        class CNPC_Neutral_SinnersSacrifice : public source2sdk::server::CNPC_TrooperNeutral
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iVaultState; // 0x1830            
            uint8_t _pad1834[0x31c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Neutral_SinnersSacrifice because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Neutral_SinnersSacrifice) == 0x1b50);
    };
};
