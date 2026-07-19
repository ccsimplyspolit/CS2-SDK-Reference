#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        class CBaseProp : public source2sdk::server::CBaseAnimGraph
        {
        public:
            bool m_bModelOverrodeBlockLOS; // 0xa90            
            uint8_t _pad0a91[0x3]; // 0xa91
            std::int32_t m_iShapeType; // 0xa94            
            bool m_bConformToCollisionBounds; // 0xa98            
            uint8_t _pad0a99[0x7]; // 0xa99
            CTransform m_mPreferredCatchTransform; // 0xaa0            
            
            // Datamap fields:
            // void health; // 0x7fffffff
            // CUtlSymbolLarge propdata_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseProp) == 0xac0);
    };
};
