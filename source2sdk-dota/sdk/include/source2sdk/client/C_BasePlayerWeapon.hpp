#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
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
        // Size: 0xaf8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_BasePlayerWeapon : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            source2sdk::entity2::GameTick_t m_nNextPrimaryAttackTick; // 0xac0            
            float m_flNextPrimaryAttackTickRatio; // 0xac4            
            source2sdk::entity2::GameTick_t m_nNextSecondaryAttackTick; // 0xac8            
            float m_flNextSecondaryAttackTickRatio; // 0xacc            
            std::int32_t m_iClip1; // 0xad0            
            std::int32_t m_iClip2; // 0xad4            
            std::int32_t m_pReserveAmmo[2]; // 0xad8            
            uint8_t _pad0ae0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BasePlayerWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BasePlayerWeapon) == 0xaf8);
    };
};
