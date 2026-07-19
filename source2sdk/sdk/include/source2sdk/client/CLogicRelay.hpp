#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CLogicalEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x638
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicRelay : public source2sdk::client::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnSpawn; // 0x600            
            source2sdk::entity2::CEntityIOOutput m_OnTrigger; // 0x618            
            bool m_bDisabled; // 0x630            
            bool m_bWaitForRefire; // 0x631            
            bool m_bTriggerOnce; // 0x632            
            bool m_bFastRetrigger; // 0x633            
            bool m_bPassthoughCaller; // 0x634            
            uint8_t _pad0635[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicRelay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CLogicRelay) == 0x638);
    };
};
