#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelBodygroupSetting_t.hpp"

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
        // Size: 0x28
        // 
        // static metadata: MModelGameData
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelEventIDToBodyGroupMapping_t
        {
        public:
            // metadata: MPropertyDescription "Maps event IDs to bodygrup settings"
            // metadata: MPropertyFriendlyName "IDs"
            // m_mapIDToSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CGlobalSymbol,CUtlVector<source2sdk::client::CitadelBodygroupSetting_t>> m_mapIDToSettings;
            char m_mapIDToSettings[0x28]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelEventIDToBodyGroupMapping_t, m_mapIDToSettings) == 0x0);
        
        static_assert(sizeof(source2sdk::client::CitadelEventIDToBodyGroupMapping_t) == 0x28);
    };
};
