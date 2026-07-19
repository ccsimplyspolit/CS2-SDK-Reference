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
        // Size: 0x48
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CAI_MotorGroundAnimGraph_State_IdleTurn : public source2sdk::server::CAI_MotorGroundAnimGraph_State
        {
        public:
            std::int32_t m_eType; // 0x20            
            VectorWS m_vOriginalTargetFacingPosition; // 0x24            
            VectorWS m_vTargetFacingPosition; // 0x30            
            float m_flOriginalAngleDelta; // 0x3c            
            float m_flTurnSpeed; // 0x40            
            bool m_bWasBlockIdleTurnTagActive; // 0x44            
            bool m_bWasBlockIdleTagActive; // 0x45            
            uint8_t _pad0046[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph_State_IdleTurn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_MotorGroundAnimGraph_State_IdleTurn) == 0x48);
    };
};
