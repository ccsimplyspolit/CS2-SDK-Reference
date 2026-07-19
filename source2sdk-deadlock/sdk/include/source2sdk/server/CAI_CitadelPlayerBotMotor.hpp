#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_Motor.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xf70
        // Has VTable
        #pragma pack(push, 1)
        class CAI_CitadelPlayerBotMotor : public source2sdk::server::CAI_Motor
        {
        public:
            uint8_t _pad0f40[0x30];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CAI_CitadelPlayerBotMotor has no schema binary (size is a guess)
    };
};
