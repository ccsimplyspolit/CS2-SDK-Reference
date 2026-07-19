#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_ArcanaDataEntity_Base.hpp"
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
        // Size: 0x108
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTA_ArcanaDataEntity_DrowRanger : public source2sdk::client::CDOTA_ArcanaDataEntity_Base
        {
        public:
            std::int8_t m_vecDrowRangerArcanaTargetPlayerID[24]; // 0x30            
            source2sdk::entity2::GameTime_t m_vecDrowRangerArcanaDeathTime[24]; // 0x48            
            source2sdk::entity2::GameTime_t m_vecDrowRangerArcanaKillTime[24]; // 0xa8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_ArcanaDataEntity_DrowRanger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_ArcanaDataEntity_DrowRanger) == 0x108);
    };
};
