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
        // Has VTable
        // Construct allowed
        //
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataBase
        // static metadata: MVDataNodeType "1"
        #pragma pack(push, 1)
        class CDOTAMotionComicFrame
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            float m_flAutoAdvanceDelay; // 0x8
            bool m_bFireEventOnStart; // 0xc
            uint8_t _pad000d[0x3];
        };
        #pragma pack(pop)

        static_assert(offsetof(source2sdk::client::CDOTAMotionComicFrame, m_flAutoAdvanceDelay) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAMotionComicFrame, m_bFireEventOnStart) == 0xc);

        static_assert(sizeof(source2sdk::client::CDOTAMotionComicFrame) == 0x10);
    };
};
