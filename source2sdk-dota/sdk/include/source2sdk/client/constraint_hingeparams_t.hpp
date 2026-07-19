#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/constraint_axislimit_t.hpp"
#include "source2sdk/client/constraint_breakableparams_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x40
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct constraint_hingeparams_t
        {
        public:
            VectorWS worldPosition; // 0x0            
            Vector worldAxisDirection; // 0xc            
            // metadata: MNotSaved
            source2sdk::client::constraint_axislimit_t hingeAxis; // 0x18            
            // metadata: MNotSaved
            source2sdk::client::constraint_breakableparams_t constraint; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::constraint_hingeparams_t, worldPosition) == 0x0);
        static_assert(offsetof(source2sdk::client::constraint_hingeparams_t, worldAxisDirection) == 0xc);
        static_assert(offsetof(source2sdk::client::constraint_hingeparams_t, hingeAxis) == 0x18);
        static_assert(offsetof(source2sdk::client::constraint_hingeparams_t, constraint) == 0x28);
        
        static_assert(sizeof(source2sdk::client::constraint_hingeparams_t) == 0x40);
    };
};
