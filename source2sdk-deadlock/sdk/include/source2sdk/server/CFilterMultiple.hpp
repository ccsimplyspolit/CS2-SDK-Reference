#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/filter_t.hpp"
#include "source2sdk/server/CBaseFilter.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x558
        // Has VTable
        #pragma pack(push, 1)
        class CFilterMultiple : public source2sdk::server::CBaseFilter
        {
        public:
            source2sdk::client::filter_t m_nFilterType; // 0x4d8            
            uint8_t _pad04dc[0x4]; // 0x4dc
            CUtlSymbolLarge m_iFilterName[10]; // 0x4e0            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFilter[10];
            char m_hFilter[0x28]; // 0x530            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFilterMultiple because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFilterMultiple) == 0x558);
    };
};
