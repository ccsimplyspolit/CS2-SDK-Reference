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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lich_Chain_Frost_Frostbound : public source2sdk::client::CDOTA_Buff
        {
        public:
            float jump_range; // 0x1a58            
            std::int32_t jumps_remaining; // 0x1a5c            
            std::int32_t damage_to_heroes; // 0x1a60            
            std::int32_t heroes_killed; // 0x1a64            
            bool m_bFoundTarget; // 0x1a68            
            uint8_t _pad1a69[0x3]; // 0x1a69
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a6c            
            uint8_t _pad1a70[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lich_Chain_Frost_Frostbound because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lich_Chain_Frost_Frostbound) == 0x1a88);
    };
};
