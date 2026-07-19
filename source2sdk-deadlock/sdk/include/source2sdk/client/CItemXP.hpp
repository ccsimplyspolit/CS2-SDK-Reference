#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0xa48
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_timeLaunch"
        // static metadata: MNetworkVarNames "GameTime_t m_flAttackableTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flEndAttackableTime"
        // static metadata: MNetworkVarNames "int m_nLaunchNum"
        #pragma pack(push, 1)
        class CItemXP : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad09a8[0x60]; // 0x9a8
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_timeLaunch; // 0xa08            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flAttackableTime; // 0xa0c            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flEndAttackableTime; // 0xa10            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_nLaunchNum; // 0xa14            
            uint8_t _pad0a18[0x30];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemXP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CItemXP) == 0xa48);
    };
};
