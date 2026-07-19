#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyEntity.hpp"

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
        // Size: 0x4a8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelTeleportLocation : public source2sdk::server::CServerOnlyEntity
        {
        public:
            std::int32_t m_iLane; // 0x4a0            
            std::int32_t m_iObjective; // 0x4a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelTeleportLocation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelTeleportLocation) == 0x4a8);
    };
};
