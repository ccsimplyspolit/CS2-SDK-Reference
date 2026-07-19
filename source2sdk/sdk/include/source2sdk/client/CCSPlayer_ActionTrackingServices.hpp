#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/client/WeaponPurchaseTracker_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BasePlayerWeapon;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x130
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayer_ActionTrackingServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            // m_hLastWeaponBeforeC4AutoSwitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerWeapon> m_hLastWeaponBeforeC4AutoSwitch;
            char m_hLastWeaponBeforeC4AutoSwitch[0x4]; // 0x48            
            bool m_bIsRescuing; // 0x4c            
            uint8_t _pad004d[0x3]; // 0x4d
            source2sdk::client::WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x50            
            source2sdk::client::WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0xc0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_ActionTrackingServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayer_ActionTrackingServices) == 0x130);
    };
};
