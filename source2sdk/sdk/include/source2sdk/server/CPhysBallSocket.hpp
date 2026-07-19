#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x520
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysBallSocket : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_flJointFriction; // 0x508            
            bool m_bEnableSwingLimit; // 0x50c            
            uint8_t _pad050d[0x3]; // 0x50d
            float m_flSwingLimit; // 0x510            
            bool m_bEnableTwistLimit; // 0x514            
            uint8_t _pad0515[0x3]; // 0x515
            float m_flMinTwistAngle; // 0x518            
            float m_flMaxTwistAngle; // 0x51c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysBallSocket because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysBallSocket) == 0x520);
    };
};
