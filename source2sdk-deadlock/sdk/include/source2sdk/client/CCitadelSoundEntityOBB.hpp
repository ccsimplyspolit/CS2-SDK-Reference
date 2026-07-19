#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_SoundEventEntity.hpp"

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
        // Size: 0x6e0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vMins"
        // static metadata: MNetworkVarNames "Vector m_vMaxs"
        #pragma pack(push, 1)
        class CCitadelSoundEntityOBB : public source2sdk::client::C_SoundEventEntity
        {
        public:
            uint8_t _pad06b0[0x14]; // 0x6b0
            // metadata: MNetworkEnable
            Vector m_vMins; // 0x6c4            
            // metadata: MNetworkEnable
            Vector m_vMaxs; // 0x6d0            
            uint8_t _pad06dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelSoundEntityOBB because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelSoundEntityOBB) == 0x6e0);
    };
};
