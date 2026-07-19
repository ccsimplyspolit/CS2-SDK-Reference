#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTA_LANE.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
#include "source2sdk/server/CDOTA_CreepKillInfo.hpp"

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
        // Size: 0x18d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Creep : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            source2sdk::server::CDOTA_CreepKillInfo m_KillInfo; // 0x18a0            
            source2sdk::client::DOTA_LANE m_Lane; // 0x18c0            
            bool m_bPushback; // 0x18c4            
            uint8_t _pad18c5[0x3]; // 0x18c5
            float m_flAim; // 0x18c8            
            uint8_t _pad18cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Creep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Creep) == 0x18d0);
    };
};
