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
        // Size: 0x60
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class SAVE_HEADER
        {
        public:
            std::int32_t m_saveId; // 0x0            
            std::int32_t m_version; // 0x4            
            std::int32_t m_nConnectionCount; // 0x8            
            std::int32_t m_nMapVersion; // 0xc            
            CUtlString m_sSpawnGroupName; // 0x10            
            uint8_t _pad0018[0x8]; // 0x18
            matrix3x4a_t m_vecWorldOffset; // 0x20            
            float m_flSaveTime; // 0x50            
            uint8_t _pad0054[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SAVE_HEADER, m_saveId) == 0x0);
        static_assert(offsetof(source2sdk::client::SAVE_HEADER, m_version) == 0x4);
        static_assert(offsetof(source2sdk::client::SAVE_HEADER, m_nConnectionCount) == 0x8);
        static_assert(offsetof(source2sdk::client::SAVE_HEADER, m_nMapVersion) == 0xc);
        static_assert(offsetof(source2sdk::client::SAVE_HEADER, m_sSpawnGroupName) == 0x10);
        static_assert(offsetof(source2sdk::client::SAVE_HEADER, m_vecWorldOffset) == 0x20);
        static_assert(offsetof(source2sdk::client::SAVE_HEADER, m_flSaveTime) == 0x50);
        
        static_assert(sizeof(source2sdk::client::SAVE_HEADER) == 0x60);
    };
};
