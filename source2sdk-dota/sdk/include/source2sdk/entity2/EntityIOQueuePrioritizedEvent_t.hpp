#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CVariantDefaultAllocator.hpp"
#include "source2sdk/entity2/EntityIOTargetType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace entity2
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x70
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct EntityIOQueuePrioritizedEvent_t
        {
        public:
            uint8_t _pad0000[0x4]; // 0x0
            source2sdk::entity2::GameTime_t m_flFireTime; // 0x4            
            source2sdk::entity2::EntityIOTargetType_t m_targetType; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            CUtlSymbolLarge m_pTarget; // 0x10            
            CUtlSymbolLarge m_pTargetInput; // 0x18            
            CEntityHandle m_hActivator; // 0x20            
            CEntityHandle m_hCaller; // 0x24            
            CEntityHandle m_hEntTarget; // 0x28            
            uint8_t _pad002c[0x4]; // 0x2c
            // metadata: MKV3TransferSaveOpsForField
            // m_variantValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CVariantBase<source2sdk::entity2::CVariantDefaultAllocator> m_variantValue;
            char m_variantValue[0x10]; // 0x30            
            uint8_t _pad0040[0x30];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::entity2::EntityIOQueuePrioritizedEvent_t, m_flFireTime) == 0x4);
        static_assert(offsetof(source2sdk::entity2::EntityIOQueuePrioritizedEvent_t, m_targetType) == 0x8);
        static_assert(offsetof(source2sdk::entity2::EntityIOQueuePrioritizedEvent_t, m_pTarget) == 0x10);
        static_assert(offsetof(source2sdk::entity2::EntityIOQueuePrioritizedEvent_t, m_pTargetInput) == 0x18);
        static_assert(offsetof(source2sdk::entity2::EntityIOQueuePrioritizedEvent_t, m_hActivator) == 0x20);
        static_assert(offsetof(source2sdk::entity2::EntityIOQueuePrioritizedEvent_t, m_hCaller) == 0x24);
        static_assert(offsetof(source2sdk::entity2::EntityIOQueuePrioritizedEvent_t, m_hEntTarget) == 0x28);
        static_assert(offsetof(source2sdk::entity2::EntityIOQueuePrioritizedEvent_t, m_variantValue) == 0x30);
        
        static_assert(sizeof(source2sdk::entity2::EntityIOQueuePrioritizedEvent_t) == 0x70);
    };
};
