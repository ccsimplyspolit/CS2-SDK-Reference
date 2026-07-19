#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Omniknight_Degen_Aura_Effect : public source2sdk::client::CDOTA_Buff
        {
        public:
            float speed_bonus; // 0x1a58            
            std::int32_t bonus_damage_per_stack; // 0x1a5c            
            float stack_interval; // 0x1a60            
            float linger_duration; // 0x1a64            
            std::int32_t max_stacks; // 0x1a68            
            bool m_bActive; // 0x1a6c            
            uint8_t _pad1a6d[0x3]; // 0x1a6d
            source2sdk::entity2::GameTime_t m_flLastActiveTime; // 0x1a70            
            uint8_t _pad1a74[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Omniknight_Degen_Aura_Effect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Omniknight_Degen_Aura_Effect) == 0x1a78);
    };
};
