#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        #pragma pack(push, 1)
        class CHintMessage
        {
        public:
            char* m_hintString; // 0x0            
            // m_args has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<char*> m_args;
            char m_args[0x18]; // 0x8            
            float m_duration; // 0x20            
            uint8_t _pad0024[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CHintMessage, m_hintString) == 0x0);
        static_assert(offsetof(source2sdk::server::CHintMessage, m_args) == 0x8);
        static_assert(offsetof(source2sdk::server::CHintMessage, m_duration) == 0x20);
        
        static_assert(sizeof(source2sdk::server::CHintMessage) == 0x28);
    };
};
