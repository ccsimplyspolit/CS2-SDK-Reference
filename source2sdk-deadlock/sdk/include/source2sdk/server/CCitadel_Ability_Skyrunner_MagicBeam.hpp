#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x1088
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Skyrunner_MagicBeam : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            Vector m_vCastPosition; // 0xf70            
            QAngle m_qCastAngle; // 0xf7c            
            uint8_t _pad0f88[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Skyrunner_MagicBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Skyrunner_MagicBeam) == 0x1088);
    };
};
