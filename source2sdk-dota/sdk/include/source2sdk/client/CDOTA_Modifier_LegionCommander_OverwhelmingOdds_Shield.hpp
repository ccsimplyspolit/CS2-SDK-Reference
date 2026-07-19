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
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_LegionCommander_OverwhelmingOdds_Shield : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nDamageAbsorbed; // 0x1a58            
            bool m_bStartedTimer; // 0x1a5c            
            uint8_t _pad1a5d[0x3]; // 0x1a5d
            source2sdk::entity2::GameTime_t m_timeLastDamage; // 0x1a60            
            std::int32_t bonus_hp_regen; // 0x1a64            
            std::int32_t shield; // 0x1a68            
            std::int32_t total_shield; // 0x1a6c            
            float restore_time; // 0x1a70            
            uint8_t _pad1a74[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_LegionCommander_OverwhelmingOdds_Shield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_LegionCommander_OverwhelmingOdds_Shield) == 0x1a78);
    };
};
