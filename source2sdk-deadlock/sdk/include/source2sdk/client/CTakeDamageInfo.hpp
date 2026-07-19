#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AmmoIndex_t.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/client/DestructibleHitGroupToDestroy_t.hpp"
#include "source2sdk/client/ECitadelDamageType.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x100
        // Has VTable
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
            uint8_t _pad0066[0x2]; // 0x66
            float m_flDamageAbsorbed; // 0x68            
            uint8_t _pad006c[0xc]; // 0x6c
            source2sdk::client::TakeDamageFlags_t m_nDamageFlags; // 0x78            
            // metadata: MNotSaved
            source2sdk::client::HitGroup_t m_iHitGroupId; // 0x80            
            // metadata: MNotSaved
            source2sdk::client::ECitadelDamageType m_eCitadelDamageType; // 0x84            
            // metadata: MNotSaved
            float m_flAfterBuffDamage; // 0x88            
            // metadata: MNotSaved
            float m_flPreResistDamage; // 0x8c            
            // metadata: MNotSaved
            bool m_bEvaded; // 0x90            
            uint8_t _pad0091[0x3]; // 0x91
            // metadata: MNotSaved
            Vector m_vecDamageNormal; // 0x94            
            uint8_t _pad00a0[0x8]; // 0xa0
            // metadata: MNotSaved
            // m_hOriginator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOriginator;
            char m_hOriginator[0x4]; // 0xa8            
            // metadata: MNotSaved
            std::int32_t m_iBatchCount; // 0xac            
            // metadata: MNotSaved
            float m_flEffectiveness; // 0xb0            
            // metadata: MNotSaved
            float m_timeDamage; // 0xb4            
            // metadata: MNotSaved
            float m_flCritDamage; // 0xb8            
            uint8_t _pad00bc[0x24]; // 0xbc
            // m_nDestructibleHitGroupsToForceDestroy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::DestructibleHitGroupToDestroy_t> m_nDestructibleHitGroupsToForceDestroy;
            char m_nDestructibleHitGroupsToForceDestroy[0x18]; // 0xe0            
            // metadata: MNotSaved
            bool m_bInTakeDamageFlow; // 0xf8            
            uint8_t _pad00f9[0x7];
            
            // Datamap fields:
            // void m_hScriptInstance; // 0xc0
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
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flDamageAbsorbed) == 0x68);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_nDamageFlags) == 0x78);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_iHitGroupId) == 0x80);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_eCitadelDamageType) == 0x84);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flAfterBuffDamage) == 0x88);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flPreResistDamage) == 0x8c);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bEvaded) == 0x90);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_vecDamageNormal) == 0x94);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_hOriginator) == 0xa8);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_iBatchCount) == 0xac);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flEffectiveness) == 0xb0);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_timeDamage) == 0xb4);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_flCritDamage) == 0xb8);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_nDestructibleHitGroupsToForceDestroy) == 0xe0);
        static_assert(offsetof(source2sdk::client::CTakeDamageInfo, m_bInTakeDamageFlow) == 0xf8);
        
        static_assert(sizeof(source2sdk::client::CTakeDamageInfo) == 0x100);
    };
};
