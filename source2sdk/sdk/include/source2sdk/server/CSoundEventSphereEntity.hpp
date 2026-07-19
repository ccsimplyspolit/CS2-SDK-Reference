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
        // Size: 0x570
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundEventSphereEntity : public source2sdk::server::CSoundEventEntity
        {
        public:
            float m_flRadius; // 0x568            
            uint8_t _pad056c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventSphereEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventSphereEntity) == 0x570);
    };
};
