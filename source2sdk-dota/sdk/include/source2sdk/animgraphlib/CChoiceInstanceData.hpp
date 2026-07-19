#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x34
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CChoiceInstanceData
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            // m_currentChoice has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<std::int32_t> m_currentChoice;
            char m_currentChoice[0xc]; // 0x10            
            std::int32_t m_previousChoice; // 0x1c            
            // m_flClipStartTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flClipStartTime;
            char m_flClipStartTime[0xc]; // 0x20            
            float m_choicePreviousCycle; // 0x2c            
            uint8_t _pad0030[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CChoiceInstanceData, m_currentChoice) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::CChoiceInstanceData, m_previousChoice) == 0x1c);
        static_assert(offsetof(source2sdk::animgraphlib::CChoiceInstanceData, m_flClipStartTime) == 0x20);
        static_assert(offsetof(source2sdk::animgraphlib::CChoiceInstanceData, m_choicePreviousCycle) == 0x2c);
        
        static_assert(sizeof(source2sdk::animgraphlib::CChoiceInstanceData) == 0x34);
    };
};
