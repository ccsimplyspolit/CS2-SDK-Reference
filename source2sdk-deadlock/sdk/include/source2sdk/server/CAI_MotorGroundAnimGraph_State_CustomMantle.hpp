#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/AI_CustomMantleRequest.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State.hpp"

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
        // Standard-layout class: false
        // Size: 0x30
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CAI_MotorGroundAnimGraph_State_CustomMantle : public source2sdk::server::CAI_MotorGroundAnimGraph_State
        {
        public:
            source2sdk::server::AI_CustomMantleRequest m_request; // 0x20            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph_State_CustomMantle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_MotorGroundAnimGraph_State_CustomMantle) == 0x30);
    };
};
