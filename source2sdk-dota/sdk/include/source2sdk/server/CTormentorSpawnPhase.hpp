#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ETormentorLocation.hpp"
#include "source2sdk/client/ETormentorSpawnPhase.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x40
        // Has VTable
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CTormentorSpawnPhase
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            source2sdk::client::ETormentorLocation m_eTormentorLocation; // 0x30            
            source2sdk::client::ETormentorSpawnPhase m_eTormentorSpawnPhase; // 0x34            
            float m_flTormentorPhaseStartTime; // 0x38            
            float m_flTormentorPhaseEndTime; // 0x3c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CTormentorSpawnPhase, m_eTormentorLocation) == 0x30);
        static_assert(offsetof(source2sdk::server::CTormentorSpawnPhase, m_eTormentorSpawnPhase) == 0x34);
        static_assert(offsetof(source2sdk::server::CTormentorSpawnPhase, m_flTormentorPhaseStartTime) == 0x38);
        static_assert(offsetof(source2sdk::server::CTormentorSpawnPhase, m_flTormentorPhaseEndTime) == 0x3c);
        
        static_assert(sizeof(source2sdk::server::CTormentorSpawnPhase) == 0x40);
    };
};
