#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t.hpp"
#include "source2sdk/client/CPlayerControllerComponent.hpp"
#include "source2sdk/client/MedalRank_t.hpp"
#include "source2sdk/client/ServerAuthoritativeWeaponSlot_t.hpp"

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
        // Size: 0xf0
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayerController_InventoryServices : public source2sdk::client::CPlayerControllerComponent
        {
        public:
            // m_vecNetworkableLoadout has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t> m_vecNetworkableLoadout;
            char m_vecNetworkableLoadout[0x18]; // 0x40            
            std::uint16_t m_unMusicID; // 0x58            
            uint8_t _pad005a[0x2]; // 0x5a
            source2sdk::client::MedalRank_t m_rank[6]; // 0x5c            
            std::int32_t m_nPersonaDataPublicLevel; // 0x74            
            std::int32_t m_nPersonaDataPublicCommendsLeader; // 0x78            
            std::int32_t m_nPersonaDataPublicCommendsTeacher; // 0x7c            
            std::int32_t m_nPersonaDataPublicCommendsFriendly; // 0x80            
            std::int32_t m_nPersonaDataXpTrailLevel; // 0x84            
            // m_vecServerAuthoritativeWeaponSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::ServerAuthoritativeWeaponSlot_t> m_vecServerAuthoritativeWeaponSlots;
            char m_vecServerAuthoritativeWeaponSlots[0x68]; // 0x88            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerController_InventoryServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayerController_InventoryServices) == 0xf0);
    };
};
