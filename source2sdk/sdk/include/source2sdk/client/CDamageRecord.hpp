#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EKillTypes_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayerController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CSPlayerPawn;
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
        // Standard-layout class: true
        // Size: 0x78
        // Has VTable
        #pragma pack(push, 1)
        class CDamageRecord
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // m_PlayerDamager has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_PlayerDamager;
            char m_PlayerDamager[0x4]; // 0x30            
            // m_PlayerRecipient has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_PlayerRecipient;
            char m_PlayerRecipient[0x4]; // 0x34            
            // m_hPlayerControllerDamager has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCSPlayerController> m_hPlayerControllerDamager;
            char m_hPlayerControllerDamager[0x4]; // 0x38            
            // m_hPlayerControllerRecipient has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCSPlayerController> m_hPlayerControllerRecipient;
            char m_hPlayerControllerRecipient[0x4]; // 0x3c            
            CUtlString m_szPlayerDamagerName; // 0x40            
            CUtlString m_szPlayerRecipientName; // 0x48            
            std::uint64_t m_DamagerXuid; // 0x50            
            std::uint64_t m_RecipientXuid; // 0x58            
            float m_flBulletsDamage; // 0x60            
            float m_flDamage; // 0x64            
            float m_flActualHealthRemoved; // 0x68            
            std::int32_t m_iNumHits; // 0x6c            
            std::int32_t m_iLastBulletUpdate; // 0x70            
            bool m_bIsOtherEnemy; // 0x74            
            source2sdk::client::EKillTypes_t m_killType; // 0x75            
            uint8_t _pad0076[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_PlayerDamager) == 0x30);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_PlayerRecipient) == 0x34);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_hPlayerControllerDamager) == 0x38);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_hPlayerControllerRecipient) == 0x3c);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_szPlayerDamagerName) == 0x40);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_szPlayerRecipientName) == 0x48);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_DamagerXuid) == 0x50);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_RecipientXuid) == 0x58);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_flBulletsDamage) == 0x60);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_flDamage) == 0x64);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_flActualHealthRemoved) == 0x68);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_iNumHits) == 0x6c);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_iLastBulletUpdate) == 0x70);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_bIsOtherEnemy) == 0x74);
        static_assert(offsetof(source2sdk::client::CDamageRecord, m_killType) == 0x75);
        
        static_assert(sizeof(source2sdk::client::CDamageRecord) == 0x78);
    };
};
