#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x1
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x180
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct modifiedconvars_t
        {
        public:
            char pszConvar[128]; // 0x0            
            char pszCurrentValue[128]; // 0x80            
            char pszOrgValue[128]; // 0x100            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::modifiedconvars_t, pszConvar) == 0x0);
        static_assert(offsetof(source2sdk::server::modifiedconvars_t, pszCurrentValue) == 0x80);
        static_assert(offsetof(source2sdk::server::modifiedconvars_t, pszOrgValue) == 0x100);
        
        static_assert(sizeof(source2sdk::server::modifiedconvars_t) == 0x180);
    };
};
