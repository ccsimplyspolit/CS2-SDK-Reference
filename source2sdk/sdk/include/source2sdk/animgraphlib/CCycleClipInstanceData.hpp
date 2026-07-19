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
        // Size: 0x1c
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCycleClipInstanceData
        {
        public:
            // m_flCycle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flCycle;
            char m_flCycle[0xc]; // 0x0            
            // m_flPrevCycle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flPrevCycle;
            char m_flPrevCycle[0xc]; // 0xc            
            uint8_t _pad0018[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CCycleClipInstanceData, m_flCycle) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CCycleClipInstanceData, m_flPrevCycle) == 0xc);
        
        static_assert(sizeof(source2sdk::animgraphlib::CCycleClipInstanceData) == 0x1c);
    };
};
