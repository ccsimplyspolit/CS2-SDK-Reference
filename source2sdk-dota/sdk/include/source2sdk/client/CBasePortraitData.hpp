#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xdd0
        // Has VTable
        #pragma pack(push, 1)
        class CBasePortraitData
        {
        public:
            uint8_t _pad0000[0x410]; // 0x0
            // m_iModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_iModelIndex;
            char m_iModelIndex[0x8]; // 0x410            
            CUtlStringToken m_skin; // 0x418            
            uint8_t _pad041c[0x98c]; // 0x41c
            bool m_bHasSetupView; // 0xda8            
            uint8_t _pad0da9[0x1f]; // 0xda9
            float m_flRotation; // 0xdc8            
            uint8_t _pad0dcc[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CBasePortraitData, m_iModelIndex) == 0x410);
        static_assert(offsetof(source2sdk::client::CBasePortraitData, m_skin) == 0x418);
        static_assert(offsetof(source2sdk::client::CBasePortraitData, m_bHasSetupView) == 0xda8);
        static_assert(offsetof(source2sdk::client::CBasePortraitData, m_flRotation) == 0xdc8);
        
        static_assert(sizeof(source2sdk::client::CBasePortraitData) == 0xdd0);
    };
};
