#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x4a8
        // Has VTable
        #pragma pack(push, 1)
        class CEnvEntityIgniter : public source2sdk::server::CBaseEntity
        {
        public:
            float m_flLifetime; // 0x4a0            
            uint8_t _pad04a4[0x4];
            
            // Datamap fields:
            // void InputIgnite; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvEntityIgniter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvEntityIgniter) == 0x4a8);
    };
};
