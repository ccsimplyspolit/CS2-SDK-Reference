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
        // Size: 0x5c0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysSlideConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad04f8[0x8]; // 0x4f8
            VectorWS m_axisEnd; // 0x500            
            float m_slideFriction; // 0x50c            
            float m_systemLoadScale; // 0x510            
            float m_initialOffset; // 0x514            
            bool m_bEnableLinearConstraint; // 0x518            
            bool m_bEnableAngularConstraint; // 0x519            
            uint8_t _pad051a[0x2]; // 0x51a
            float m_flMotorFrequency; // 0x51c            
            float m_flMotorDampingRatio; // 0x520            
            bool m_bUseEntityPivot; // 0x524            
            uint8_t _pad0525[0x3]; // 0x525
            // metadata: MNotSaved
            source2sdk::server::ConstraintSoundInfo m_soundInfo; // 0x528            
            
            // Datamap fields:
            // float InputSetOffset; // 0x0
            // float InputSetVelocity; // 0x0
            // float InputSetSlideFriction; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysSlideConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysSlideConstraint) == 0x5c0);
    };
};
