#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelBaseAbility;
    };
};

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
        // Size: 0xcb8
        // Has VTable
        #pragma pack(push, 1)
        class C_Projectile_Airheart_Package : public source2sdk::client::CBaseAnimGraph
        {
        public:
            source2sdk::client::C_CitadelBaseAbility* m_pAbility; // 0xca8            
            float m_flStunDuration; // 0xcb0            
            float m_flStunRadius; // 0xcb4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Projectile_Airheart_Package because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Projectile_Airheart_Package) == 0xcb8);
    };
};
