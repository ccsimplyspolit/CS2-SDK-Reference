#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_InterestTarget.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class AI_CustomMoveRequest
        {
        public:
            CGlobalSymbol m_sType; // 0x0            
            source2sdk::server::CAI_InterestTarget m_interestTarget; // 0x8            
            bool m_bForceInterrupt; // 0x3c            
            uint8_t _pad003d[0x3]; // 0x3d
            float m_flMinPathLength; // 0x40            
            VectorWS m_vTargetPosition; // 0x44            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::AI_CustomMoveRequest, m_sType) == 0x0);
        static_assert(offsetof(source2sdk::server::AI_CustomMoveRequest, m_interestTarget) == 0x8);
        static_assert(offsetof(source2sdk::server::AI_CustomMoveRequest, m_bForceInterrupt) == 0x3c);
        static_assert(offsetof(source2sdk::server::AI_CustomMoveRequest, m_flMinPathLength) == 0x40);
        static_assert(offsetof(source2sdk::server::AI_CustomMoveRequest, m_vTargetPosition) == 0x44);
        
        static_assert(sizeof(source2sdk::server::AI_CustomMoveRequest) == 0x50);
    };
};
