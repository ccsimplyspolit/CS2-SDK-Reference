#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundEventEntity.hpp"

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
        // Size: 0x590
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vMins"
        // static metadata: MNetworkVarNames "Vector m_vMaxs"
        #pragma pack(push, 1)
        class CCitadelSoundEntityOBB : public source2sdk::server::CSoundEventEntity
        {
        public:
            uint8_t _pad0560[0x14]; // 0x560
            // metadata: MNetworkEnable
            Vector m_vMins; // 0x574            
            // metadata: MNetworkEnable
            Vector m_vMaxs; // 0x580            
            uint8_t _pad058c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelSoundEntityOBB because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelSoundEntityOBB) == 0x590);
    };
};
