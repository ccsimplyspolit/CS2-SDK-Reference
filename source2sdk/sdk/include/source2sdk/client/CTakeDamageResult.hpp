#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DestructiblePartDamageRequest_t.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x60
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CTakeDamageResult
        {
        public:
            // metadata: MKV3TransferSaveOpsForField
            source2sdk::client::CTakeDamageInfo* m_pOriginatingInfo; // 0x0            
            // m_DestructibleHitGroupRequests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::client::DestructiblePartDamageRequest_t> m_DestructibleHitGroupRequests;
            char m_DestructibleHitGroupRequests[0x10]; // 0x8            
            std::int32_t m_nHealthLost; // 0x18            
            std::int32_t m_nHealthBefore; // 0x1c            
            float m_flDamageDealt; // 0x20            
            float m_flPreModifiedDamage; // 0x24            
            VectorWS m_vDamagePosition; // 0x28            
            std::int32_t m_nTotalledHealthLost; // 0x34            
            float m_flTotalledDamageDealt; // 0x38            
            float m_flTotalledPreModifiedDamage; // 0x3c            
            float m_flNewDamageAccumulatorValue; // 0x40            
            uint8_t _pad0044[0x4]; // 0x44
            source2sdk::client::TakeDamageFlags_t m_nDamageFlags; // 0x48            
            bool m_bWasDamageSuppressed; // 0x50            
            bool m_bSuppressFlinch; // 0x51            
            uint8_t _pad0052[0x2]; // 0x52
            source2sdk::client::HitGroup_t m_nOverrideFlinchHitGroup; // 0x54            
            uint8_t _pad0058[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_pOriginatingInfo) == 0x0);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_DestructibleHitGroupRequests) == 0x8);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nHealthLost) == 0x18);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nHealthBefore) == 0x1c);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_flDamageDealt) == 0x20);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_flPreModifiedDamage) == 0x24);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_vDamagePosition) == 0x28);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nTotalledHealthLost) == 0x34);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_flTotalledDamageDealt) == 0x38);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_flTotalledPreModifiedDamage) == 0x3c);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_flNewDamageAccumulatorValue) == 0x40);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nDamageFlags) == 0x48);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_bWasDamageSuppressed) == 0x50);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_bSuppressFlinch) == 0x51);
        static_assert(offsetof(source2sdk::client::CTakeDamageResult, m_nOverrideFlinchHitGroup) == 0x54);
        
        static_assert(sizeof(source2sdk::client::CTakeDamageResult) == 0x60);
    };
};
