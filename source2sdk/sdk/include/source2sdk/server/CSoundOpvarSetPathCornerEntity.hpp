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
        // Size: 0x670
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundOpvarSetPathCornerEntity : public source2sdk::server::CSoundOpvarSetPointEntity
        {
        public:
            uint8_t _pad0640[0x18]; // 0x640
            bool m_bUseParentedPath; // 0x658            
            uint8_t _pad0659[0x3]; // 0x659
            float m_flDistMinSqr; // 0x65c            
            float m_flDistMaxSqr; // 0x660            
            uint8_t _pad0664[0x4]; // 0x664
            CUtlSymbolLarge m_iszPathCornerEntityName; // 0x668            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPathCornerEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPathCornerEntity) == 0x670);
    };
};
