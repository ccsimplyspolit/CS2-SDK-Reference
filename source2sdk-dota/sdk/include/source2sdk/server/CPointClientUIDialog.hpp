#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseClientUIEntity.hpp"
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
        // Size: 0x8e0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointClientUIDialog : public source2sdk::server::CBaseClientUIEntity
        {
        public:
            // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActivator;
            char m_hActivator[0x4]; // 0x8d8            
            bool m_bStartEnabled; // 0x8dc            
            uint8_t _pad08dd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointClientUIDialog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointClientUIDialog) == 0x8e0);
    };
};
