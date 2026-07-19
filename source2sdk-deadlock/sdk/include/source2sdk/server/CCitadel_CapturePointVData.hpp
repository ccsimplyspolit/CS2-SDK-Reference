#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/client/ECitadelAudioLoopSounds.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"

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
        // Size: 0x490
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_CapturePointVData : public source2sdk::client::CEntitySubclassVDataBase
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
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyDescription "Loop that plays while the capture point is active."
            // m_EnabledLoopSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::ECitadelAudioLoopSounds,CSoundEventName> m_EnabledLoopSounds;
            char m_EnabledLoopSounds[0x28]; // 0x3a8            
            // metadata: MPropertyDescription "Loop that plays when the enemy team is actively capturing."
            // m_EnemyCapturingLoopSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::ECitadelAudioLoopSounds,CSoundEventName> m_EnemyCapturingLoopSounds;
            char m_EnemyCapturingLoopSounds[0x28]; // 0x3d0            
            // metadata: MPropertyDescription "Loop that plays when the friendly team is actively capturing."
            // m_FriendlyCapturingLoopSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::ECitadelAudioLoopSounds,CSoundEventName> m_FriendlyCapturingLoopSounds;
            char m_FriendlyCapturingLoopSounds[0x28]; // 0x3f8            
            // metadata: MPropertyDescription "Plays when the pre-enable period starts."
            CSoundEventName m_strPreEnableStartSound; // 0x420            
            // metadata: MPropertyDescription "Plays when the enable period starts."
            CSoundEventName m_strEnableStartSound; // 0x430            
            // metadata: MPropertyDescription "Plays when the point is fully captured."
            CSoundEventName m_strFullyCapturedSound; // 0x440            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_modifierCapturer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_modifierCapturer;
            char m_modifierCapturer[0x10]; // 0x450            
            // metadata: MPropertyStartGroup "Capture Settings"
            // metadata: MPropertyDescription "When no playars are in the capture area, what fraction of progress is lost per second."
            float m_flDecaySpeed; // 0x460            
            // metadata: MPropertyDescription "Remap of number of capturers to capture time in seconds.  Smaller is faster!"
            source2sdk::client::CRemapFloat m_remapCapturersToCaptureTime; // 0x464            
            // metadata: MPropertyDescription "Using the above capture times, scale them by this amount when undoing enemy progress."
            float m_flEnemyProgressRemoveScale; // 0x474            
            // metadata: MPropertyDescription "How much health will be taken from each player over a full capture."
            float m_flTotalHealthToCapture; // 0x478            
            // metadata: MPropertyStartGroup "Match Settings"
            // metadata: MPropertyDescription "Time in the match this capture point can first become enabled."
            source2sdk::tier2::CRangeFloat m_flInitialEnableTimeInSeconds; // 0x47c            
            // metadata: MPropertyDescription "How long before the enable time to trigger pre-enabled effects."
            float m_flPreEnableWindowInSeconds; // 0x484            
            // metadata: MPropertyDescription "Once the escort dies, how long until we re-enable ourselves."
            source2sdk::tier2::CRangeFloat m_flRespawnRangeInSeconds; // 0x488            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_CapturePointVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_CapturePointVData) == 0x490);
    };
};
