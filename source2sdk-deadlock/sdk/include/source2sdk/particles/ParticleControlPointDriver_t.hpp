#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/ParticleAttachment_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x40
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ParticleControlPointDriver_t
        {
        public:
            ParticleParamID_t m_iControlPoint; // 0x0            
            source2sdk::animationsystem::ParticleAttachment_t m_iAttachType; // 0x10            
            uint8_t _pad0014[0x4]; // 0x14
            CUtlString m_attachmentName; // 0x18            
            Vector m_vecOffset; // 0x20            
            QAngle m_angOffset; // 0x2c            
            CUtlString m_entityName; // 0x38            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particles::ParticleControlPointDriver_t, m_iControlPoint) == 0x0);
        static_assert(offsetof(source2sdk::particles::ParticleControlPointDriver_t, m_iAttachType) == 0x10);
        static_assert(offsetof(source2sdk::particles::ParticleControlPointDriver_t, m_attachmentName) == 0x18);
        static_assert(offsetof(source2sdk::particles::ParticleControlPointDriver_t, m_vecOffset) == 0x20);
        static_assert(offsetof(source2sdk::particles::ParticleControlPointDriver_t, m_angOffset) == 0x2c);
        static_assert(offsetof(source2sdk::particles::ParticleControlPointDriver_t, m_entityName) == 0x38);
        
        static_assert(sizeof(source2sdk::particles::ParticleControlPointDriver_t) == 0x40);
    };
};
