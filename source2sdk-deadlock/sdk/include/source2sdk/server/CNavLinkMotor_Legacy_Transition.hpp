#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/AIMotorTransitionState_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_BaseNPC;
    };
};

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
        // Size: 0x30
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CNavLinkMotor_Legacy_Transition
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::server::AIMotorTransitionState_t m_nTransitionState; // 0x8            
            VectorWS m_vNavLinkStartPos; // 0xc            
            source2sdk::entity2::GameTime_t m_flNavLinkFaceStartTime; // 0x18            
            bool m_bTransitionAnimgraphHasTicked; // 0x1c            
            bool m_bIsTurning; // 0x1d            
            bool m_bIsFromMovement; // 0x1e            
            uint8_t _pad001f[0x1]; // 0x1f
            CGlobalSymbol m_strMovementName; // 0x20            
            // m_hNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CAI_BaseNPC> m_hNPC;
            char m_hNPC[0x4]; // 0x28            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CNavLinkMotor_Legacy_Transition, m_nTransitionState) == 0x8);
        static_assert(offsetof(source2sdk::server::CNavLinkMotor_Legacy_Transition, m_vNavLinkStartPos) == 0xc);
        static_assert(offsetof(source2sdk::server::CNavLinkMotor_Legacy_Transition, m_flNavLinkFaceStartTime) == 0x18);
        static_assert(offsetof(source2sdk::server::CNavLinkMotor_Legacy_Transition, m_bTransitionAnimgraphHasTicked) == 0x1c);
        static_assert(offsetof(source2sdk::server::CNavLinkMotor_Legacy_Transition, m_bIsTurning) == 0x1d);
        static_assert(offsetof(source2sdk::server::CNavLinkMotor_Legacy_Transition, m_bIsFromMovement) == 0x1e);
        static_assert(offsetof(source2sdk::server::CNavLinkMotor_Legacy_Transition, m_strMovementName) == 0x20);
        static_assert(offsetof(source2sdk::server::CNavLinkMotor_Legacy_Transition, m_hNPC) == 0x28);
        
        static_assert(sizeof(source2sdk::server::CNavLinkMotor_Legacy_Transition) == 0x30);
    };
};
