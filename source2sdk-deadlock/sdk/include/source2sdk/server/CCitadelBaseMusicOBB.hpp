#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelSoundStackFieldOBB.hpp"

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
        // Size: 0x4e0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelBaseMusicOBB : public source2sdk::server::CCitadelSoundStackFieldOBB
        {
        public:
            // Datamap fields:
            // Vector m_vMins; // 0x4a0
            // Vector m_vMaxs; // 0x4ac
            // uint32_t m_nMaxDistance; // 0x4b8
            // CUtlString m_nStackName; // 0x4c0
            // CUtlString m_nOperatorName; // 0x4c8
            // CUtlString m_nOperatorFieldName; // 0x4d0
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadelBaseMusicOBB has no schema binary (size is a guess)
    };
};
