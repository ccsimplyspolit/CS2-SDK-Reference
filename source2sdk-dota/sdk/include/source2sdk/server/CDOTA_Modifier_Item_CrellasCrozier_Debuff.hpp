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
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_CrellasCrozier_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_share; // 0x1a58            
            float health_steal; // 0x1a5c            
            float active_health_steal; // 0x1a60            
            float m_flAccumulatedDamage; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_CrellasCrozier_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_CrellasCrozier_Debuff) == 0x1a68);
    };
};
