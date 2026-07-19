#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBaseAbility;
    };
};

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
        // Size: 0xac0
        // Has VTable
        #pragma pack(push, 1)
        class CProjectile_Airheart_Package : public source2sdk::server::CBaseAnimGraph
        {
        public:
            Vector m_vVelocity; // 0xa90            
            float m_flFloorDist; // 0xa9c            
            bool m_bPunchedOnce; // 0xaa0            
            bool m_bOnGround; // 0xaa1            
            uint8_t _pad0aa2[0x6]; // 0xaa2
            source2sdk::server::CCitadelBaseAbility* m_pAbility; // 0xaa8            
            float m_flStunDuration; // 0xab0            
            float m_flStunRadius; // 0xab4            
            uint8_t _pad0ab8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectile_Airheart_Package because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CProjectile_Airheart_Package) == 0xac0);
    };
};
