#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelSoundStackFieldOBB.hpp"

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
        // Size: 0x6f0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelBaseMusicOBB : public source2sdk::client::CCitadelSoundStackFieldOBB
        {
        public:
            // Datamap fields:
            // Vector m_vMins; // 0x6b0
            // Vector m_vMaxs; // 0x6bc
            // uint32_t m_nMaxDistance; // 0x6c8
            // CUtlString m_nStackName; // 0x6d0
            // CUtlString m_nOperatorName; // 0x6d8
            // CUtlString m_nOperatorFieldName; // 0x6e0
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadelBaseMusicOBB has no schema binary (size is a guess)
    };
};
