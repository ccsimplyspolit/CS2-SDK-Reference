#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/server/CEconEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xcd0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBasePlayerWeapon : public source2sdk::server::CEconEntity
        {
        public:
            source2sdk::entity2::GameTick_t m_nNextPrimaryAttackTick; // 0xc90            
            float m_flNextPrimaryAttackTickRatio; // 0xc94            
            source2sdk::entity2::GameTick_t m_nNextSecondaryAttackTick; // 0xc98            
            float m_flNextSecondaryAttackTickRatio; // 0xc9c            
            std::int32_t m_iClip1; // 0xca0            
            std::int32_t m_iClip2; // 0xca4            
            std::int32_t m_pReserveAmmo[2]; // 0xca8            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0xcb0            
            uint8_t _pad0cc8[0x8];
            
            // Datamap fields:
            // int32_t InputSetClipPrimary; // 0x0
            // int32_t InputSetClipSecondary; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerWeapon) == 0xcd0);
    };
};
