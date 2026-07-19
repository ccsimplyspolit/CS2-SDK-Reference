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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enchantress_NaturesAttendants_DamageTracker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iDamageTaken; // 0x1a58            
            std::int32_t overprotective_damage_threshold; // 0x1a5c            
            float overprotective_damage_reset_interval; // 0x1a60            
            float overprotective_wisp_duration; // 0x1a64            
            std::int32_t overprotective_wisp_count; // 0x1a68            
            float heal_interval; // 0x1a6c            
            std::int32_t overprotective_max_wisps; // 0x1a70            
            std::int32_t heal; // 0x1a74            
            float heal_duration; // 0x1a78            
            std::int32_t wisp_count; // 0x1a7c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enchantress_NaturesAttendants_DamageTracker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Enchantress_NaturesAttendants_DamageTracker) == 0x1a80);
    };
};
