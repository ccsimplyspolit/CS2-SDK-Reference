#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x698
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_CSPlayerResource : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bHostageAlive[12]; // 0x600            
            bool m_isHostageFollowingSomeone[12]; // 0x60c            
            CEntityIndex m_iHostageEntityIDs[12]; // 0x618            
            VectorWS m_bombsiteCenterA; // 0x648            
            VectorWS m_bombsiteCenterB; // 0x654            
            std::int32_t m_hostageRescueX[4]; // 0x660            
            std::int32_t m_hostageRescueY[4]; // 0x670            
            std::int32_t m_hostageRescueZ[4]; // 0x680            
            bool m_bEndMatchNextMapAllVoted; // 0x690            
            bool m_foundGoalPositions; // 0x691            
            uint8_t _pad0692[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSPlayerResource because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSPlayerResource) == 0x698);
    };
};
