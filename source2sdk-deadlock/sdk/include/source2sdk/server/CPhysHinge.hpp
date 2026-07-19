#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/constraint_hingeparams_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPhysConstraint.hpp"
#include "source2sdk/server/ConstraintSoundInfo.hpp"

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
        // Size: 0x670
        // Has VTable
        #pragma pack(push, 1)
        class CPhysHinge : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad0500[0x8]; // 0x500
            // metadata: MNotSaved
            source2sdk::server::ConstraintSoundInfo m_soundInfo; // 0x508            
            source2sdk::entity2::CEntityIOOutput m_NotifyMinLimitReached; // 0x5a0            
            source2sdk::entity2::CEntityIOOutput m_NotifyMaxLimitReached; // 0x5b8            
            bool m_bAtMinLimit; // 0x5d0            
            bool m_bAtMaxLimit; // 0x5d1            
            uint8_t _pad05d2[0x2]; // 0x5d2
            source2sdk::client::constraint_hingeparams_t m_hinge; // 0x5d4            
            float m_hingeFriction; // 0x614            
            float m_systemLoadScale; // 0x618            
            // metadata: MNotSaved
            bool m_bIsAxisLocal; // 0x61c            
            uint8_t _pad061d[0x3]; // 0x61d
            float m_flMinRotation; // 0x620            
            float m_flMaxRotation; // 0x624            
            float m_flInitialRotation; // 0x628            
            float m_flMotorFrequency; // 0x62c            
            float m_flMotorDampingRatio; // 0x630            
            float m_flAngleSpeed; // 0x634            
            float m_flAngleSpeedThreshold; // 0x638            
            float m_flLimitsDebugVisRotation; // 0x63c            
            source2sdk::entity2::CEntityIOOutput m_OnStartMoving; // 0x640            
            source2sdk::entity2::CEntityIOOutput m_OnStopMoving; // 0x658            
            
            // Datamap fields:
            // Vector m_hinge.worldPosition; // 0x5d4
            // Vector m_hinge.worldAxisDirection; // 0x5e0
            // float InputSetMotorTargetAngle; // 0x0
            // float InputSetVelocity; // 0x0
            // float InputSetHingeFriction; // 0x0
            // float InputSetMinLimit; // 0x0
            // float InputSetMaxLimit; // 0x0
            // void CPhysHingeSoundThink; // 0x0
            // void CPhysHingeLimitThink; // 0x0
            // void CPhysHingeMoveThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysHinge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysHinge) == 0x670);
    };
};
