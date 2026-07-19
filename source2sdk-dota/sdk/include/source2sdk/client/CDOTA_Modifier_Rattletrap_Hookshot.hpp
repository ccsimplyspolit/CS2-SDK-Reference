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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rattletrap_Hookshot : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a58[0x14]; // 0x1a58
            std::int32_t speed; // 0x1a6c            
            float stun_radius; // 0x1a70            
            float radius_ally; // 0x1a74            
            float cooldown_refund_ally; // 0x1a78            
            float damage; // 0x1a7c            
            float duration; // 0x1a80            
            float ally_shield_duration; // 0x1a84            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Hookshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Rattletrap_Hookshot) == 0x1a88);
    };
};
