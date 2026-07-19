#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CGameRules.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd8
        // Has VTable
        #pragma pack(push, 1)
        class CSingleplayRules : public source2sdk::server::CGameRules
        {
        public:
            bool m_bSinglePlayerGameEnding; // 0xd0            
            uint8_t _pad00d1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSingleplayRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSingleplayRules) == 0xd8);
    };
};
