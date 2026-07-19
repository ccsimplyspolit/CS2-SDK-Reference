#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x1c40
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityDashVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_DashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashParticle;
            char m_DashParticle[0xe0]; // 0x1818            
            // m_DownDashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DownDashParticle;
            char m_DownDashParticle[0xe0]; // 0x18f8            
            // m_WallJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallJumpParticle;
            char m_WallJumpParticle[0xe0]; // 0x19d8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strArriveSound; // 0x1ab8            
            CSoundEventName m_strStaminaDrainedSound; // 0x1ac8            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x1ad8            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x1b60            
            // metadata: MPropertyStartGroup "Ground Dash Stuff"
            float m_flMaxAngDiff; // 0x1be8            
            float m_flSlideCancelBlockerWindow; // 0x1bec            
            float m_flSlideLockoutTime; // 0x1bf0            
            float m_flGroundDashAirbornDrag; // 0x1bf4            
            float m_flGroundDashAirbornSpeedClamp; // 0x1bf8            
            uint8_t _pad1bfc[0x4]; // 0x1bfc
            CSoundEventName m_strGroundDashSound; // 0x1c00            
            // metadata: MPropertyStartGroup "Air Dash Stuff"
            float m_flAirDashEndVelocityScale; // 0x1c10            
            float m_flAirDashAccPct; // 0x1c14            
            float m_flDuringDrag; // 0x1c18            
            float m_flAirSpeedForMaxDrag; // 0x1c1c            
            float m_flAirSpeedForMinDrag; // 0x1c20            
            float m_flPostMaxDrag; // 0x1c24            
            float m_flPostDragDuration; // 0x1c28            
            float m_flDownwardAirDashSpeed; // 0x1c2c            
            CSoundEventName m_strAirDashSound; // 0x1c30            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityDashVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityDashVData) == 0x1c40);
    };
};
