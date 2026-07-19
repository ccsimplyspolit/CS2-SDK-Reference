#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelArpeggiatorMode_t.hpp"
#include "source2sdk/client/CitadelMidiNotePitch_t.hpp"

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
        // Size: 0x150
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelArpeggiator_t
        {
        public:
            CSoundEventName m_strSamplerEvent; // 0x0            
            source2sdk::client::CitadelMidiNotePitch_t m_nLowestNote; // 0x10            
            source2sdk::client::CitadelMidiNotePitch_t m_nHighestNote; // 0x14            
            source2sdk::client::CitadelArpeggiatorMode_t m_nDefaultArpMode; // 0x18            
            std::int32_t m_nTransposeSteps; // 0x1c            
            uint8_t _pad0020[0x130];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelArpeggiator_t, m_strSamplerEvent) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelArpeggiator_t, m_nLowestNote) == 0x10);
        static_assert(offsetof(source2sdk::client::CitadelArpeggiator_t, m_nHighestNote) == 0x14);
        static_assert(offsetof(source2sdk::client::CitadelArpeggiator_t, m_nDefaultArpMode) == 0x18);
        static_assert(offsetof(source2sdk::client::CitadelArpeggiator_t, m_nTransposeSteps) == 0x1c);
        
        static_assert(sizeof(source2sdk::client::CitadelArpeggiator_t) == 0x150);
    };
};
