#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xe8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Familiar_AttachLaunchOff : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bForceApplied; // 0xd0            
            uint8_t _pad00d1[0x3]; // 0xd1
            Vector m_vTossUpForce; // 0xd4            
            float m_flCurrentVelocityScale; // 0xe0            
            uint8_t _pad00e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Familiar_AttachLaunchOff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Familiar_AttachLaunchOff) == 0xe8);
    };
};
