#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HitGroup_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CTakeDamageInfo;
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
        // Size: 0x30
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CTakeDamageResult
        {
        public:
            // metadata: MNotSaved
            source2sdk::client::CTakeDamageInfo* m_pOriginatingInfo; // 0x0            
            std::int32_t m_nHealthLost; // 0x8            
            std::int32_t m_nHealthBefore; // 0xc            
            std::int32_t m_nDamageDealt; // 0x10            
            float m_flPreModifiedDamage; // 0x14            
            std::int32_t m_nTotalledHealthLost; // 0x18            
            std::int32_t m_nTotalledDamageDealt; // 0x1c            
            float m_flTotalledPreModifiedDamage; // 0x20            
            bool m_bWasDamageSuppressed; // 0x24            
            bool m_bSuppressFlinch; // 0x25            
            uint8_t _pad0026[0x2]; // 0x26
            source2sdk::client::HitGroup_t m_nOverrideFlinchHitGroup; // 0x28            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_pOriginatingInfo) == 0x0);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nHealthLost) == 0x8);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nHealthBefore) == 0xc);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nDamageDealt) == 0x10);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_flPreModifiedDamage) == 0x14);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nTotalledHealthLost) == 0x18);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nTotalledDamageDealt) == 0x1c);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_flTotalledPreModifiedDamage) == 0x20);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_bWasDamageSuppressed) == 0x24);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_bSuppressFlinch) == 0x25);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nOverrideFlinchHitGroup) == 0x28);
        
        static_assert(sizeof(source2sdk::client::CTakeDamageResult) == 0x30);
    };
};
