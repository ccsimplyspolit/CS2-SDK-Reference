#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/CSndSeqInstBaseSchema.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xe0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Midi Sampler"
        #pragma pack(push, 1)
        class CSndSeqInstMidiSampler : public source2sdk::soundsystem::CSndSeqInstBaseSchema
        {
        public:
            bool m_bIsSoundEvent; // 0x20            
            bool m_bStopPrevious; // 0x21            
            std::uint8_t m_nMinNote; // 0x22            
            std::uint8_t m_nMaxNote; // 0x23            
            float m_flMinVelocityAtten; // 0x24            
            float m_flMaxVelocityAtten; // 0x28            
            float m_flAttack; // 0x2c            
            float m_flRelease; // 0x30            
            bool m_bBeatEnvelopes; // 0x34            
            uint8_t _pad0035[0x9f]; // 0x35
            std::uint8_t m_nNextVoiceSlot; // 0xd4            
            uint8_t _pad00d5[0x3]; // 0xd5
            std::uint32_t m_hSoundEventHash; // 0xd8            
            uint8_t _pad00dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSndSeqInstMidiSampler because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSndSeqInstMidiSampler) == 0xe0);
    };
};
