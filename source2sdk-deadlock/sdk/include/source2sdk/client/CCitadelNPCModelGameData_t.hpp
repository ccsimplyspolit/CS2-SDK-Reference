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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // 
        // static metadata: MModelGameData
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CCitadelNPCModelGameData_t
        {
        public:
            float m_flTurnThreshold; // 0x0            
            float m_flTurnDuration; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCitadelNPCModelGameData_t, m_flTurnThreshold) == 0x0);
        static_assert(offsetof(source2sdk::client::CCitadelNPCModelGameData_t, m_flTurnDuration) == 0x4);
        
        static_assert(sizeof(source2sdk::client::CCitadelNPCModelGameData_t) == 0x8);
    };
};
