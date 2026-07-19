#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTAMotionComicFrame.hpp"

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
        // Standard-layout class: false
        // Size: 0x28
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDOTAMotionComicVideoFrame : public source2sdk::client::CDOTAMotionComicFrame
        {
        public:
            bool m_bLooping; // 0x10            
            uint8_t _pad0011[0x3]; // 0x11
            float m_flAllowSkipAfterDelay; // 0x14            
            CUtlString m_sVideoPath; // 0x18            
            CUtlString m_sSoundEventName; // 0x20            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAMotionComicVideoFrame because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTAMotionComicVideoFrame) == 0x28);
    };
};
