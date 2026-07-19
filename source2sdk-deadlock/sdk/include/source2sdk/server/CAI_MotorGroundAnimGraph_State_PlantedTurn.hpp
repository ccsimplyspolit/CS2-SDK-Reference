#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x28
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CAI_MotorGroundAnimGraph_State_PlantedTurn : public source2sdk::server::CAI_MotorGroundAnimGraph_State
        {
        public:
            bool m_bRepathed; // 0x20            
            bool m_bPathChanged; // 0x21            
            uint8_t _pad0022[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph_State_PlantedTurn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_MotorGroundAnimGraph_State_PlantedTurn) == 0x28);
    };
};
