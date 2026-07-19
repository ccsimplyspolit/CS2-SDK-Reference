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
        // Size: 0x668
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CCitadelSoundOpvarSetOBB : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0600[0x18]; // 0x600
            CUtlSymbolLarge m_iszStackName; // 0x618            
            CUtlSymbolLarge m_iszOperatorName; // 0x620            
            CUtlSymbolLarge m_iszOpvarName; // 0x628            
            Vector m_vDistanceInnerMins; // 0x630            
            Vector m_vDistanceInnerMaxs; // 0x63c            
            Vector m_vDistanceOuterMins; // 0x648            
            Vector m_vDistanceOuterMaxs; // 0x654            
            std::int32_t m_nAABBDirection; // 0x660            
            uint8_t _pad0664[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelSoundOpvarSetOBB because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelSoundOpvarSetOBB) == 0x668);
    };
};
