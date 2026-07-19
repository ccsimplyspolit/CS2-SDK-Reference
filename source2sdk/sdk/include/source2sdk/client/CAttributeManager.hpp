#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAttributeManager_cached_attribute_float_t.hpp"
#include "source2sdk/client/attributeprovidertypes_t.hpp"
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
        // Size: 0x50
        // Has VTable
        #pragma pack(push, 1)
        class CAttributeManager
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_Providers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_Providers;
            char m_Providers[0x18]; // 0x8            
            std::int32_t m_iReapplyProvisionParity; // 0x20            
            // m_hOuter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOuter;
            char m_hOuter[0x4]; // 0x24            
            bool m_bPreventLoopback; // 0x28            
            uint8_t _pad0029[0x3]; // 0x29
            source2sdk::client::attributeprovidertypes_t m_ProviderType; // 0x2c            
            // m_CachedResults has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CAttributeManager_cached_attribute_float_t> m_CachedResults;
            char m_CachedResults[0x18]; // 0x30            
            uint8_t _pad0048[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CAttributeManager, m_Providers) == 0x8);
        static_assert(offsetof(source2sdk::client::CAttributeManager, m_iReapplyProvisionParity) == 0x20);
        static_assert(offsetof(source2sdk::client::CAttributeManager, m_hOuter) == 0x24);
        static_assert(offsetof(source2sdk::client::CAttributeManager, m_bPreventLoopback) == 0x28);
        static_assert(offsetof(source2sdk::client::CAttributeManager, m_ProviderType) == 0x2c);
        static_assert(offsetof(source2sdk::client::CAttributeManager, m_CachedResults) == 0x30);
        
        static_assert(sizeof(source2sdk::client::CAttributeManager) == 0x50);
    };
};
