#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x788
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iTeamNum"
        // static metadata: MNetworkVarNames "int m_iLane"
        #pragma pack(push, 1)
        class CAssignedLaneParticle : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iLane; // 0x780            
            uint8_t _pad0784[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAssignedLaneParticle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAssignedLaneParticle) == 0x788);
    };
};
