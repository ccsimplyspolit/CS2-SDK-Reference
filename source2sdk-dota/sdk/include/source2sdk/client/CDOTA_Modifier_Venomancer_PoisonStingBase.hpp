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
        // Size: 0x1a70
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CDOTA_Modifier_Venomancer_PoisonStingBase : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iDamage; // 0x1a58            
            std::int32_t movement_speed; // 0x1a5c            
            std::int32_t m_nTicksRemaining; // 0x1a60            
            float m_flAttackDamage; // 0x1a64            
            std::int32_t hp_regen_reduction; // 0x1a68            
            uint8_t _pad1a6c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Venomancer_PoisonStingBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Venomancer_PoisonStingBase) == 0x1a70);
    };
};
