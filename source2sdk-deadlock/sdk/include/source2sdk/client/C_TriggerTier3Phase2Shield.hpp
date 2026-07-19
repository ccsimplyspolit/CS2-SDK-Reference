#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_TriggerNeutralShield.hpp"

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
        // static metadata: MNetworkVarNames "int8 m_nNumEnemyPlayers"
        #pragma pack(push, 1)
        class C_TriggerTier3Phase2Shield : public source2sdk::client::C_TriggerNeutralShield
        {
        public:
            // metadata: MNetworkEnable
            std::int8_t m_nNumEnemyPlayers; // 0xa78            
            uint8_t _pad0a79[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TriggerTier3Phase2Shield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TriggerTier3Phase2Shield) == 0xa80);
    };
};
