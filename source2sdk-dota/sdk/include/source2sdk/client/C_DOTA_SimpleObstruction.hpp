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
        // Size: 0x600
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_DOTA_SimpleObstruction : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bEnabled; // 0x5f0            
            bool m_bBlockFoW; // 0x5f1            
            bool m_bBlockNav; // 0x5f2            
            uint8_t _pad05f3[0x1]; // 0x5f3
            std::uint32_t m_unOccluderID; // 0x5f4            
            bool m_bBlockingGridNav; // 0x5f8            
            bool m_bPrevEnabled; // 0x5f9            
            uint8_t _pad05fa[0x6];
            
            // Datamap fields:
            // bool StartDisabled; // 0x7fffffff
            // bool block_fow; // 0x7fffffff
            // bool block_nav; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_SimpleObstruction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_SimpleObstruction) == 0x600);
    };
};
