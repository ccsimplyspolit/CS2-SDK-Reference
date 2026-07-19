#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/TagActionStatus.hpp"

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
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class TagStatus
        {
        public:
            source2sdk::animgraphlib::TagActionStatus m_TagStatus; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            float m_flTagStartAnimTime; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::TagStatus, m_TagStatus) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::TagStatus, m_flTagStartAnimTime) == 0x4);
        
        static_assert(sizeof(source2sdk::animgraphlib::TagStatus) == 0x8);
    };
};
