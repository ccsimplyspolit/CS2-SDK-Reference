#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/server/WeaponPurchaseTracker_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerWeapon;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x310
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayer_ActionTrackingServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            uint8_t _pad0048[0x1b0]; // 0x48
            // m_hLastWeaponBeforeC4AutoSwitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerWeapon> m_hLastWeaponBeforeC4AutoSwitch;
            char m_hLastWeaponBeforeC4AutoSwitch[0x4]; // 0x1f8            
            uint8_t _pad01fc[0x28]; // 0x1fc
            bool m_bIsRescuing; // 0x224            
            uint8_t _pad0225[0x3]; // 0x225
            source2sdk::server::WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x228            
            source2sdk::server::WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0x298            
            uint8_t _pad0308[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_ActionTrackingServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_ActionTrackingServices) == 0x310);
    };
};
