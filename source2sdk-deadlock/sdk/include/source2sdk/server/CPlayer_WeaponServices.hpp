#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
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
        // Size: 0xb0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CBasePlayerWeapon > m_hMyWeapons"
        // static metadata: MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hActiveWeapon"
        // static metadata: MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hLastWeapon"
        // static metadata: MNetworkVarNames "uint16 m_iAmmo"
        #pragma pack(push, 1)
        class CPlayer_WeaponServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMyWeaponsChanged"
            // m_hMyWeapons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBasePlayerWeapon>> m_hMyWeapons;
            char m_hMyWeapons[0x18]; // 0x48            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnActiveWeaponChanged"
            // m_hActiveWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerWeapon> m_hActiveWeapon;
            char m_hActiveWeapon[0x4]; // 0x60            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_hLastWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerWeapon> m_hLastWeapon;
            char m_hLastWeapon[0x4]; // 0x64            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnReserveAmmoChanged"
            std::uint16_t m_iAmmo[32]; // 0x68            
            bool m_bPreventWeaponPickup; // 0xa8            
            uint8_t _pad00a9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_WeaponServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayer_WeaponServices) == 0xb0);
    };
};
