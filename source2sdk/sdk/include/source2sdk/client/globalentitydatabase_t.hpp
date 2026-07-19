#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/globalentity_t.hpp"

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
        // Size: 0x78
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct globalentitydatabase_t
        {
        public:
            uint8_t _pad0000[0x60]; // 0x0
            // m_list has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::globalentity_t> m_list;
            char m_list[0x18]; // 0x60            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::globalentitydatabase_t, m_list) == 0x60);
        
        static_assert(sizeof(source2sdk::client::globalentitydatabase_t) == 0x78);
    };
};
