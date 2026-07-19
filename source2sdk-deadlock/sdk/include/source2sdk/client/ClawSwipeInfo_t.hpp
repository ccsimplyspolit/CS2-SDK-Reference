#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct ClawSwipeInfo_t
        {
        public:
            float m_flRollOffset; // 0x0            
            float m_flPitchOffset; // 0x4            
            float m_flYawOffset; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ClawSwipeInfo_t, m_flRollOffset) == 0x0);
        static_assert(offsetof(source2sdk::client::ClawSwipeInfo_t, m_flPitchOffset) == 0x4);
        static_assert(offsetof(source2sdk::client::ClawSwipeInfo_t, m_flYawOffset) == 0x8);
        
        static_assert(sizeof(source2sdk::client::ClawSwipeInfo_t) == 0xc);
    };
};
