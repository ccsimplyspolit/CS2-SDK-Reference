#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xaa0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flTurnSolidTime"
        #pragma pack(push, 1)
        class CCitadel_Magic_Beam_Blocker : public source2sdk::server::CBaseAnimGraph
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTurnSolidTime; // 0xa90            
            uint8_t _pad0a94[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Magic_Beam_Blocker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Magic_Beam_Blocker) == 0xaa0);
    };
};
