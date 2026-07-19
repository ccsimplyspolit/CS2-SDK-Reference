#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysicsProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xab0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysicsPropRespawnable : public source2sdk::server::CPhysicsProp
        {
        public:
            VectorWS m_vOriginalSpawnOrigin; // 0xa70            
            QAngle m_vOriginalSpawnAngles; // 0xa7c            
            Vector m_vOriginalMins; // 0xa88            
            Vector m_vOriginalMaxs; // 0xa94            
            float m_flRespawnDuration; // 0xaa0            
            uint8_t _pad0aa4[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsPropRespawnable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsPropRespawnable) == 0xab0);
    };
};
