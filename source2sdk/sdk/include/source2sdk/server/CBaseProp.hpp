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
        // Size: 0x990
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseProp : public source2sdk::server::CBaseAnimGraph
        {
        public:
            bool m_bModelOverrodeBlockLOS; // 0x960            
            uint8_t _pad0961[0x3]; // 0x961
            std::int32_t m_iShapeType; // 0x964            
            bool m_bConformToCollisionBounds; // 0x968            
            uint8_t _pad0969[0x7]; // 0x969
            CTransform m_mPreferredCatchTransform; // 0x970            
            
            // Datamap fields:
            // void health; // 0x7fffffff
            // CUtlSymbolLarge propdata_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseProp) == 0x990);
    };
};
