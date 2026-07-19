#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x38
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDOTAOverworldTheme
        {
        public:
            CUtlString m_sButtonType; // 0x0            
            CUtlString m_sTokenType; // 0x8            
            CUtlString m_sTokenReceivedPopupLayout; // 0x10            
            CUtlString m_sTokenTraderEncounterLayout; // 0x18            
            CUtlString m_sTokenTraderVisualNovelStyle; // 0x20            
            CUtlString m_sInventoryPickerLayout; // 0x28            
            CUtlString m_sTextPrefix; // 0x30            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTheme, m_sButtonType) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTheme, m_sTokenType) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTheme, m_sTokenReceivedPopupLayout) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTheme, m_sTokenTraderEncounterLayout) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTheme, m_sTokenTraderVisualNovelStyle) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTheme, m_sInventoryPickerLayout) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldTheme, m_sTextPrefix) == 0x30);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldTheme) == 0x38);
    };
};
