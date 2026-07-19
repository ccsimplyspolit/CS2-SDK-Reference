#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/fogparams_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x958
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFogTrigger : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNotSaved
            source2sdk::server::fogparams_t m_fog; // 0x8f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFogTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFogTrigger) == 0x958);
    };
};
