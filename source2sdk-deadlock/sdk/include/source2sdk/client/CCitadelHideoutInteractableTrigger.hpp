#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/EHideoutButtonAction.hpp"
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
        // Size: 0xaa8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_strInteractLocString"
        // static metadata: MNetworkVarNames "EHideoutButtonAction m_eHideoutAction"
        #pragma pack(push, 1)
        class CCitadelHideoutInteractableTrigger : public source2sdk::client::C_BaseTrigger
        {
        public:
            uint8_t _pad0a78[0x8]; // 0xa78
            source2sdk::entity2::CEntityIOOutput m_OnInteracted; // 0xa80            
            // metadata: MNetworkEnable
            CUtlString m_strInteractLocString; // 0xa98            
            // metadata: MNetworkEnable
            source2sdk::client::EHideoutButtonAction m_eHideoutAction; // 0xaa0            
            uint8_t _pad0aa4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelHideoutInteractableTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelHideoutInteractableTrigger) == 0xaa8);
    };
};
