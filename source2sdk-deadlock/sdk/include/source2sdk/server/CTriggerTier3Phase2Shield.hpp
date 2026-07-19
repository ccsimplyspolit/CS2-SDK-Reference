#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CTriggerNeutralShield.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x918
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int8 m_nNumEnemyPlayers"
        #pragma pack(push, 1)
        class CTriggerTier3Phase2Shield : public source2sdk::server::CTriggerNeutralShield
        {
        public:
            // metadata: MNetworkEnable
            std::int8_t m_nNumEnemyPlayers; // 0x910            
            uint8_t _pad0911[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerTier3Phase2Shield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerTier3Phase2Shield) == 0x918);
    };
};
