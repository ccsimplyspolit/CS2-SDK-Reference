#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"

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
        // Size: 0x13b8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelPlayerBotNPCBrainVData : public source2sdk::server::CAI_CitadelNPCVData
        {
        public:
            // metadata: MPropertyStartGroup "Movement"
            float m_flJumpMaxRise; // 0x1348            
            float m_flAirJumpMin; // 0x134c            
            float m_flJumpMaxDrop; // 0x1350            
            float m_flJumpMaxDist; // 0x1354            
            float m_flJumpMinDist; // 0x1358            
            float m_flClimbUpCostBase; // 0x135c            
            float m_flClimbUpCostScalar; // 0x1360            
            float m_flFaceTargetDistance; // 0x1364            
            float m_flNavGoalTolerance; // 0x1368            
            float m_flVerticalAttachOffset; // 0x136c            
            float m_flStuckTime; // 0x1370            
            float m_flStuckTimeAir; // 0x1374            
            float m_flMajorStuckTime; // 0x1378            
            std::int32_t m_unMajorStuckAttemptCount; // 0x137c            
            float m_flStuckDistance; // 0x1380            
            float m_flMaxPathDistance; // 0x1384            
            float m_flMinLanePathDistance; // 0x1388            
            float m_flEnemyDistanceForReload; // 0x138c            
            float m_flReloadEnemyFarPct; // 0x1390            
            float m_flReloadEnemyLoSPct; // 0x1394            
            float m_flReloadEnemyLosTime; // 0x1398            
            float m_flMinShootTimeToReload; // 0x139c            
            float m_flDashDamageThreshold; // 0x13a0            
            float m_flDashDamageTickDown; // 0x13a4            
            float m_flMinDesiredDashDist; // 0x13a8            
            float m_flMinAbilityAimTime; // 0x13ac            
            float m_flDisengageFromEnemyToLaneDist; // 0x13b0            
            float m_flDefendBaseSearchRadius; // 0x13b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayerBotNPCBrainVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPlayerBotNPCBrainVData) == 0x13b8);
    };
};
