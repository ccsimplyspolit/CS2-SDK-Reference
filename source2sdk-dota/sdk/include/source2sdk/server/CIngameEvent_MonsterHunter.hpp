#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CIngameEvent_Base.hpp"

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
        // Size: 0x1b08
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CIngameEvent_MonsterHunter : public source2sdk::server::CIngameEvent_Base
        {
        public:
            std::int32_t m_dota_player_spawned_event; // 0x1a58            
            uint8_t _pad1a5c[0xac];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CIngameEvent_MonsterHunter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CIngameEvent_MonsterHunter) == 0x1b08);
    };
};
