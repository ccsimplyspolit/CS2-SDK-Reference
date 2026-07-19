#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1b8
        // Has VTable
        #pragma pack(push, 1)
        class CPulseGraphInstance_ServerEntity : public source2sdk::pulse_runtime_lib::CBasePulseGraphInstance
        {
        public:
            uint8_t _pad0118[0x78]; // 0x118
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x190            
            bool m_bActivated; // 0x194            
            uint8_t _pad0195[0x3]; // 0x195
            CUtlSymbolLarge m_sNameFixupStaticPrefix; // 0x198            
            CUtlSymbolLarge m_sNameFixupParent; // 0x1a0            
            CUtlSymbolLarge m_sNameFixupLocal; // 0x1a8            
            CUtlSymbolLarge m_sProceduralWorldNameForRelays; // 0x1b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseGraphInstance_ServerEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPulseGraphInstance_ServerEntity) == 0x1b8);
    };
};
