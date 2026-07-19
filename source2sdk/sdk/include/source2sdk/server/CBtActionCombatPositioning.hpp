#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBtNode.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb0
        // Has VTable
        #pragma pack(push, 1)
        class CBtActionCombatPositioning : public source2sdk::server::CBtNode
        {
        public:
            uint8_t _pad0058[0x10]; // 0x58
            CUtlString m_szSensorInputKey; // 0x68            
            uint8_t _pad0070[0x10]; // 0x70
            CUtlString m_szIsAttackingKey; // 0x80            
            source2sdk::server::CountdownTimer m_ActionTimer; // 0x88            
            bool m_bCrouching; // 0xa0            
            uint8_t _pad00a1[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBtActionCombatPositioning because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBtActionCombatPositioning) == 0xb0);
    };
};
