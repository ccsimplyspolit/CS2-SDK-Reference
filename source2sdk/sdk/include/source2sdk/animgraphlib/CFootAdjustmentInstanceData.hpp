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
        // Size: 0x48
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFootAdjustmentInstanceData
        {
        public:
            uint8_t _pad0000[0xc]; // 0x0
            // m_flStartTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flStartTime;
            char m_flStartTime[0xc]; // 0xc            
            // m_flDuration has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flDuration;
            char m_flDuration[0xc]; // 0x18            
            uint8_t _pad0024[0x18]; // 0x24
            float m_flStartHeadingWS; // 0x3c            
            uint8_t _pad0040[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CFootAdjustmentInstanceData, m_flStartTime) == 0xc);
        static_assert(offsetof(source2sdk::animgraphlib::CFootAdjustmentInstanceData, m_flDuration) == 0x18);
        static_assert(offsetof(source2sdk::animgraphlib::CFootAdjustmentInstanceData, m_flStartHeadingWS) == 0x3c);
        
        static_assert(sizeof(source2sdk::animgraphlib::CFootAdjustmentInstanceData) == 0x48);
    };
};
