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
        // Size: 0xc
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class NetVarConfigIndex
        {
        public:
            // m_index has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<std::uint32_t> m_index;
            char m_index[0xc]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::NetVarConfigIndex, m_index) == 0x0);
        
        static_assert(sizeof(source2sdk::animgraphlib::NetVarConfigIndex) == 0xc);
    };
};
