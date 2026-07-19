#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/client/EDestructibleParts_DestroyParameterFlags.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x3c
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct DestructiblePartDamageRequest_t
        {
        public:
            source2sdk::client::HitGroup_t m_nHitGroup; // 0x0            
            std::int32_t m_nDamageLevel; // 0x4            
            std::uint16_t m_nDesiredHealth; // 0x8            
            uint8_t _pad000a[0x2]; // 0xa
            source2sdk::client::EDestructibleParts_DestroyParameterFlags m_nDestroyFlags; // 0xc            
            source2sdk::client::DamageTypes_t m_nDamageType; // 0x10            
            float m_flBreakDamage; // 0x14            
            float m_flBreakDamageRadius; // 0x18            
            // m_hAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttacker;
            char m_hAttacker[0x4]; // 0x1c            
            VectorWS m_vWsBreakDamageOrigin; // 0x20            
            Vector m_vWsBreakDamageForce; // 0x2c            
            uint8_t _pad0038[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DestructiblePartDamageRequest_t, m_nHitGroup) == 0x0);
        static_assert(offsetof(source2sdk::client::DestructiblePartDamageRequest_t, m_nDamageLevel) == 0x4);
        static_assert(offsetof(source2sdk::client::DestructiblePartDamageRequest_t, m_nDesiredHealth) == 0x8);
        static_assert(offsetof(source2sdk::client::DestructiblePartDamageRequest_t, m_nDestroyFlags) == 0xc);
        static_assert(offsetof(source2sdk::client::DestructiblePartDamageRequest_t, m_nDamageType) == 0x10);
        static_assert(offsetof(source2sdk::client::DestructiblePartDamageRequest_t, m_flBreakDamage) == 0x14);
        static_assert(offsetof(source2sdk::client::DestructiblePartDamageRequest_t, m_flBreakDamageRadius) == 0x18);
        static_assert(offsetof(source2sdk::client::DestructiblePartDamageRequest_t, m_hAttacker) == 0x1c);
        static_assert(offsetof(source2sdk::client::DestructiblePartDamageRequest_t, m_vWsBreakDamageOrigin) == 0x20);
        static_assert(offsetof(source2sdk::client::DestructiblePartDamageRequest_t, m_vWsBreakDamageForce) == 0x2c);
        
        static_assert(sizeof(source2sdk::client::DestructiblePartDamageRequest_t) == 0x3c);
    };
};
