#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x4b8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvMuzzleFlash : public source2sdk::server::CPointEntity
        {
        public:
            float m_flScale; // 0x4a8            
            uint8_t _pad04ac[0x4]; // 0x4ac
            CUtlSymbolLarge m_iszParentAttachment; // 0x4b0            
            
            // Datamap fields:
            // void InputFire; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvMuzzleFlash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvMuzzleFlash) == 0x4b8);
    };
};
