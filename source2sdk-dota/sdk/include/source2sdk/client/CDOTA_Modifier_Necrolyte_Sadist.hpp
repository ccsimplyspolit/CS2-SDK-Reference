#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Necrolyte_Sadist : public source2sdk::client::CDOTA_Buff
        {
        public:
            float aura_radius; // 0x1a58            
            float regen; // 0x1a5c            
            bool m_bStackCountChanged; // 0x1a60            
            uint8_t _pad1a61[0x7]; // 0x1a61
            // m_fStackExpireTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t> m_fStackExpireTimes;
            char m_fStackExpireTimes[0x18]; // 0x1a68            
            float bonus_aoe; // 0x1a80            
            float bonus_spell_amp; // 0x1a84            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Necrolyte_Sadist because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Necrolyte_Sadist) == 0x1a88);
    };
};
