#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"

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
        // Size: 0x12f0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Skyrunner_MagicBeam : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            Vector m_vCastPosition; // 0x11d8            
            QAngle m_qCastAngle; // 0x11e4            
            uint8_t _pad11f0[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Skyrunner_MagicBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Skyrunner_MagicBeam) == 0x12f0);
    };
};
