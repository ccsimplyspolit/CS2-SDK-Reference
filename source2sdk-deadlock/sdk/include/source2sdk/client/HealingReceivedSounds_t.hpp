#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECitadelAudioLoopSounds.hpp"

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
        // Size: 0x60
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct HealingReceivedSounds_t
        {
        public:
            // metadata: MPropertyDescription "A direct healing ability was applied to us"
            CSoundEventName m_strDirectHealingSmall; // 0x0            
            // metadata: MPropertyDescription "A direct healing ability was applied to us"
            CSoundEventName m_strDirectHealingMedium; // 0x10            
            // metadata: MPropertyDescription "The loop sounds to play when we have any Heal Over Time (HOT)"
            // m_HOTLoopSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::ECitadelAudioLoopSounds,CSoundEventName> m_HOTLoopSounds;
            char m_HOTLoopSounds[0x28]; // 0x20            
            // metadata: MPropertyDescription "The priority level for the generic HOT Loop"
            std::int32_t m_nPriority; // 0x48            
            uint8_t _pad004c[0x4]; // 0x4c
            // metadata: MPropertyDescription "When a HOT has topped off the player"
            CSoundEventName m_strHOTToppedOff; // 0x50            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::HealingReceivedSounds_t, m_strDirectHealingSmall) == 0x0);
        static_assert(offsetof(source2sdk::client::HealingReceivedSounds_t, m_strDirectHealingMedium) == 0x10);
        static_assert(offsetof(source2sdk::client::HealingReceivedSounds_t, m_HOTLoopSounds) == 0x20);
        static_assert(offsetof(source2sdk::client::HealingReceivedSounds_t, m_nPriority) == 0x48);
        static_assert(offsetof(source2sdk::client::HealingReceivedSounds_t, m_strHOTToppedOff) == 0x50);
        
        static_assert(sizeof(source2sdk::client::HealingReceivedSounds_t) == 0x60);
    };
};
