#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CSPlayerPawn.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x3510
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_CSGO_PreviewPlayer : public source2sdk::client::C_CSPlayerPawn
        {
        public:
            CGlobalSymbol m_animgraphCharacterModeString; // 0x3470
            float m_flInitialModelScale; // 0x3478
            uint8_t _pad347c[0x94];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in C_CSGO_PreviewPlayer because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::C_CSGO_PreviewPlayer) == 0x3510);
    };
};
