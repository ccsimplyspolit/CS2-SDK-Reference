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
        // Size: 0x668
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysHinge : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad04f8[0x8]; // 0x4f8
            // metadata: MNotSaved
            source2sdk::server::ConstraintSoundInfo m_soundInfo; // 0x500            
            source2sdk::entity2::CEntityIOOutput m_NotifyMinLimitReached; // 0x598            
            source2sdk::entity2::CEntityIOOutput m_NotifyMaxLimitReached; // 0x5b0            
            bool m_bAtMinLimit; // 0x5c8            
            bool m_bAtMaxLimit; // 0x5c9            
            uint8_t _pad05ca[0x2]; // 0x5ca
            source2sdk::client::constraint_hingeparams_t m_hinge; // 0x5cc            
            float m_hingeFriction; // 0x60c            
            float m_systemLoadScale; // 0x610            
            // metadata: MNotSaved
            bool m_bIsAxisLocal; // 0x614            
            uint8_t _pad0615[0x3]; // 0x615
            float m_flMinRotation; // 0x618            
            float m_flMaxRotation; // 0x61c            
            float m_flInitialRotation; // 0x620            
            float m_flMotorFrequency; // 0x624            
            float m_flMotorDampingRatio; // 0x628            
            float m_flAngleSpeed; // 0x62c            
            float m_flAngleSpeedThreshold; // 0x630            
            float m_flLimitsDebugVisRotation; // 0x634            
            source2sdk::entity2::CEntityIOOutput m_OnStartMoving; // 0x638            
            source2sdk::entity2::CEntityIOOutput m_OnStopMoving; // 0x650            
            
            // Datamap fields:
            // float InputSetMotorTargetAngle; // 0x0
            // float InputSetVelocity; // 0x0
            // float InputSetHingeFriction; // 0x0
            // float InputSetMinLimit; // 0x0
            // float InputSetMaxLimit; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysHinge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysHinge) == 0x668);
    };
};
