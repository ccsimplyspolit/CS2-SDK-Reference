#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPlayer_WeaponServices.hpp"
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
        // Size: 0x1880
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayer_WeaponServices : public source2sdk::server::CPlayer_WeaponServices
        {
        public:
            uint8_t _pad00b0[0x10]; // 0xb0
            source2sdk::entity2::GameTime_t m_flNextAttack; // 0xc0            
            // m_hSavedWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerWeapon> m_hSavedWeapon;
            char m_hSavedWeapon[0x4]; // 0xc4            
            std::int32_t m_nTimeToMelee; // 0xc8            
            std::int32_t m_nTimeToSecondary; // 0xcc            
            std::int32_t m_nTimeToPrimary; // 0xd0            
            std::int32_t m_nTimeToSniperRifle; // 0xd4            
            bool m_bIsBeingGivenItem; // 0xd8            
            bool m_bIsPickingUpItemWithUse; // 0xd9            
            bool m_bPickedUpWeapon; // 0xda            
            bool m_bDisableAutoDeploy; // 0xdb            
            bool m_bIsPickingUpGroundWeapon; // 0xdc            
            uint8_t _pad00dd[0x1783]; // 0xdd
            // m_networkAnimTiming has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_networkAnimTiming;
            char m_networkAnimTiming[0x18]; // 0x1860            
            bool m_bBlockInspectUntilNextGraphUpdate; // 0x1878            
            uint8_t _pad1879[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_WeaponServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_WeaponServices) == 0x1880);
    };
};
