#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNPC_Neutral_Hideout_CatVData.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"

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
        // Size: 0x430
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_Neutral_Hideout_RabbitVData : public source2sdk::server::CNPC_Neutral_Hideout_CatVData
        {
        public:
            source2sdk::tier2::CRangeFloat m_flChaseMoveDistance; // 0x428            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Neutral_Hideout_RabbitVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Neutral_Hideout_RabbitVData) == 0x430);
    };
};
