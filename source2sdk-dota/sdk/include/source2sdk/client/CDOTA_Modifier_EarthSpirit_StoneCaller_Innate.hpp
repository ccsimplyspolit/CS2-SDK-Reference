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
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_EarthSpirit_StoneCaller_Innate : public source2sdk::client::CDOTA_Buff
        {
        public:
            float attack_damage_per_stone; // 0x1a58            
            float attack_damage_per_stone_used; // 0x1a5c            
            float buff_duration; // 0x1a60            
            source2sdk::entity2::GameTime_t m_ExpireTime; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_StoneCaller_Innate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_EarthSpirit_StoneCaller_Innate) == 0x1a68);
    };
};
