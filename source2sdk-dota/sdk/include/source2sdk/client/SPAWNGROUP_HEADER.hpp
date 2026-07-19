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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class SPAWNGROUP_HEADER
        {
        public:
            CUtlString m_sGroupName; // 0x0            
            CUtlString m_sEntityLumpName; // 0x8            
            matrix3x4a_t m_vecWorldOffset; // 0x10            
            bool m_bClientSpawnGroup; // 0x40            
            bool m_bSuppressAllEntities; // 0x41            
            uint8_t _pad0042[0xe];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SPAWNGROUP_HEADER, m_sGroupName) == 0x0);
        static_assert(offsetof(source2sdk::client::SPAWNGROUP_HEADER, m_sEntityLumpName) == 0x8);
        static_assert(offsetof(source2sdk::client::SPAWNGROUP_HEADER, m_vecWorldOffset) == 0x10);
        static_assert(offsetof(source2sdk::client::SPAWNGROUP_HEADER, m_bClientSpawnGroup) == 0x40);
        static_assert(offsetof(source2sdk::client::SPAWNGROUP_HEADER, m_bSuppressAllEntities) == 0x41);
        
        static_assert(sizeof(source2sdk::client::SPAWNGROUP_HEADER) == 0x50);
    };
};
