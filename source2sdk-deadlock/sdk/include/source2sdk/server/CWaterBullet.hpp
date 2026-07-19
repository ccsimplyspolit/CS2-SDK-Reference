#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xa90
        // Has VTable
        #pragma pack(push, 1)
        class CWaterBullet : public source2sdk::server::CBaseAnimGraph
        {
        public:
            // Datamap fields:
            // Vector bullet_direction; // 0x7fffffff
            // void CWaterBulletBulletThink; // 0x0
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CWaterBullet has no schema binary (size is a guess)
    };
};
