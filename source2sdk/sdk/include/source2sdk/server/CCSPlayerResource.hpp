#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x540
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CCSPlayerResource : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bHostageAlive[12]; // 0x4a8            
            bool m_isHostageFollowingSomeone[12]; // 0x4b4            
            CEntityIndex m_iHostageEntityIDs[12]; // 0x4c0            
            VectorWS m_bombsiteCenterA; // 0x4f0            
            VectorWS m_bombsiteCenterB; // 0x4fc            
            std::int32_t m_hostageRescueX[4]; // 0x508            
            std::int32_t m_hostageRescueY[4]; // 0x518            
            std::int32_t m_hostageRescueZ[4]; // 0x528            
            bool m_bEndMatchNextMapAllVoted; // 0x538            
            bool m_foundGoalPositions; // 0x539            
            uint8_t _pad053a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerResource because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayerResource) == 0x540);
    };
};
