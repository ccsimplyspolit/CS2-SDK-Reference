#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModelEntity.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x8f0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelViscousBall : public source2sdk::server::CCitadelModelEntity
        {
        public:
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hAbility;
            char m_hAbility[0x4]; // 0x8e0            
            float m_flBallRadius; // 0x8e4            
            bool m_bNeedsPhysicsUpdate; // 0x8e8            
            uint8_t _pad08e9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelViscousBall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelViscousBall) == 0x8f0);
    };
};
