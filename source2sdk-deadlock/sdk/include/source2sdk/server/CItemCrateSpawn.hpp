#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECrateLootType_t.hpp"
#include "source2sdk/client/EObjectivePositions_t.hpp"
#include "source2sdk/server/CServerOnlyPointEntity.hpp"

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
        // Size: 0x4c8
        // Has VTable
        #pragma pack(push, 1)
        class CItemCrateSpawn : public source2sdk::server::CServerOnlyPointEntity
        {
        public:
            uint8_t _pad04a0[0x18]; // 0x4a0
            source2sdk::client::ECrateLootType_t m_eLootType; // 0x4b8            
            source2sdk::client::EObjectivePositions_t m_eObjectivePosition; // 0x4bc            
            uint8_t _pad04c0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemCrateSpawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemCrateSpawn) == 0x4c8);
    };
};
