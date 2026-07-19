#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EHideoutButtonAction.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0x910
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_strInteractLocString"
        // static metadata: MNetworkVarNames "EHideoutButtonAction m_eHideoutAction"
        #pragma pack(push, 1)
        class CCitadelHideoutInteractableTrigger : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad08e0[0x8]; // 0x8e0
            source2sdk::entity2::CEntityIOOutput m_OnInteracted; // 0x8e8            
            // metadata: MNetworkEnable
            CUtlString m_strInteractLocString; // 0x900            
            // metadata: MNetworkEnable
            source2sdk::client::EHideoutButtonAction m_eHideoutAction; // 0x908            
            uint8_t _pad090c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelHideoutInteractableTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelHideoutInteractableTrigger) == 0x910);
    };
};
