#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ShotID_t.hpp"
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
        // Size: 0x1310
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Priest_Flashbang : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::client::ShotID_t m_tInitialShotID; // 0xf70            
            VectorWS m_vLaunchPosition; // 0xf74            
            QAngle m_qLaunchAngle; // 0xf80            
            uint8_t _pad0f8c[0x384];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Priest_Flashbang because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Priest_Flashbang) == 0x1310);
    };
};
