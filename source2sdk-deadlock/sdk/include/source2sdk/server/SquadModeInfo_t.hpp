#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SquadSlotId_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x30
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SquadModeInfo_t
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            // m_vecSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SquadSlotId_t> m_vecSlots;
            char m_vecSlots[0x18]; // 0x10            
            bool m_bShareEnemyInfo; // 0x28            
            uint8_t _pad0029[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::SquadModeInfo_t, m_vecSlots) == 0x10);
        static_assert(offsetof(source2sdk::server::SquadModeInfo_t, m_bShareEnemyInfo) == 0x28);
        
        static_assert(sizeof(source2sdk::server::SquadModeInfo_t) == 0x30);
    };
};
