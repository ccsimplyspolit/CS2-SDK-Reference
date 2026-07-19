#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x608
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPulseGameBlackboard : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05f0[0x8]; // 0x5f0
            CUtlString m_strGraphName; // 0x5f8            
            CUtlString m_strStateBlob; // 0x600            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseGameBlackboard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPulseGameBlackboard) == 0x608);
    };
};
