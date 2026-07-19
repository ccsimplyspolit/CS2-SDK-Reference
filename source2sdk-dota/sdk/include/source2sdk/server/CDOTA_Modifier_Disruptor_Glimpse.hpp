#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1b38
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Disruptor_Glimpse : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vPositions[18]; // 0x1a58            
            std::int32_t m_nOldestPosition; // 0x1b30            
            uint8_t _pad1b34[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_Glimpse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Disruptor_Glimpse) == 0x1b38);
    };
};
