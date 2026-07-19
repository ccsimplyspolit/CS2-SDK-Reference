#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerControllerComponent.hpp"
#include "source2sdk/client/MedalRank_t.hpp"
#include "source2sdk/server/ServerAuthoritativeWeaponSlot_t.hpp"

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
        // Size: 0xfe0
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayerController_InventoryServices : public source2sdk::client::CPlayerControllerComponent
        {
        public:
            std::uint16_t m_unMusicID; // 0x40            
            uint8_t _pad0042[0x2]; // 0x42
            source2sdk::client::MedalRank_t m_rank[6]; // 0x44            
            std::int32_t m_nPersonaDataPublicLevel; // 0x5c            
            std::int32_t m_nPersonaDataPublicCommendsLeader; // 0x60            
            std::int32_t m_nPersonaDataPublicCommendsTeacher; // 0x64            
            std::int32_t m_nPersonaDataPublicCommendsFriendly; // 0x68            
            std::int32_t m_nPersonaDataXpTrailLevel; // 0x6c            
            uint8_t _pad0070[0xed8]; // 0x70
            std::uint32_t m_unEquippedPlayerSprayIDs[1]; // 0xf48            
            uint8_t _pad0f4c[0x4]; // 0xf4c
            std::uint64_t m_unCurrentLoadoutHash; // 0xf50            
            // m_vecServerAuthoritativeWeaponSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::ServerAuthoritativeWeaponSlot_t> m_vecServerAuthoritativeWeaponSlots;
            char m_vecServerAuthoritativeWeaponSlots[0x88]; // 0xf58            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerController_InventoryServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayerController_InventoryServices) == 0xfe0);
    };
};
