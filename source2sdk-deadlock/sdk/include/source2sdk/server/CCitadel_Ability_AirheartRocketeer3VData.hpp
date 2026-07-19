#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x1ce8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_AirheartRocketeer3VData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_JetpackFireFX has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JetpackFireFX;
            char m_JetpackFireFX[0xe0]; // 0x1818            
            // m_VTOLExplosionFX has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_VTOLExplosionFX;
            char m_VTOLExplosionFX[0xe0]; // 0x18f8            
            // metadata: MPropertyStartGroup "Jetpack Movement"
            float m_flAirDashDistancePct; // 0x19d8            
            float m_flAirDrag; // 0x19dc            
            float m_flAirSpeed; // 0x19e0            
            float m_flBeginJetpackingVelocityMultiplier; // 0x19e4            
            float m_flTimeToHoldBeforeBeginJetpack; // 0x19e8            
            float m_flVerticalDampening_FallingBelowNeutral; // 0x19ec            
            float m_flVerticalDampening_FallingAboveNeutral; // 0x19f0            
            float m_flVerticalDampening_RisingBelowNeutral; // 0x19f4            
            float m_flVerticalDampening_RisingAboveNeutral; // 0x19f8            
            float m_flVerticalDeadzoneSoft; // 0x19fc            
            float m_flVerticalDeadzoneHard; // 0x1a00            
            float m_flPreservedVelocityDecaySpeed; // 0x1a04            
            float m_flIntentMultiplierApproachSpeed; // 0x1a08            
            // metadata: MPropertyStartGroup "Jetpack Movement - MPC"
            float m_flMPCOriginCoeff; // 0x1a0c            
            float m_flMPCVelocityCoeff; // 0x1a10            
            float m_flMPCScale; // 0x1a14            
            float m_flMPCMaxAccel; // 0x1a18            
            // metadata: MPropertyStartGroup "Jetpack Movement - Movement Space Speeds"
            float m_flMoveSpaceSpeed_ZUp; // 0x1a1c            
            float m_flMoveSpaceSpeed_ZDown; // 0x1a20            
            float m_flMoveSpaceSpeed_Lateral; // 0x1a24            
            float m_flMoveSpaceSpeed_LateralZUp; // 0x1a28            
            float m_flMoveSpaceSpeed_Forward; // 0x1a2c            
            float m_flMoveSpaceSpeed_Backward; // 0x1a30            
            // metadata: MPropertyStartGroup "Jetpack Movement - Intent Space Soft & Hard Zones"
            float m_flIntentSpaceSoftZone; // 0x1a34            
            float m_flIntentSpaceHardZone; // 0x1a38            
            float m_flHardZoneCoeffFrac; // 0x1a3c            
            float m_flSoftZoneCoeffFrac; // 0x1a40            
            uint8_t _pad1a44[0x4]; // 0x1a44
            // metadata: MPropertyStartGroup "Jetpack Movement - Impulse Overdrive"
            CPiecewiseCurve m_OverdriveLateral; // 0x1a48            
            float m_flOverdriveCooldown; // 0x1a88            
            // metadata: MPropertyStartGroup "Jetpack Movement - Fuel"
            float m_flConsumedBySideThrusting; // 0x1a8c            
            float m_flConsumedWhileActive; // 0x1a90            
            // metadata: MPropertyStartGroup "Jetpack Movement - Hover"
            float m_flHoverVelocityDecaySpeed; // 0x1a94            
            // metadata: MPropertyStartGroup "Jetpack Movement - VTOL"
            CPiecewiseCurve m_VTOLSpeedByTime; // 0x1a98            
            float m_flVTOLCamTurnRate; // 0x1ad8            
            uint8_t _pad1adc[0x4]; // 0x1adc
            // m_VTOLModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_VTOLModifier;
            char m_VTOLModifier[0x10]; // 0x1ae0            
            float m_flMaxVTOLBounceSpeed; // 0x1af0            
            float m_flVTOLFloorBounceZSpeed; // 0x1af4            
            // metadata: MPropertyStartGroup "Jetpack Movement - Wall Attach"
            float m_flWallAttachCooldown; // 0x1af8            
            float m_flWallJumpSpeed; // 0x1afc            
            float m_flWallAttachMinDuration; // 0x1b00            
            uint8_t _pad1b04[0x4]; // 0x1b04
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strOutOfFuelSound; // 0x1b08            
            CSoundEventName m_strOverdriveActivatedSound; // 0x1b18            
            CSoundEventName m_strJetpackingLoop; // 0x1b28            
            CSoundEventName m_strJetpackingThrustingLoop; // 0x1b38            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceVTOL; // 0x1b48            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceHover; // 0x1bd0            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceWallAttach; // 0x1c58            
            float flScreenShake_VTOL_Amplitude; // 0x1ce0            
            float flScreenShake_VTOL_Frequency; // 0x1ce4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_AirheartRocketeer3VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_AirheartRocketeer3VData) == 0x1ce8);
    };
};
