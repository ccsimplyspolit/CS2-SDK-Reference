#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x4b8
        // Has VTable
        #pragma pack(push, 1)
        class CAI_SpeechFilter : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a0[0x8]; // 0x4a0
            CUtlSymbolLarge m_iszSubject; // 0x4a8            
            float m_flIdleModifier; // 0x4b0            
            bool m_bNeverSayHello; // 0x4b4            
            bool m_bDisabled; // 0x4b5            
            uint8_t _pad04b6[0x2];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // float InputSetIdleModifier; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_SpeechFilter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_SpeechFilter) == 0x4b8);
    };
};
