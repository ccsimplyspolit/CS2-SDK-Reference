#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x5d0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysSlideConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad0508[0x8]; // 0x508
            VectorWS m_axisEnd; // 0x510            
            float m_slideFriction; // 0x51c            
            float m_systemLoadScale; // 0x520            
            float m_initialOffset; // 0x524            
            bool m_bEnableLinearConstraint; // 0x528            
            bool m_bEnableAngularConstraint; // 0x529            
            uint8_t _pad052a[0x2]; // 0x52a
            float m_flMotorFrequency; // 0x52c            
            float m_flMotorDampingRatio; // 0x530            
            bool m_bUseEntityPivot; // 0x534            
            uint8_t _pad0535[0x3]; // 0x535
            // metadata: MNotSaved
            source2sdk::server::ConstraintSoundInfo m_soundInfo; // 0x538            
            
            // Datamap fields:
            // float InputSetOffset; // 0x0
            // float InputSetVelocity; // 0x0
            // float InputSetSlideFriction; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysSlideConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysSlideConstraint) == 0x5d0);
    };
};
