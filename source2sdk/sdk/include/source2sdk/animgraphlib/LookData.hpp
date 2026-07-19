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
        // Size: 0x18
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class LookData
        {
        public:
            // m_vLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<Vector> m_vLookTarget;
            char m_vLookTarget[0x14]; // 0x0            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::LookData, m_vLookTarget) == 0x0);
        
        static_assert(sizeof(source2sdk::animgraphlib::LookData) == 0x18);
    };
};
