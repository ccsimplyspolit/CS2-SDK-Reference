#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x648
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelMatchmakingStatusInfo : public source2sdk::client::C_PointEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnStartMatchmaking; // 0x5f0            
            source2sdk::entity2::CEntityIOOutput m_OnStopMatchmaking; // 0x608            
            uint8_t _pad0620[0x28];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelMatchmakingStatusInfo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelMatchmakingStatusInfo) == 0x648);
    };
};
