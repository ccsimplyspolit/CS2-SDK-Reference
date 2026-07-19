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
        // Size: 0xac0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_FissureWall : public source2sdk::server::CBaseAnimGraph
        {
        public:
            Vector m_vStartPos; // 0xa90            
            Vector m_vEndPos; // 0xa9c            
            source2sdk::entity2::GameTime_t m_flStartEmitTime; // 0xaa8            
            source2sdk::entity2::GameTime_t m_flEndEmitTime; // 0xaac            
            bool m_bSolid; // 0xab0            
            uint8_t _pad0ab1[0x3]; // 0xab1
            std::int32_t m_nTouchCount; // 0xab4            
            uint8_t _pad0ab8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_FissureWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_FissureWall) == 0xac0);
    };
};
