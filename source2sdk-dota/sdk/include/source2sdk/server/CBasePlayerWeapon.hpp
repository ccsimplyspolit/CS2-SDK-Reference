#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/server/CBaseAnimatingActivity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7d0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBasePlayerWeapon : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            source2sdk::entity2::GameTick_t m_nNextPrimaryAttackTick; // 0x798            
            float m_flNextPrimaryAttackTickRatio; // 0x79c            
            source2sdk::entity2::GameTick_t m_nNextSecondaryAttackTick; // 0x7a0            
            float m_flNextSecondaryAttackTickRatio; // 0x7a4            
            std::int32_t m_iClip1; // 0x7a8            
            std::int32_t m_iClip2; // 0x7ac            
            std::int32_t m_pReserveAmmo[2]; // 0x7b0            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0x7b8            
            
            // Datamap fields:
            // int32_t InputSetClipPrimary; // 0x0
            // int32_t InputSetClipSecondary; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerWeapon) == 0x7d0);
    };
};
