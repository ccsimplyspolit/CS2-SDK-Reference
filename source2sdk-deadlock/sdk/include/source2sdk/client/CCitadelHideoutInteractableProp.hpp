#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/EHideoutButtonAction.hpp"
#include "source2sdk/client/EHideoutButtonInteractStyle.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xfe0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_strInteractLocString"
        // static metadata: MNetworkVarNames "EHideoutButtonInteractStyle m_eInteractStyle"
        // static metadata: MNetworkVarNames "EHideoutButtonAction m_eHideoutAction"
        // static metadata: MNetworkVarNames "float m_flInteractDistance"
        // static metadata: MNetworkVarNames "CUtlString m_strWorldPanelEntity"
        // static metadata: MNetworkVarNames "CUtlString m_strOpacityCurveString"
        #pragma pack(push, 1)
        class CCitadelHideoutInteractableProp : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad0ef0[0x8]; // 0xef0
            source2sdk::entity2::CEntityIOOutput m_OnStartTouch; // 0xef8            
            source2sdk::entity2::CEntityIOOutput m_OnStartTouchAll; // 0xf10            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouch; // 0xf28            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouchAll; // 0xf40            
            source2sdk::entity2::CEntityIOOutput m_OnInteracted; // 0xf58            
            // metadata: MNetworkEnable
            CUtlString m_strInteractLocString; // 0xf70            
            // metadata: MNetworkEnable
            source2sdk::client::EHideoutButtonInteractStyle m_eInteractStyle; // 0xf78            
            // metadata: MNetworkEnable
            source2sdk::client::EHideoutButtonAction m_eHideoutAction; // 0xf7c            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0xf80            
            uint8_t _pad0f84[0x4]; // 0xf84
            // metadata: MNetworkEnable
            CUtlString m_strWorldPanelEntity; // 0xf88            
            // metadata: MNetworkEnable
            CUtlString m_strOpacityCurveString; // 0xf90            
            uint8_t _pad0f98[0x48];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelHideoutInteractableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelHideoutInteractableProp) == 0xfe0);
    };
};
