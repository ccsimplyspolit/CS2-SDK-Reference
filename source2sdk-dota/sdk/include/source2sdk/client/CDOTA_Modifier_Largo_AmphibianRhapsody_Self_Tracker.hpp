#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Largo_AmphibianRhapsody_Self_Tracker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nNumSuccess; // 0x1a78
            std::int32_t m_nNumFail; // 0x1a7c
            std::int32_t m_nNumExpire; // 0x1a80
            uint8_t _pad1a84[0x4]; // 0x1a84
            // m_vecSongsPlayed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecSongsPlayed;
            char m_vecSongsPlayed[0x18]; // 0x1a88
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_AmphibianRhapsody_Self_Tracker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Largo_AmphibianRhapsody_Self_Tracker) == 0x1aa0);
    };
};
