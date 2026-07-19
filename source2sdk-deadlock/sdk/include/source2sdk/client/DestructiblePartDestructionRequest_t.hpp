#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/client/EDestructibleParts_DestroyParameterFlags.hpp"
#include "source2sdk/client/HitGroup_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x30
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct DestructiblePartDestructionRequest_t
        {
        public:
            source2sdk::client::HitGroup_t m_nHitGroup; // 0x0            
            std::int32_t m_nDamageLevel; // 0x4            
            source2sdk::client::EDestructibleParts_DestroyParameterFlags m_nDestroyFlags; // 0x8            
            source2sdk::client::DamageTypes_t m_nDamageType; // 0xc            
            float m_flBreakDamage; // 0x10            
            float m_flBreakDamageRadius; // 0x14            
            VectorWS m_vWsBreakDamageOrigin; // 0x18            
            Vector m_vWsBreakDamageForce; // 0x24            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DestructiblePartDestructionRequest_t, m_nHitGroup) == 0x0);
        static_assert(offsetof(source2sdk::client::DestructiblePartDestructionRequest_t, m_nDamageLevel) == 0x4);
        static_assert(offsetof(source2sdk::client::DestructiblePartDestructionRequest_t, m_nDestroyFlags) == 0x8);
        static_assert(offsetof(source2sdk::client::DestructiblePartDestructionRequest_t, m_nDamageType) == 0xc);
        static_assert(offsetof(source2sdk::client::DestructiblePartDestructionRequest_t, m_flBreakDamage) == 0x10);
        static_assert(offsetof(source2sdk::client::DestructiblePartDestructionRequest_t, m_flBreakDamageRadius) == 0x14);
        static_assert(offsetof(source2sdk::client::DestructiblePartDestructionRequest_t, m_vWsBreakDamageOrigin) == 0x18);
        static_assert(offsetof(source2sdk::client::DestructiblePartDestructionRequest_t, m_vWsBreakDamageForce) == 0x24);
        
        static_assert(sizeof(source2sdk::client::DestructiblePartDestructionRequest_t) == 0x30);
    };
};
