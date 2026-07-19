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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bane_Nightmare : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nSource; // 0x1a58            
            float animation_rate; // 0x1a5c            
            Vector m_vWalkDir; // 0x1a60            
            std::int32_t walk_speed; // 0x1a6c            
            float turn_rate; // 0x1a70            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x1a74            
            float m_flWalkAngle; // 0x1a78            
            uint8_t _pad1a7c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bane_Nightmare because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Bane_Nightmare) == 0x1a80);
    };
};
