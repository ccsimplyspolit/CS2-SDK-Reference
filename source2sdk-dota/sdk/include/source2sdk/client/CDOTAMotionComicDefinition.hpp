#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct CDOTAMotionComicFrame;
    };
};

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
        // Size: 0x28
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAMotionComicDefinition
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            float m_flDefaultMinimumTimePerFrame; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            // m_vecFrames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAMotionComicFrame*> m_vecFrames;
            char m_vecFrames[0x18]; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAMotionComicDefinition, m_flDefaultMinimumTimePerFrame) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAMotionComicDefinition, m_vecFrames) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CDOTAMotionComicDefinition) == 0x28);
    };
};
