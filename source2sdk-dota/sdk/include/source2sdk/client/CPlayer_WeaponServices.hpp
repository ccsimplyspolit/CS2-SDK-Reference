#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
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
        // Size: 0xa8
        // Has VTable
        #pragma pack(push, 1)
        class CPlayer_WeaponServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            // m_hMyWeapons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BasePlayerWeapon>> m_hMyWeapons;
            char m_hMyWeapons[0x18]; // 0x48            
            // m_hActiveWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerWeapon> m_hActiveWeapon;
            char m_hActiveWeapon[0x4]; // 0x60            
            // m_hLastWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerWeapon> m_hLastWeapon;
            char m_hLastWeapon[0x4]; // 0x64            
            std::uint16_t m_iAmmo[32]; // 0x68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_WeaponServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPlayer_WeaponServices) == 0xa8);
    };
};
