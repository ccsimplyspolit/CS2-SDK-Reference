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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x30
        // Has Trivial Destructor
        // Construct allowed
        // Construct disallowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct TargetSelectorInstanceData_t
        {
        public:
            // m_currentIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<std::int32_t> m_currentIndex;
            char m_currentIndex[0xc]; // 0x0            
            uint8_t _pad000c[0x10]; // 0xc
            // m_vMSRootMotionAnlyzerTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<Vector> m_vMSRootMotionAnlyzerTarget;
            char m_vMSRootMotionAnlyzerTarget[0x14]; // 0x1c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::TargetSelectorInstanceData_t, m_currentIndex) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::TargetSelectorInstanceData_t, m_vMSRootMotionAnlyzerTarget) == 0x1c);
        
        static_assert(sizeof(source2sdk::animgraphlib::TargetSelectorInstanceData_t) == 0x30);
    };
};
