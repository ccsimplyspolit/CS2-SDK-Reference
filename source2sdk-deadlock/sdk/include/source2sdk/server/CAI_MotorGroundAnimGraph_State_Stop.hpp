#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State.hpp"
#include "source2sdk/server/CRelativeTransform.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x80
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CAI_MotorGroundAnimGraph_State_Stop : public source2sdk::server::CAI_MotorGroundAnimGraph_State
        {
        public:
            source2sdk::server::CRelativeTransform m_target; // 0x20            
            uint8_t _pad0050[0x20]; // 0x50
            bool m_bPathChanged; // 0x70            
            bool m_bStoppingAtEntry; // 0x71            
            uint8_t _pad0072[0xe];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph_State_Stop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_MotorGroundAnimGraph_State_Stop) == 0x80);
    };
};
