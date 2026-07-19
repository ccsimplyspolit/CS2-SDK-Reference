#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundOpvarSetPointEntity.hpp"

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
        // Size: 0x648
        // Has VTable
        #pragma pack(push, 1)
        class CSoundOpvarSetPathCornerEntity : public source2sdk::server::CSoundOpvarSetPointEntity
        {
        public:
            uint8_t _pad0618[0x18]; // 0x618
            bool m_bUseParentedPath; // 0x630            
            uint8_t _pad0631[0x3]; // 0x631
            float m_flDistMinSqr; // 0x634            
            float m_flDistMaxSqr; // 0x638            
            uint8_t _pad063c[0x4]; // 0x63c
            CUtlSymbolLarge m_iszPathCornerEntityName; // 0x640            
            
            // Datamap fields:
            // void CSoundOpvarSetPathCornerEntitySetOpvarThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPathCornerEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPathCornerEntity) == 0x648);
    };
};
