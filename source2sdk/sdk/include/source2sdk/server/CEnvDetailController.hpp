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
        // Size: 0x4b0
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CEnvDetailController : public source2sdk::server::CBaseEntity
        {
        public:
            float m_flFadeStartDist; // 0x4a8            
            float m_flFadeEndDist; // 0x4ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvDetailController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvDetailController) == 0x4b0);
    };
};
