#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/client/StanceType_t.hpp"

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
        // Standard-layout class: false
        // Size: 0x58
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "StanceType_t m_nCurrentStance"
        #pragma pack(push, 1)
        class C_AI_Motor : public source2sdk::client::CAI_Component
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::StanceType_t m_nCurrentStance; // 0x50            
            uint8_t _pad0054[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_AI_Motor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_AI_Motor) == 0x58);
    };
};
