#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_Stunned.hpp"

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
        // Size: 0xe8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy : public source2sdk::server::CCitadel_Modifier_Stunned
        {
        public:
            Vector m_vThrowVelocity; // 0xd8            
            uint8_t _pad00e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy) == 0xe8);
    };
};
