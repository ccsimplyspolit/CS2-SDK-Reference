#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/ECitadelAudioLoopSounds.hpp"
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
        // Size: 0x4a8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_MultiCapturePointVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyDescription "Particle that's active in the pre-enabled window."
            // m_strPreEnableParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strPreEnableParticle;
            char m_strPreEnableParticle[0xe0]; // 0x28            
            // metadata: MPropertyDescription "Particle that's fired when the point becomes active."
            // m_strOnBecomeEnableParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strOnBecomeEnableParticle;
            char m_strOnBecomeEnableParticle[0xe0]; // 0x108            
            // metadata: MPropertyDescription "Particle that's active while the capture point is enabled."
            // m_strEnabledParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strEnabledParticle;
            char m_strEnabledParticle[0xe0]; // 0x1e8            
            // metadata: MPropertyDescription "Particle that's fired when the point is fully captured by a team."
            // m_strOnFullyCapturedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strOnFullyCapturedParticle;
            char m_strOnFullyCapturedParticle[0xe0]; // 0x2c8            
            // metadata: MPropertyDescription "Ping Mini Map on Active"
            bool m_bPingMinimapOnActive; // 0x3a8            
            uint8_t _pad03a9[0x7]; // 0x3a9
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyDescription "Loop that plays while the capture point is active."
            // m_EnabledLoopSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::ECitadelAudioLoopSounds,CSoundEventName> m_EnabledLoopSounds;
            char m_EnabledLoopSounds[0x28]; // 0x3b0            
            // metadata: MPropertyDescription "Loop that plays when the enemy team is actively capturing."
            // m_EnemyCapturingLoopSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::ECitadelAudioLoopSounds,CSoundEventName> m_EnemyCapturingLoopSounds;
            char m_EnemyCapturingLoopSounds[0x28]; // 0x3d8            
            // metadata: MPropertyDescription "Loop that plays when the friendly team is actively capturing."
            // m_FriendlyCapturingLoopSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::ECitadelAudioLoopSounds,CSoundEventName> m_FriendlyCapturingLoopSounds;
            char m_FriendlyCapturingLoopSounds[0x28]; // 0x400            
            // metadata: MPropertyDescription "Loop that plays when both teams are actively capturing."
            // m_EnemyAndFriendlyCapturingLoopSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::ECitadelAudioLoopSounds,CSoundEventName> m_EnemyAndFriendlyCapturingLoopSounds;
            char m_EnemyAndFriendlyCapturingLoopSounds[0x28]; // 0x428            
            // metadata: MPropertyDescription "Plays when the pre-enable period starts."
            CSoundEventName m_strPreEnableStartSound; // 0x450            
            // metadata: MPropertyDescription "Plays when the enable period starts."
            CSoundEventName m_strEnableStartSound; // 0x460            
            // metadata: MPropertyDescription "Plays when the point is fully captured."
            CSoundEventName m_strFullyCapturedSound; // 0x470            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_modifierCapturer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_modifierCapturer;
            char m_modifierCapturer[0x10]; // 0x480            
            // metadata: MPropertyStartGroup "Capture Settings"
            // metadata: MPropertyDescription "When no playars are in the capture area, what fraction of progress is lost per second."
            float m_flDecaySpeed; // 0x490            
            // metadata: MPropertyDescription "Time it takes to fully capture"
            float m_flTotalTimeToCapture; // 0x494            
            // metadata: MPropertyDescription "Kill nearby neutrals."
            bool m_bDestroyNearbyNeutrals; // 0x498            
            uint8_t _pad0499[0x3]; // 0x499
            // metadata: MPropertyDescription "Capture progress will hold at this percent when contested by multiple teams"
            float m_flHoldAtPercent; // 0x49c            
            // metadata: MPropertyDescription "How long someone can be outside the circle before they are considered absent"
            float m_flStepOutGraceWindow; // 0x4a0            
            uint8_t _pad04a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_MultiCapturePointVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_MultiCapturePointVData) == 0x4a8);
    };
};
