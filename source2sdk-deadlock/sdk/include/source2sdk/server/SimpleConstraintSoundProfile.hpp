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
        // Size: 0x20
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class SimpleConstraintSoundProfile
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            float m_flKeyPointMinSoundThreshold; // 0x8            
            float m_flKeyPointMaxSoundThreshold; // 0xc            
            float m_reversalSoundThresholdSmall; // 0x10            
            float m_reversalSoundThresholdMedium; // 0x14            
            float m_reversalSoundThresholdLarge; // 0x18            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, m_flKeyPointMinSoundThreshold) == 0x8);
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, m_flKeyPointMaxSoundThreshold) == 0xc);
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, m_reversalSoundThresholdSmall) == 0x10);
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, m_reversalSoundThresholdMedium) == 0x14);
        static_assert(offsetof(source2sdk::server::SimpleConstraintSoundProfile, m_reversalSoundThresholdLarge) == 0x18);
        
        static_assert(sizeof(source2sdk::server::SimpleConstraintSoundProfile) == 0x20);
    };
};
