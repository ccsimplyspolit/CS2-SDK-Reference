#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Standard-layout class: false
        // Size: 0x658
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CCitadelSoundOpvarSetOBB : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05f0[0x18]; // 0x5f0
            CUtlSymbolLarge m_iszStackName; // 0x608            
            CUtlSymbolLarge m_iszOperatorName; // 0x610            
            CUtlSymbolLarge m_iszOpvarName; // 0x618            
            Vector m_vDistanceInnerMins; // 0x620            
            Vector m_vDistanceInnerMaxs; // 0x62c            
            Vector m_vDistanceOuterMins; // 0x638            
            Vector m_vDistanceOuterMaxs; // 0x644            
            std::int32_t m_nAABBDirection; // 0x650            
            uint8_t _pad0654[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelSoundOpvarSetOBB because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelSoundOpvarSetOBB) == 0x658);
    };
};
