#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct HealingOverTimeLoopSoundOverride_t
        {
        public:
            CSoundEventName m_sStartSound; // 0x0            
            CSoundEventName m_sLoopSound; // 0x10            
            CSoundEventName m_sEndSound; // 0x20            
            std::int32_t m_nPriority; // 0x30            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::HealingOverTimeLoopSoundOverride_t, m_sStartSound) == 0x0);
        static_assert(offsetof(source2sdk::client::HealingOverTimeLoopSoundOverride_t, m_sLoopSound) == 0x10);
        static_assert(offsetof(source2sdk::client::HealingOverTimeLoopSoundOverride_t, m_sEndSound) == 0x20);
        static_assert(offsetof(source2sdk::client::HealingOverTimeLoopSoundOverride_t, m_nPriority) == 0x30);
        
        static_assert(sizeof(source2sdk::client::HealingOverTimeLoopSoundOverride_t) == 0x38);
    };
};
