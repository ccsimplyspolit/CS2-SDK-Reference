#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CRulePointEntity.hpp"

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
        // Size: 0x7a8
        // Has VTable
        #pragma pack(push, 1)
        class CGamePlayerEquip : public source2sdk::server::CRulePointEntity
        {
        public:
            uint8_t _pad0790[0x18];
            // Datamap fields:
            // CUtlString weapon%d[32]; // 0x7fffffff
            // void InputTriggerForAllPlayers; // 0x0
            // CUtlSymbolLarge InputTriggerForActivatedPlayer; // 0x0
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CGamePlayerEquip) == 0x7a8);
    };
};
