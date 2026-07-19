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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x1c
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct PathAccompanyProperties_t
        {
        public:
            bool m_bInvertLeadDistance; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            float m_flBacktrackThreshold; // 0x4            
            float m_flDesiredDistanceOverride; // 0x8            
            bool m_bIsSticky; // 0xc            
            uint8_t _pad000d[0x3]; // 0xd
            float m_flStickyRange; // 0x10            
            float m_flStickyBreakRange; // 0x14            
            bool m_bCanRepeatedlyStick; // 0x18            
            bool m_bInvertIfStickToEnd; // 0x19            
            uint8_t _pad001a[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_bInvertLeadDistance) == 0x0);
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_flBacktrackThreshold) == 0x4);
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_flDesiredDistanceOverride) == 0x8);
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_bIsSticky) == 0xc);
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_flStickyRange) == 0x10);
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_flStickyBreakRange) == 0x14);
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_bCanRepeatedlyStick) == 0x18);
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_bInvertIfStickToEnd) == 0x19);
        
        static_assert(sizeof(source2sdk::server::PathAccompanyProperties_t) == 0x1c);
    };
};
