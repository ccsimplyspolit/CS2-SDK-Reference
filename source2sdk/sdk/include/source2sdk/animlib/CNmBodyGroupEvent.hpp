#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmEvent.hpp"
#include "source2sdk/animlib/CNmEventTargetEntity_t.hpp"

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
        // Size: 0x30
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmBodyGroupEvent : public source2sdk::animlib::CNmEvent
        {
        public:
            source2sdk::animlib::CNmEventTargetEntity_t m_target; // 0x18            
            uint8_t _pad001c[0x4]; // 0x1c
            CUtlString m_groupName; // 0x20            
            std::int32_t m_nGroupValue; // 0x28            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmBodyGroupEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmBodyGroupEvent) == 0x30);
    };
};
