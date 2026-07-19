#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Largo_AmphibianRhapsody_Self_Tracker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nNumSuccess; // 0x1a58            
            std::int32_t m_nNumFail; // 0x1a5c            
            std::int32_t m_nNumExpire; // 0x1a60            
            uint8_t _pad1a64[0x4]; // 0x1a64
            // m_vecSongsPlayed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecSongsPlayed;
            char m_vecSongsPlayed[0x18]; // 0x1a68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_AmphibianRhapsody_Self_Tracker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Largo_AmphibianRhapsody_Self_Tracker) == 0x1a80);
    };
};
