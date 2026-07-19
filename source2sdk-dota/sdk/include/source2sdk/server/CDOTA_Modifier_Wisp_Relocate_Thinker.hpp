#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Wisp_Relocate_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float cast_delay; // 0x1a58            
            source2sdk::client::ParticleIndex_t m_nFXIndexEndTeam; // 0x1a5c            
            source2sdk::client::ParticleIndex_t m_nFXIndexChannel; // 0x1a60            
            uint8_t _pad1a64[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Wisp_Relocate_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Wisp_Relocate_Thinker) == 0x1a68);
    };
};
