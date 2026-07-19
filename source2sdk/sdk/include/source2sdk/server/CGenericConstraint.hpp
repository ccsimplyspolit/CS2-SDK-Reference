#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/physicslib/JointMotion_t.hpp"
#include "source2sdk/server/CPhysConstraint.hpp"

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
        // Size: 0x608
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CGenericConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad0508[0x8]; // 0x508
            bool m_bPlaceAnchorsAtConstraintTransform; // 0x510            
            uint8_t _pad0511[0x3]; // 0x511
            source2sdk::physicslib::JointMotion_t m_nLinearMotionX; // 0x514            
            source2sdk::physicslib::JointMotion_t m_nLinearMotionY; // 0x518            
            source2sdk::physicslib::JointMotion_t m_nLinearMotionZ; // 0x51c            
            float m_flLinearFrequencyX; // 0x520            
            float m_flLinearFrequencyY; // 0x524            
            float m_flLinearFrequencyZ; // 0x528            
            float m_flLinearDampingRatioX; // 0x52c            
            float m_flLinearDampingRatioY; // 0x530            
            float m_flLinearDampingRatioZ; // 0x534            
            float m_flMaxLinearImpulseX; // 0x538            
            float m_flMaxLinearImpulseY; // 0x53c            
            float m_flMaxLinearImpulseZ; // 0x540            
            float m_flBreakAfterTimeX; // 0x544            
            float m_flBreakAfterTimeY; // 0x548            
            float m_flBreakAfterTimeZ; // 0x54c            
            source2sdk::entity2::GameTime_t m_flBreakAfterTimeStartTimeX; // 0x550            
            source2sdk::entity2::GameTime_t m_flBreakAfterTimeStartTimeY; // 0x554            
            source2sdk::entity2::GameTime_t m_flBreakAfterTimeStartTimeZ; // 0x558            
            float m_flBreakAfterTimeThresholdX; // 0x55c            
            float m_flBreakAfterTimeThresholdY; // 0x560            
            float m_flBreakAfterTimeThresholdZ; // 0x564            
            float m_flNotifyForceX; // 0x568            
            float m_flNotifyForceY; // 0x56c            
            float m_flNotifyForceZ; // 0x570            
            float m_flNotifyForceMinTimeX; // 0x574            
            float m_flNotifyForceMinTimeY; // 0x578            
            float m_flNotifyForceMinTimeZ; // 0x57c            
            source2sdk::entity2::GameTime_t m_flNotifyForceLastTimeX; // 0x580            
            source2sdk::entity2::GameTime_t m_flNotifyForceLastTimeY; // 0x584            
            source2sdk::entity2::GameTime_t m_flNotifyForceLastTimeZ; // 0x588            
            bool m_bAxisNotifiedX; // 0x58c            
            bool m_bAxisNotifiedY; // 0x58d            
            bool m_bAxisNotifiedZ; // 0x58e            
            uint8_t _pad058f[0x1]; // 0x58f
            source2sdk::physicslib::JointMotion_t m_nAngularMotionX; // 0x590            
            source2sdk::physicslib::JointMotion_t m_nAngularMotionY; // 0x594            
            source2sdk::physicslib::JointMotion_t m_nAngularMotionZ; // 0x598            
            float m_flAngularFrequencyX; // 0x59c            
            float m_flAngularFrequencyY; // 0x5a0            
            float m_flAngularFrequencyZ; // 0x5a4            
            float m_flAngularDampingRatioX; // 0x5a8            
            float m_flAngularDampingRatioY; // 0x5ac            
            float m_flAngularDampingRatioZ; // 0x5b0            
            float m_flMaxAngularImpulseX; // 0x5b4            
            float m_flMaxAngularImpulseY; // 0x5b8            
            float m_flMaxAngularImpulseZ; // 0x5bc            
            source2sdk::entity2::CEntityIOOutput m_NotifyForceReachedX; // 0x5c0            
            source2sdk::entity2::CEntityIOOutput m_NotifyForceReachedY; // 0x5d8            
            source2sdk::entity2::CEntityIOOutput m_NotifyForceReachedZ; // 0x5f0            
            
            // Datamap fields:
            // bool InputSetLinearMotionLockedX; // 0x0
            // bool InputSetLinearMotionLockedY; // 0x0
            // bool InputSetLinearMotionLockedZ; // 0x0
            // float InputSetLinearFrequencyX; // 0x0
            // float InputSetLinearFrequencyY; // 0x0
            // float InputSetLinearFrequencyZ; // 0x0
            // float InputSetLinearDampingRatioX; // 0x0
            // float InputSetLinearDampingRatioY; // 0x0
            // float InputSetLinearDampingRatioZ; // 0x0
            // bool InputSetAngularMotionLockedX; // 0x0
            // bool InputSetAngularMotionLockedY; // 0x0
            // bool InputSetAngularMotionLockedZ; // 0x0
            // float InputSetAngularFrequencyX; // 0x0
            // float InputSetAngularFrequencyY; // 0x0
            // float InputSetAngularFrequencyZ; // 0x0
            // float InputSetAngularDampingRatioX; // 0x0
            // float InputSetAngularDampingRatioY; // 0x0
            // float InputSetAngularDampingRatioZ; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGenericConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGenericConstraint) == 0x608);
    };
};
