#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ShotID_t.hpp"

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
        // Size: 0x1578
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Priest_Flashbang : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::client::ShotID_t m_tInitialShotID; // 0x11d8            
            VectorWS m_vLaunchPosition; // 0x11dc            
            QAngle m_qLaunchAngle; // 0x11e8            
            uint8_t _pad11f4[0x384];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Priest_Flashbang because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Priest_Flashbang) == 0x1578);
    };
};
