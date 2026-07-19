#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4c0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTA_SimpleObstruction : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad0498[0x18]; // 0x498
            bool m_bEnabled; // 0x4b0            
            bool m_bBlockFoW; // 0x4b1            
            bool m_bBlockNav; // 0x4b2            
            uint8_t _pad04b3[0x1]; // 0x4b3
            std::uint32_t m_unOccluderID; // 0x4b4            
            bool m_bBlockingGridNav; // 0x4b8            
            uint8_t _pad04b9[0x7];
            
            // Datamap fields:
            // bool StartDisabled; // 0x7fffffff
            // bool block_fow; // 0x7fffffff
            // bool block_nav; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_SimpleObstruction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_SimpleObstruction) == 0x4c0);
    };
};
