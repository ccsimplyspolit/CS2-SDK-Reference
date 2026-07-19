#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/SndSeqInstrumentType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x20
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        // static metadata: MPropertyPolymorphicClass
        #pragma pack(push, 1)
        class CSndSeqInstBaseSchema
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::soundsystem::SndSeqInstrumentType_t m_nType; // 0x8            
            uint8_t _pad000c[0x2]; // 0xc
            bool m_bStopCurrentEvents; // 0xe            
            uint8_t _pad000f[0x1]; // 0xf
            float m_flBPM; // 0x10            
            float m_flBPMFactor; // 0x14            
            float m_flBPMInvFactor; // 0x18            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::CSndSeqInstBaseSchema, m_nType) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem::CSndSeqInstBaseSchema, m_bStopCurrentEvents) == 0xe);
        static_assert(offsetof(source2sdk::soundsystem::CSndSeqInstBaseSchema, m_flBPM) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem::CSndSeqInstBaseSchema, m_flBPMFactor) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem::CSndSeqInstBaseSchema, m_flBPMInvFactor) == 0x18);
        
        static_assert(sizeof(source2sdk::soundsystem::CSndSeqInstBaseSchema) == 0x20);
    };
};
