#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: vphysics2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace vphysics2
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x38
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct vphysics_save_ragdoll_control_t
        {
        public:
            float m_flMinSpringFrequency; // 0x0            
            float m_flMaxSpringFrequency; // 0x4            
            float m_flMaxStretch; // 0x8            
            bool m_bSolidCollisionAtZeroWeight; // 0xc            
            bool m_bRequiresDynamicBodies; // 0xd            
            bool m_bIgnoreTeleport; // 0xe            
            uint8_t _pad000f[0x1]; // 0xf
            Vector m_vLinearVelocityAccumulator; // 0x10            
            RotationVector m_vAngularVelocityAccumulator; // 0x1c            
            Vector m_vForceAccumulator; // 0x28            
            std::int32_t m_nBodyCount; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::vphysics2::vphysics_save_ragdoll_control_t, m_flMinSpringFrequency) == 0x0);
        static_assert(offsetof(source2sdk::vphysics2::vphysics_save_ragdoll_control_t, m_flMaxSpringFrequency) == 0x4);
        static_assert(offsetof(source2sdk::vphysics2::vphysics_save_ragdoll_control_t, m_flMaxStretch) == 0x8);
        static_assert(offsetof(source2sdk::vphysics2::vphysics_save_ragdoll_control_t, m_bSolidCollisionAtZeroWeight) == 0xc);
        static_assert(offsetof(source2sdk::vphysics2::vphysics_save_ragdoll_control_t, m_bRequiresDynamicBodies) == 0xd);
        static_assert(offsetof(source2sdk::vphysics2::vphysics_save_ragdoll_control_t, m_bIgnoreTeleport) == 0xe);
        static_assert(offsetof(source2sdk::vphysics2::vphysics_save_ragdoll_control_t, m_vLinearVelocityAccumulator) == 0x10);
        static_assert(offsetof(source2sdk::vphysics2::vphysics_save_ragdoll_control_t, m_vAngularVelocityAccumulator) == 0x1c);
        static_assert(offsetof(source2sdk::vphysics2::vphysics_save_ragdoll_control_t, m_vForceAccumulator) == 0x28);
        static_assert(offsetof(source2sdk::vphysics2::vphysics_save_ragdoll_control_t, m_nBodyCount) == 0x34);
        
        static_assert(sizeof(source2sdk::vphysics2::vphysics_save_ragdoll_control_t) == 0x38);
    };
};
