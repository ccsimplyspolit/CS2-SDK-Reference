#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/AI_VolumetricEventFlags_t.hpp"
#include "source2sdk/server/AI_VolumetricEventHandle_t.hpp"
#include "source2sdk/server/AI_VolumetricEventType_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x4c0
        // Has VTable
        #pragma pack(push, 1)
        class CAI_VolumetricEventEntity : public source2sdk::server::CPointEntity
        {
        public:
            source2sdk::server::AI_VolumetricEventType_t m_iEventType; // 0x4a0            
            uint8_t _pad04a1[0x1]; // 0x4a1
            source2sdk::server::AI_VolumetricEventFlags_t m_iEventFlags; // 0x4a2            
            float m_flRadius; // 0x4a4            
            source2sdk::server::AI_VolumetricEventHandle_t m_hEvent; // 0x4a8            
            float m_flDuration; // 0x4b0            
            uint8_t _pad04b4[0x4]; // 0x4b4
            CUtlSymbolLarge m_iszProxyEntityName; // 0x4b8            
            
            // Datamap fields:
            // void InputEmitAIVolumetricEvent; // 0x0
            // void InputStopAIVolumetricEvent; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_VolumetricEventEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_VolumetricEventEntity) == 0x4c0);
    };
};
