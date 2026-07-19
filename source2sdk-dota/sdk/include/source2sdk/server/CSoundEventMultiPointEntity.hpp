#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundEventEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x590
        // Has VTable
        // Is Abstract
        // Construct disallowed
        #pragma pack(push, 1)
        class CSoundEventMultiPointEntity : public source2sdk::server::CSoundEventEntity
        {
        public:
            std::int32_t m_iCountMax; // 0x558            
            float m_flDistanceMax; // 0x55c            
            float m_flDistMaxSqr; // 0x560            
            float m_flDotProductMax; // 0x564            
            bool m_bPlaying; // 0x568            
            uint8_t _pad0569[0x27];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventMultiPointEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventMultiPointEntity) == 0x590);
    };
};
