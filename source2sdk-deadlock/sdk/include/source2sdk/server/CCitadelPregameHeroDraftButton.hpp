#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDynamicProp.hpp"

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
        // Size: 0xcf0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelPregameHeroDraftButton : public source2sdk::server::CDynamicProp
        {
        public:
            uint8_t _pad0cd0[0x18]; // 0xcd0
            std::int32_t m_nGameStateChangedEventID; // 0xce8
            uint8_t _pad0cec[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CCitadelPregameHeroDraftButton because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CCitadelPregameHeroDraftButton) == 0xcf0);
    };
};
