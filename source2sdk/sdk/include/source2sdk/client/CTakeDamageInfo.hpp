#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AmmoIndex_t.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/client/DestructiblePartDamageRequest_t.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x118
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTakeDamageInfo
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            Vector m_vecDamageForce; // 0x8            
            VectorWS m_vecDamagePosition; // 0x14            
            VectorWS m_vecReportedPosition; // 0x20            
            Vector m_vecDamageDirection; // 0x2c            
            // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hInflictor;
            char m_hInflictor[0x4]; // 0x38            
            // m_hAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttacker;
            char m_hAttacker[0x4]; // 0x3c            
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAbility;
            char m_hAbility[0x4]; // 0x40            
            float m_flDamage; // 0x44            
            float m_flTotalledDamage; // 0x48            
            source2sdk::client::DamageTypes_t m_bitsDamageType; // 0x4c            
            std::int32_t m_iDamageCustom; // 0x50            
            source2sdk::client::AmmoIndex_t m_iAmmoType; // 0x54            
            uint8_t _pad0055[0xb]; // 0x55
            float m_flOriginalDamage; // 0x60            
            bool m_bShouldBleed; // 0x64            
            bool m_bShouldSpark; // 0x65            
            uint8_t _pad0066[0xa]; // 0x66
            source2sdk::client::TakeDamageFlags_t m_nDamageFlags; // 0x70            
            source2sdk::client::HitGroup_t m_iHitGroupId; // 0x78            
            std::int32_t m_nNumObjectsPenetrated; // 0x7c            
            float m_flFriendlyFireDamageReductionRatio; // 0x80            
            bool m_bStoppedBullet; // 0x84            
            uint8_t _pad0085[0x7b]; // 0x85
            // m_DestructibleHitGroupRequests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::client::DestructiblePartDamageRequest_t> m_DestructibleHitGroupRequests;
            char m_DestructibleHitGroupRequests[0x10]; // 0x100            
            // metadata: MNotSaved
            bool m_bInTakeDamageFlow; // 0x110            
            uint8_t _pad0111[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_vecDamageForce) == 0x8);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_vecDamagePosition) == 0x14);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_vecReportedPosition) == 0x20);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_vecDamageDirection) == 0x2c);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_hInflictor) == 0x38);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_hAttacker) == 0x3c);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_hAbility) == 0x40);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flDamage) == 0x44);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flTotalledDamage) == 0x48);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bitsDamageType) == 0x4c);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_iDamageCustom) == 0x50);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_iAmmoType) == 0x54);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flOriginalDamage) == 0x60);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bShouldBleed) == 0x64);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bShouldSpark) == 0x65);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_nDamageFlags) == 0x70);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_iHitGroupId) == 0x78);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_nNumObjectsPenetrated) == 0x7c);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flFriendlyFireDamageReductionRatio) == 0x80);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bStoppedBullet) == 0x84);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_DestructibleHitGroupRequests) == 0x100);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bInTakeDamageFlow) == 0x110);
        
        static_assert(sizeof(source2sdk::client::CTakeDamageInfo) == 0x118);
    };
};
