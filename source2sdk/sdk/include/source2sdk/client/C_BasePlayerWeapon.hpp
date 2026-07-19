#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_EconEntity.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1728
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_BasePlayerWeapon : public source2sdk::client::C_EconEntity
        {
        public:
            source2sdk::entity2::GameTick_t m_nNextPrimaryAttackTick; // 0x16f0            
            float m_flNextPrimaryAttackTickRatio; // 0x16f4            
            source2sdk::entity2::GameTick_t m_nNextSecondaryAttackTick; // 0x16f8            
            float m_flNextSecondaryAttackTickRatio; // 0x16fc            
            std::int32_t m_iClip1; // 0x1700            
            std::int32_t m_iClip2; // 0x1704            
            std::int32_t m_pReserveAmmo[2]; // 0x1708            
            uint8_t _pad1710[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BasePlayerWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BasePlayerWeapon) == 0x1728);
    };
};
