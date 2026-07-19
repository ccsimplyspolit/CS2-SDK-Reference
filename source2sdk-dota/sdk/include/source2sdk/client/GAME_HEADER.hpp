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
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class GAME_HEADER
        {
        public:
            CUtlString m_sComment; // 0x0            
            std::int32_t m_nSpawnGroupCount; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            CUtlString m_sLandmark; // 0x10            
            CUtlString m_sRequiredAddons; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::GAME_HEADER, m_sComment) == 0x0);
        static_assert(offsetof(source2sdk::client::GAME_HEADER, m_nSpawnGroupCount) == 0x8);
        static_assert(offsetof(source2sdk::client::GAME_HEADER, m_sLandmark) == 0x10);
        static_assert(offsetof(source2sdk::client::GAME_HEADER, m_sRequiredAddons) == 0x18);
        
        static_assert(sizeof(source2sdk::client::GAME_HEADER) == 0x20);
    };
};
