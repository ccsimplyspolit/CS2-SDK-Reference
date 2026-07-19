#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/client/SurroundingBoundsType_t.hpp"
#include "source2sdk/server/VPhysicsCollisionAttribute_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xb8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCollisionProperty
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            source2sdk::server::VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x10            
            // metadata: MSaveBehavior
            Vector m_vecMins; // 0x40            
            // metadata: MSaveBehavior
            Vector m_vecMaxs; // 0x4c            
            uint8_t _pad0058[0x2]; // 0x58
            std::uint8_t m_usSolidFlags; // 0x5a            
            source2sdk::client::SolidType_t m_nSolidType; // 0x5b            
            std::uint8_t m_triggerBloat; // 0x5c            
            source2sdk::client::SurroundingBoundsType_t m_nSurroundType; // 0x5d            
            std::uint8_t m_CollisionGroup; // 0x5e            
            std::uint8_t m_nEnablePhysics; // 0x5f            
            float m_flBoundingRadius; // 0x60            
            Vector m_vecSpecifiedSurroundingMins; // 0x64            
            Vector m_vecSpecifiedSurroundingMaxs; // 0x70            
            Vector m_vecSurroundingMaxs; // 0x7c            
            Vector m_vecSurroundingMins; // 0x88            
            Vector m_vCapsuleCenter1; // 0x94            
            Vector m_vCapsuleCenter2; // 0xa0            
            float m_flCapsuleRadius; // 0xac            
            uint8_t _pad00b0[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_collisionAttribute) == 0x10);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_vecMins) == 0x40);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_vecMaxs) == 0x4c);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_usSolidFlags) == 0x5a);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_nSolidType) == 0x5b);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_triggerBloat) == 0x5c);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_nSurroundType) == 0x5d);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_CollisionGroup) == 0x5e);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_nEnablePhysics) == 0x5f);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_flBoundingRadius) == 0x60);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_vecSpecifiedSurroundingMins) == 0x64);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_vecSpecifiedSurroundingMaxs) == 0x70);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_vecSurroundingMaxs) == 0x7c);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_vecSurroundingMins) == 0x88);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_vCapsuleCenter1) == 0x94);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_vCapsuleCenter2) == 0xa0);
        static_assert(offsetof(source2sdk::server::CCollisionProperty, m_flCapsuleRadius) == 0xac);
        
        static_assert(sizeof(source2sdk::server::CCollisionProperty) == 0xb8);
    };
};
