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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CameraEntityOverride_t
        {
        public:
            CUtlString m_sCameraEntityName; // 0x0            
            float m_flTransitionInDuration; // 0x8            
            float m_flTransitionOutDuration; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CameraEntityOverride_t, m_sCameraEntityName) == 0x0);
        static_assert(offsetof(source2sdk::client::CameraEntityOverride_t, m_flTransitionInDuration) == 0x8);
        static_assert(offsetof(source2sdk::client::CameraEntityOverride_t, m_flTransitionOutDuration) == 0xc);
        
        static_assert(sizeof(source2sdk::client::CameraEntityOverride_t) == 0x10);
    };
};
