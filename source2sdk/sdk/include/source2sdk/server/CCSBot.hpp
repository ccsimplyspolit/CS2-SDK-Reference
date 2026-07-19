#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBot.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/IntervalTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawn;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e40
        // Has VTable
        #pragma pack(push, 1)
        class CCSBot : public source2sdk::server::CBot
        {
        public:
            uint8_t _pad0100[0x8]; // 0x100
            VectorWS m_eyePosition; // 0x108            
            char m_name[64]; // 0x114            
            float m_combatRange; // 0x154            
            bool m_isRogue; // 0x158            
            uint8_t _pad0159[0x7]; // 0x159
            source2sdk::server::CountdownTimer m_rogueTimer; // 0x160            
            uint8_t _pad0178[0x4]; // 0x178
            bool m_diedLastRound; // 0x17c            
            uint8_t _pad017d[0x3]; // 0x17d
            float m_safeTime; // 0x180            
            bool m_wasSafe; // 0x184            
            uint8_t _pad0185[0x7]; // 0x185
            bool m_blindFire; // 0x18c            
            uint8_t _pad018d[0x3]; // 0x18d
            source2sdk::server::CountdownTimer m_surpriseTimer; // 0x190            
            bool m_bAllowActive; // 0x1a8            
            bool m_isFollowing; // 0x1a9            
            uint8_t _pad01aa[0x2]; // 0x1aa
            // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_leader;
            char m_leader[0x4]; // 0x1ac            
            float m_followTimestamp; // 0x1b0            
            float m_allowAutoFollowTime; // 0x1b4            
            source2sdk::server::CountdownTimer m_hurryTimer; // 0x1b8            
            source2sdk::server::CountdownTimer m_alertTimer; // 0x1d0            
            source2sdk::server::CountdownTimer m_sneakTimer; // 0x1e8            
            source2sdk::server::CountdownTimer m_panicTimer; // 0x200            
            uint8_t _pad0218[0x3b0]; // 0x218
            float m_stateTimestamp; // 0x5c8            
            bool m_isAttacking; // 0x5cc            
            bool m_isOpeningDoor; // 0x5cd            
            uint8_t _pad05ce[0x6]; // 0x5ce
            // m_taskEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_taskEntity;
            char m_taskEntity[0x4]; // 0x5d4            
            uint8_t _pad05d8[0xc]; // 0x5d8
            VectorWS m_goalPosition; // 0x5e4            
            // m_goalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_goalEntity;
            char m_goalEntity[0x4]; // 0x5f0            
            // m_avoid has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_avoid;
            char m_avoid[0x4]; // 0x5f4            
            float m_avoidTimestamp; // 0x5f8            
            bool m_isStopping; // 0x5fc            
            bool m_hasVisitedEnemySpawn; // 0x5fd            
            uint8_t _pad05fe[0x2]; // 0x5fe
            source2sdk::server::IntervalTimer m_stillTimer; // 0x600            
            bool m_bEyeAnglesUnderPathFinderControl; // 0x610            
            uint8_t _pad0611[0x48f7]; // 0x611
            std::int32_t m_pathIndex; // 0x4f08            
            source2sdk::entity2::GameTime_t m_areaEnteredTimestamp; // 0x4f0c            
            source2sdk::server::CountdownTimer m_repathTimer; // 0x4f10            
            source2sdk::server::CountdownTimer m_avoidFriendTimer; // 0x4f28            
            bool m_isFriendInTheWay; // 0x4f40            
            uint8_t _pad4f41[0x7]; // 0x4f41
            source2sdk::server::CountdownTimer m_politeTimer; // 0x4f48            
            bool m_isWaitingBehindFriend; // 0x4f60            
            uint8_t _pad4f61[0x2b]; // 0x4f61
            float m_pathLadderEnd; // 0x4f8c            
            uint8_t _pad4f90[0x48]; // 0x4f90
            source2sdk::server::CountdownTimer m_mustRunTimer; // 0x4fd8            
            source2sdk::server::CountdownTimer m_waitTimer; // 0x4ff0            
            source2sdk::server::CountdownTimer m_updateTravelDistanceTimer; // 0x5008            
            float m_playerTravelDistance[64]; // 0x5020            
            std::uint8_t m_travelDistancePhase; // 0x5120            
            uint8_t _pad5121[0x197]; // 0x5121
            std::uint8_t m_hostageEscortCount; // 0x52b8            
            uint8_t _pad52b9[0x3]; // 0x52b9
            float m_hostageEscortCountTimestamp; // 0x52bc            
            std::int32_t m_desiredTeam; // 0x52c0            
            bool m_hasJoined; // 0x52c4            
            bool m_isWaitingForHostage; // 0x52c5            
            uint8_t _pad52c6[0x2]; // 0x52c6
            source2sdk::server::CountdownTimer m_inhibitWaitingForHostageTimer; // 0x52c8            
            source2sdk::server::CountdownTimer m_waitForHostageTimer; // 0x52e0            
            VectorWS m_noisePosition; // 0x52f8            
            float m_noiseTravelDistance; // 0x5304            
            float m_noiseTimestamp; // 0x5308            
            uint8_t _pad530c[0x4]; // 0x530c
            source2sdk::server::CCSPlayerPawn* m_noiseSource; // 0x5310            
            uint8_t _pad5318[0x10]; // 0x5318
            source2sdk::server::CountdownTimer m_noiseBendTimer; // 0x5328            
            VectorWS m_bentNoisePosition; // 0x5340            
            bool m_bendNoisePositionValid; // 0x534c            
            uint8_t _pad534d[0x3]; // 0x534d
            float m_lookAroundStateTimestamp; // 0x5350            
            float m_lookAheadAngle; // 0x5354            
            float m_lookUpAngle; // 0x5358            
            float m_forwardAngle; // 0x535c            
            float m_inhibitLookAroundTimestamp; // 0x5360            
            uint8_t _pad5364[0x4]; // 0x5364
            VectorWS m_lookAtSpot; // 0x5368            
            uint8_t _pad5374[0x4]; // 0x5374
            float m_lookAtSpotDuration; // 0x5378            
            float m_lookAtSpotTimestamp; // 0x537c            
            float m_lookAtSpotAngleTolerance; // 0x5380            
            bool m_lookAtSpotClearIfClose; // 0x5384            
            bool m_lookAtSpotAttack; // 0x5385            
            uint8_t _pad5386[0x2]; // 0x5386
            char* m_lookAtDesc; // 0x5388            
            float m_peripheralTimestamp; // 0x5390            
            uint8_t _pad5394[0x184]; // 0x5394
            std::uint8_t m_approachPointCount; // 0x5518            
            uint8_t _pad5519[0x3]; // 0x5519
            VectorWS m_approachPointViewPosition; // 0x551c            
            source2sdk::server::IntervalTimer m_viewSteadyTimer; // 0x5528            
            uint8_t _pad5538[0x8]; // 0x5538
            source2sdk::server::CountdownTimer m_tossGrenadeTimer; // 0x5540            
            uint8_t _pad5558[0x8]; // 0x5558
            source2sdk::server::CountdownTimer m_isAvoidingGrenade; // 0x5560            
            uint8_t _pad5578[0x8]; // 0x5578
            float m_spotCheckTimestamp; // 0x5580            
            uint8_t _pad5584[0x404]; // 0x5584
            std::int32_t m_checkedHidingSpotCount; // 0x5988            
            float m_lookPitch; // 0x598c            
            float m_lookPitchVel; // 0x5990            
            float m_lookYaw; // 0x5994            
            float m_lookYawVel; // 0x5998            
            VectorWS m_targetSpot; // 0x599c            
            Vector m_targetSpotVelocity; // 0x59a8            
            VectorWS m_targetSpotPredicted; // 0x59b4            
            QAngle m_aimError; // 0x59c0            
            QAngle m_aimGoal; // 0x59cc            
            source2sdk::entity2::GameTime_t m_targetSpotTime; // 0x59d8            
            float m_aimFocus; // 0x59dc            
            float m_aimFocusInterval; // 0x59e0            
            source2sdk::entity2::GameTime_t m_aimFocusNextUpdate; // 0x59e4            
            uint8_t _pad59e8[0x8]; // 0x59e8
            source2sdk::server::CountdownTimer m_ignoreEnemiesTimer; // 0x59f0            
            // m_enemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_enemy;
            char m_enemy[0x4]; // 0x5a08            
            bool m_isEnemyVisible; // 0x5a0c            
            std::uint8_t m_visibleEnemyParts; // 0x5a0d            
            uint8_t _pad5a0e[0x2]; // 0x5a0e
            VectorWS m_lastEnemyPosition; // 0x5a10            
            float m_lastSawEnemyTimestamp; // 0x5a1c            
            float m_firstSawEnemyTimestamp; // 0x5a20            
            float m_currentEnemyAcquireTimestamp; // 0x5a24            
            float m_enemyDeathTimestamp; // 0x5a28            
            float m_friendDeathTimestamp; // 0x5a2c            
            bool m_isLastEnemyDead; // 0x5a30            
            uint8_t _pad5a31[0x3]; // 0x5a31
            std::int32_t m_nearbyEnemyCount; // 0x5a34            
            uint8_t _pad5a38[0x208]; // 0x5a38
            // m_bomber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_bomber;
            char m_bomber[0x4]; // 0x5c40            
            std::int32_t m_nearbyFriendCount; // 0x5c44            
            // m_closestVisibleFriend has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_closestVisibleFriend;
            char m_closestVisibleFriend[0x4]; // 0x5c48            
            // m_closestVisibleHumanFriend has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_closestVisibleHumanFriend;
            char m_closestVisibleHumanFriend[0x4]; // 0x5c4c            
            source2sdk::server::IntervalTimer m_attentionInterval; // 0x5c50            
            // m_attacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_attacker;
            char m_attacker[0x4]; // 0x5c60            
            float m_attackedTimestamp; // 0x5c64            
            source2sdk::server::IntervalTimer m_burnedByFlamesTimer; // 0x5c68            
            std::int32_t m_lastVictimID; // 0x5c78            
            bool m_isAimingAtEnemy; // 0x5c7c            
            bool m_isRapidFiring; // 0x5c7d            
            uint8_t _pad5c7e[0x2]; // 0x5c7e
            source2sdk::server::IntervalTimer m_equipTimer; // 0x5c80            
            source2sdk::server::CountdownTimer m_zoomTimer; // 0x5c90            
            source2sdk::entity2::GameTime_t m_fireWeaponTimestamp; // 0x5ca8            
            uint8_t _pad5cac[0x4]; // 0x5cac
            source2sdk::server::CountdownTimer m_lookForWeaponsOnGroundTimer; // 0x5cb0            
            bool m_bIsSleeping; // 0x5cc8            
            bool m_isEnemySniperVisible; // 0x5cc9            
            uint8_t _pad5cca[0x6]; // 0x5cca
            source2sdk::server::CountdownTimer m_sawEnemySniperTimer; // 0x5cd0            
            uint8_t _pad5ce8[0xa0]; // 0x5ce8
            std::uint8_t m_enemyQueueIndex; // 0x5d88            
            std::uint8_t m_enemyQueueCount; // 0x5d89            
            std::uint8_t m_enemyQueueAttendIndex; // 0x5d8a            
            bool m_isStuck; // 0x5d8b            
            source2sdk::entity2::GameTime_t m_stuckTimestamp; // 0x5d8c            
            VectorWS m_stuckSpot; // 0x5d90            
            uint8_t _pad5d9c[0x4]; // 0x5d9c
            source2sdk::server::CountdownTimer m_wiggleTimer; // 0x5da0            
            source2sdk::server::CountdownTimer m_stuckJumpTimer; // 0x5db8            
            source2sdk::entity2::GameTime_t m_nextCleanupCheckTimestamp; // 0x5dd0            
            float m_avgVel[10]; // 0x5dd4            
            std::int32_t m_avgVelIndex; // 0x5dfc            
            std::int32_t m_avgVelCount; // 0x5e00            
            VectorWS m_lastOrigin; // 0x5e04            
            uint8_t _pad5e10[0x4]; // 0x5e10
            float m_lastRadioRecievedTimestamp; // 0x5e14            
            float m_lastRadioSentTimestamp; // 0x5e18            
            // m_radioSubject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_radioSubject;
            char m_radioSubject[0x4]; // 0x5e1c            
            VectorWS m_radioPosition; // 0x5e20            
            float m_voiceEndTimestamp; // 0x5e2c            
            uint8_t _pad5e30[0x8]; // 0x5e30
            std::int32_t m_lastValidReactionQueueFrame; // 0x5e38            
            uint8_t _pad5e3c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSBot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSBot) == 0x5e40);
    };
};
