#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/NPC_STATE.hpp"
#include "source2sdk/server/HintIgnoreFacing_t.hpp"
#include "source2sdk/server/HintPriority_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x40
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class HintNodeData
        {
        public:
            CUtlSymbolLarge strEntityName; // 0x0            
            std::int16_t nHintType; // 0x8            
            uint8_t _pad000a[0x6]; // 0xa
            CUtlSymbolLarge strGroup; // 0x10            
            std::int32_t iDisabled; // 0x18            
            uint8_t _pad001c[0x4]; // 0x1c
            CUtlSymbolLarge iszGenericType; // 0x20            
            source2sdk::server::HintIgnoreFacing_t fIgnoreFacing; // 0x28            
            source2sdk::client::NPC_STATE minState; // 0x2c            
            source2sdk::client::NPC_STATE maxState; // 0x30            
            std::int32_t nRadius; // 0x34            
            source2sdk::server::HintPriority_t ePriority; // 0x38            
            bool bReturnHintPositionAsOnGroundPerHull; // 0x3c            
            uint8_t _pad003d[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::HintNodeData, strEntityName) == 0x0);
        static_assert(offsetof(source2sdk::server::HintNodeData, nHintType) == 0x8);
        static_assert(offsetof(source2sdk::server::HintNodeData, strGroup) == 0x10);
        static_assert(offsetof(source2sdk::server::HintNodeData, iDisabled) == 0x18);
        static_assert(offsetof(source2sdk::server::HintNodeData, iszGenericType) == 0x20);
        static_assert(offsetof(source2sdk::server::HintNodeData, fIgnoreFacing) == 0x28);
        static_assert(offsetof(source2sdk::server::HintNodeData, minState) == 0x2c);
        static_assert(offsetof(source2sdk::server::HintNodeData, maxState) == 0x30);
        static_assert(offsetof(source2sdk::server::HintNodeData, nRadius) == 0x34);
        static_assert(offsetof(source2sdk::server::HintNodeData, ePriority) == 0x38);
        static_assert(offsetof(source2sdk::server::HintNodeData, bReturnHintPositionAsOnGroundPerHull) == 0x3c);
        
        static_assert(sizeof(source2sdk::server::HintNodeData) == 0x40);
    };
};
