#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/navlib/NavHull_t.hpp"

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
        // Size: 0x2b0
        // Construct allowed
        // Construct disallowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMarkupSearchHelper
        {
        public:
            source2sdk::navlib::NavHull_t m_navHull; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            CUtlString m_tagString; // 0x8            
            CUtlString m_nameString; // 0x10            
            VectorWS m_vRefPos; // 0x18            
            bool m_bRefPosSet; // 0x24            
            bool m_bUseStepHeight; // 0x25            
            bool m_bActive; // 0x26            
            uint8_t _pad0027[0x289];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CMarkupSearchHelper, m_navHull) == 0x0);
        static_assert(offsetof(source2sdk::server::CMarkupSearchHelper, m_tagString) == 0x8);
        static_assert(offsetof(source2sdk::server::CMarkupSearchHelper, m_nameString) == 0x10);
        static_assert(offsetof(source2sdk::server::CMarkupSearchHelper, m_vRefPos) == 0x18);
        static_assert(offsetof(source2sdk::server::CMarkupSearchHelper, m_bRefPosSet) == 0x24);
        static_assert(offsetof(source2sdk::server::CMarkupSearchHelper, m_bUseStepHeight) == 0x25);
        static_assert(offsetof(source2sdk::server::CMarkupSearchHelper, m_bActive) == 0x26);
        
        static_assert(sizeof(source2sdk::server::CMarkupSearchHelper) == 0x2b0);
    };
};
