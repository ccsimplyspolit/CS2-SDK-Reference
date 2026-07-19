#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmEvent.hpp"
#include "source2sdk/animlib/CNmEventRelevance_t.hpp"
#include "source2sdk/animlib/CNmSoundEvent_Position_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x48
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmSoundEvent : public source2sdk::animlib::CNmEvent
        {
        public:
            source2sdk::animlib::CNmEventRelevance_t m_relevance; // 0x18            
            uint8_t _pad001c[0x4]; // 0x1c
            CUtlString m_name; // 0x20            
            source2sdk::animlib::CNmSoundEvent_Position_t m_position; // 0x28            
            uint8_t _pad002c[0x4]; // 0x2c
            CUtlString m_attachmentName; // 0x30            
            CUtlString m_tags; // 0x38            
            bool m_bContinuePlayingSoundAtDurationEnd; // 0x40            
            uint8_t _pad0041[0x3]; // 0x41
            float m_flDurationInterruptionThreshold; // 0x44            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmSoundEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmSoundEvent) == 0x48);
    };
};
