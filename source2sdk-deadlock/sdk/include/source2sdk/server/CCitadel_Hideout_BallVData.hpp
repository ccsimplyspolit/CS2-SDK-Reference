#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x4a0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Hideout_BallVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            float m_flModelScale; // 0x28            
            // metadata: MPropertyDescription "A bit of grace distance ontop of the player's capsule vs the ball radius, to make contact a little easier"
            float m_flBallTouchRadius; // 0x2c            
            float m_flForceMult; // 0x30            
            float m_flForceMultBullet; // 0x34            
            float m_flMaxDistanceAway; // 0x38            
            float m_flDamagePositionOffset; // 0x3c            
            CSoundEventName m_strKickSoundName; // 0x40            
            CSoundEventName m_strGoalSoundName; // 0x50            
            // metadata: MPropertyStartGroup "Ball Touch Force"
            // metadata: MPropertyDescription "Always kick at least this much in the direction the player is facing."
            float m_flMinPlayerBallTouchForce; // 0x60            
            // metadata: MPropertyStartGroup "Ball Light Melee Forces"
            // metadata: MPropertyDescription "Same as above but when meleeing"
            float m_flMinPlayerLightMeleeForce; // 0x64            
            // metadata: MPropertyDescription "Degrees pitch to launch the ball up"
            float m_flPlayerLightMeleeChipAngle; // 0x68            
            // metadata: MPropertyDescription "Same as above but when heavy meleeing. Note you're at zero speed when delivering melee so this must be higher than you'd think"
            float m_flMinPlayerHeavyMeleeForce; // 0x6c            
            // metadata: MPropertyDescription "The player's speed in the direciton they are headed is multiplied by this."
            float m_flForceMultPlayer; // 0x70            
            // metadata: MPropertyDescription "Proportion of player's speed inherited directly from the player."
            float m_flInheritPlayerSpeedMultiplier; // 0x74            
            // metadata: MPropertyDescription "Looking at your feet vs looking at the horizon creates a multiplier to the kick - aim up to lob/shoot, aim down to dribble."
            CPiecewiseCurve m_ForceVSCameraPitch; // 0x78            
            // metadata: MPropertyStartGroup "Misc Juggle Minigame"
            // metadata: MPropertyDescription "Keep the player on their feet by adding more of a degree of randomness the more the juggle count goes up."
            CPiecewiseCurve m_ConsecutiveJugglesVsRandomness; // 0xb8            
            // metadata: MPropertyDescription "The more difficult we get, the higher the gravity. So if this is 0.25, gravity multiplier will be  1 + 1.5"
            float fl_MaxExtraGravityScale; // 0xf8            
            // metadata: MPropertyDescription "Don't show any effects at the apex of a juggled ball if it's less juggles than this"
            std::int32_t m_nMinJugglesBeforeDisplay; // 0xfc            
            // m_BallApexParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BallApexParticle;
            char m_BallApexParticle[0xe0]; // 0x100            
            // metadata: MPropertyDescription "Play a sound each time we reach an apex above the Min Juggles Befor eDisplay value"
            CSoundEventName m_strBallApexSound; // 0x1e0            
            // metadata: MPropertyDescription "Plays when the juggle run ends (the ball touches a ground surface). This is not the same as contact sounds. It's a gameplay event"
            // m_JuggleRunEnded has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JuggleRunEnded;
            char m_JuggleRunEnded[0xe0]; // 0x1f0            
            CSoundEventName m_strJuggleRunEnded; // 0x2d0            
            // metadata: MPropertyStartGroup "Visuals"
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hModel;
            char m_hModel[0xe0]; // 0x2e0            
            // m_AmbientParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmbientParticle;
            char m_AmbientParticle[0xe0]; // 0x3c0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Hideout_BallVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Hideout_BallVData) == 0x4a0);
    };
};
