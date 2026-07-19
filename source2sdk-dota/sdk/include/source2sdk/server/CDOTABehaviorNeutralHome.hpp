#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x188
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorNeutralHome
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            VectorWS m_vHomePosition; // 0x150            
            VectorWS m_vHomeFacing; // 0x15c            
            bool m_bHomePositionSet; // 0x168            
            uint8_t _pad0169[0x7]; // 0x169
            source2sdk::server::CountdownTimer m_IdleRareAnimationTime; // 0x170            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralHome, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralHome, m_vHomePosition) == 0x150);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralHome, m_vHomeFacing) == 0x15c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralHome, m_bHomePositionSet) == 0x168);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorNeutralHome, m_IdleRareAnimationTime) == 0x170);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorNeutralHome) == 0x188);
    };
};
