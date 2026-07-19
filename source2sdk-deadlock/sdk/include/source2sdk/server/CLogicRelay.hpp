#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4d8
        // Has VTable
        #pragma pack(push, 1)
        class CLogicRelay : public source2sdk::server::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnSpawn; // 0x4a0            
            source2sdk::entity2::CEntityIOOutput m_OnTrigger; // 0x4b8            
            bool m_bDisabled; // 0x4d0            
            bool m_bWaitForRefire; // 0x4d1            
            bool m_bTriggerOnce; // 0x4d2            
            bool m_bFastRetrigger; // 0x4d3            
            bool m_bPassthoughCaller; // 0x4d4            
            uint8_t _pad04d5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicRelay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicRelay) == 0x4d8);
    };
};
