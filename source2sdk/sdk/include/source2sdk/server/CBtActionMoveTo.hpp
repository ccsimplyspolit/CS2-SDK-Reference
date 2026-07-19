#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBtNode.hpp"
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
        // Standard-layout class: false
        // Size: 0xe8
        // Has VTable
        #pragma pack(push, 1)
        class CBtActionMoveTo : public source2sdk::server::CBtNode
        {
        public:
            uint8_t _pad0058[0x8]; // 0x58
            CUtlString m_szDestinationInputKey; // 0x60            
            CUtlString m_szHidingSpotInputKey; // 0x68            
            CUtlString m_szThreatInputKey; // 0x70            
            VectorWS m_vecDestination; // 0x78            
            bool m_bAutoLookAdjust; // 0x84            
            bool m_bComputePath; // 0x85            
            uint8_t _pad0086[0x2]; // 0x86
            float m_flDamagingAreasPenaltyCost; // 0x88            
            uint8_t _pad008c[0x4]; // 0x8c
            source2sdk::server::CountdownTimer m_CheckApproximateCornersTimer; // 0x90            
            source2sdk::server::CountdownTimer m_CheckHighPriorityItem; // 0xa8            
            source2sdk::server::CountdownTimer m_RepathTimer; // 0xc0            
            float m_flArrivalEpsilon; // 0xd8            
            float m_flAdditionalArrivalEpsilon2D; // 0xdc            
            float m_flHidingSpotCheckDistanceThreshold; // 0xe0            
            float m_flNearestAreaDistanceThreshold; // 0xe4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBtActionMoveTo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBtActionMoveTo) == 0xe8);
    };
};
