#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"

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
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicEventListener : public source2sdk::server::CLogicalEntity
        {
        public:
            uint8_t _pad04a8[0x10]; // 0x4a8
            CUtlString m_strEventName; // 0x4b8            
            bool m_bIsEnabled; // 0x4c0            
            uint8_t _pad04c1[0x3]; // 0x4c1
            std::int32_t m_nTeam; // 0x4c4            
            // m_OnEventFired has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_OnEventFired;
            char m_OnEventFired[0x20]; // 0x4c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicEventListener because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicEventListener) == 0x4e8);
    };
};
