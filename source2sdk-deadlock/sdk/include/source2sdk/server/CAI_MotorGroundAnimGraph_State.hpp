#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x20
        // Has VTable
        // Is Abstract
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CAI_MotorGroundAnimGraph_State
        {
        public:
            uint8_t _pad0000[0x18]; // 0x0
            bool m_bIsActive; // 0x18            
            bool m_bIsUpdating; // 0x19            
            bool m_bIsTransitionAllowed; // 0x1a            
            bool m_bIsSupported; // 0x1b            
            std::int32_t m_nTickActivated; // 0x1c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAI_MotorGroundAnimGraph_State, m_bIsActive) == 0x18);
        static_assert(offsetof(source2sdk::server::CAI_MotorGroundAnimGraph_State, m_bIsUpdating) == 0x19);
        static_assert(offsetof(source2sdk::server::CAI_MotorGroundAnimGraph_State, m_bIsTransitionAllowed) == 0x1a);
        static_assert(offsetof(source2sdk::server::CAI_MotorGroundAnimGraph_State, m_bIsSupported) == 0x1b);
        static_assert(offsetof(source2sdk::server::CAI_MotorGroundAnimGraph_State, m_nTickActivated) == 0x1c);
        
        static_assert(sizeof(source2sdk::server::CAI_MotorGroundAnimGraph_State) == 0x20);
    };
};
