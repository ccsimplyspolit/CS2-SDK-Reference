#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/INavLinkMotor.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x70
        // Has VTable
        #pragma pack(push, 1)
        class CNavLinkMotor_NonZUp_Transition : public source2sdk::server::INavLinkMotor
        {
        public:
            source2sdk::server::CountdownTimer m_transitionTimer; // 0x18            
            CTransformWS m_xTransitionOrigin; // 0x30            
            CTransformWS m_xTransitionTarget; // 0x50            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavLinkMotor_NonZUp_Transition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavLinkMotor_NonZUp_Transition) == 0x70);
    };
};
