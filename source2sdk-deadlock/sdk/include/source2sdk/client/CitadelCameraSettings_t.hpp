#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x28
        // Has Trivial Destructor
        // 
        // static metadata: MModelGameData
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelCameraSettings_t
        {
        public:
            float m_flCameraSideOffset; // 0x0            
            // metadata: MPropertyDescription "An offset in addition to the base side offset while ziplining"
            float m_flCameraSideOffsetZiplining; // 0x4            
            float m_flCameraBackOffset; // 0x8            
            float m_flCameraBackOffsetAiming; // 0xc            
            float m_flCameraHeightStanding; // 0x10            
            float m_flCameraHeightCrouching; // 0x14            
            // metadata: MPropertyDescription "An offset in addition to the base standing offset while ziplining"
            float m_flCameraHeightOffsetZiplining; // 0x18            
            // metadata: MPropertyDescription "The target offset position of the camera when the character is backed up against a wall. X = forward/back. Y = right/left. Z = up/down. Use citadel_camera_parrot_pov 1 to tune. Requires Save & Recompile to apply."
            Vector m_vCameraParrotOffset; // 0x1c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelCameraSettings_t, m_flCameraSideOffset) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelCameraSettings_t, m_flCameraSideOffsetZiplining) == 0x4);
        static_assert(offsetof(source2sdk::client::CitadelCameraSettings_t, m_flCameraBackOffset) == 0x8);
        static_assert(offsetof(source2sdk::client::CitadelCameraSettings_t, m_flCameraBackOffsetAiming) == 0xc);
        static_assert(offsetof(source2sdk::client::CitadelCameraSettings_t, m_flCameraHeightStanding) == 0x10);
        static_assert(offsetof(source2sdk::client::CitadelCameraSettings_t, m_flCameraHeightCrouching) == 0x14);
        static_assert(offsetof(source2sdk::client::CitadelCameraSettings_t, m_flCameraHeightOffsetZiplining) == 0x18);
        static_assert(offsetof(source2sdk::client::CitadelCameraSettings_t, m_vCameraParrotOffset) == 0x1c);
        
        static_assert(sizeof(source2sdk::client::CitadelCameraSettings_t) == 0x28);
    };
};
