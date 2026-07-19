#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x30
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VPhysicsCollisionAttribute_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            std::uint64_t m_nInteractsAs; // 0x8            
            std::uint64_t m_nInteractsWith; // 0x10            
            std::uint64_t m_nInteractsExclude; // 0x18            
            std::uint32_t m_nEntityId; // 0x20            
            std::uint32_t m_nOwnerId; // 0x24            
            std::uint16_t m_nHierarchyId; // 0x28            
            std::uint16_t m_nDetailLayerMask; // 0x2a            
            std::uint8_t m_nDetailLayerMaskType; // 0x2c            
            std::uint8_t m_nTargetDetailLayer; // 0x2d            
            std::uint8_t m_nCollisionGroup; // 0x2e            
            std::uint8_t m_nCollisionFunctionMask; // 0x2f            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nInteractsAs) == 0x8);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nInteractsWith) == 0x10);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nInteractsExclude) == 0x18);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nEntityId) == 0x20);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nOwnerId) == 0x24);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nHierarchyId) == 0x28);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nDetailLayerMask) == 0x2a);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nDetailLayerMaskType) == 0x2c);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nTargetDetailLayer) == 0x2d);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nCollisionGroup) == 0x2e);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nCollisionFunctionMask) == 0x2f);
        
        static_assert(sizeof(source2sdk::client::VPhysicsCollisionAttribute_t) == 0x30);
    };
};
