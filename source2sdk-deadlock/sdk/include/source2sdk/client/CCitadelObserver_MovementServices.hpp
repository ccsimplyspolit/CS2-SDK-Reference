#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayer_MovementServices.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x248
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelObserver_MovementServices : public source2sdk::client::CPlayer_MovementServices
        {
        public:
            float m_flRoamingSpeed; // 0x240            
            bool m_bHasFreeCursor; // 0x244            
            uint8_t _pad0245[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelObserver_MovementServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelObserver_MovementServices) == 0x248);
    };
};
