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
        // Size: 0x518
        // Has VTable
        #pragma pack(push, 1)
        class CPhysBallSocket : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_flJointFriction; // 0x500            
            bool m_bEnableSwingLimit; // 0x504            
            uint8_t _pad0505[0x3]; // 0x505
            float m_flSwingLimit; // 0x508            
            bool m_bEnableTwistLimit; // 0x50c            
            uint8_t _pad050d[0x3]; // 0x50d
            float m_flMinTwistAngle; // 0x510            
            float m_flMaxTwistAngle; // 0x514            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysBallSocket because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysBallSocket) == 0x518);
    };
};
