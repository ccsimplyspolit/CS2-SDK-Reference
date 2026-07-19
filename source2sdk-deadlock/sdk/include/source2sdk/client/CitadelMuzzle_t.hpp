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
        // Size: 0x8
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelMuzzle_t
        {
        public:
            // metadata: MPropertyCustomFGDType "model_attachment"
            CUtlString m_strAttachmentName; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelMuzzle_t, m_strAttachmentName) == 0x0);
        
        static_assert(sizeof(source2sdk::client::CitadelMuzzle_t) == 0x8);
    };
};
