#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_Item;
    };
};

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
        // Size: 0xb80
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_Physical : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            // m_hItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_Item> m_hItem;
            char m_hItem[0x4]; // 0xac0            
            bool m_bIsLowPriorityHoverItem; // 0xac4            
            uint8_t _pad0ac5[0x3]; // 0xac5
            // m_hOldItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_Item> m_hOldItem;
            char m_hOldItem[0x4]; // 0xac8            
            uint8_t _pad0acc[0x4]; // 0xacc
            char* m_pszParticleName; // 0xad0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0xad8            
            bool m_bShowingTooltip; // 0xadc            
            bool m_bShowingSimpleTooltip; // 0xadd            
            uint8_t _pad0ade[0xa2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_Physical because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_Physical) == 0xb80);
    };
};
