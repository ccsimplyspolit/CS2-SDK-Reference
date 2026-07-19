#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ERoshanSpawnPhase.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has VTable
        // Has Trivial Destructor
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CRoshanPhaseInfo
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::client::ERoshanSpawnPhase m_eRoshanPhase; // 0x8            
            source2sdk::entity2::GameTime_t m_flRoshanPhaseStartTime; // 0xc            
            source2sdk::entity2::GameTime_t m_flRoshanPhaseEndTime; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CRoshanPhaseInfo, m_eRoshanPhase) == 0x8);
        static_assert(offsetof(source2sdk::client::CRoshanPhaseInfo, m_flRoshanPhaseStartTime) == 0xc);
        static_assert(offsetof(source2sdk::client::CRoshanPhaseInfo, m_flRoshanPhaseEndTime) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CRoshanPhaseInfo) == 0x18);
    };
};
