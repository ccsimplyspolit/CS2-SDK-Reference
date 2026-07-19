#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
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
        // Size: 0x108
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CBaseModifierAura : public source2sdk::server::CCitadelModifier
        {
        public:
            // metadata: MNotSaved
            // m_hAuraUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAuraUnits;
            char m_hAuraUnits[0x18]; // 0xd0            
            // m_hOldAuraUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hOldAuraUnits;
            char m_hOldAuraUnits[0x18]; // 0xe8            
            float m_flOverrideRadius; // 0x100            
            uint8_t _pad0104[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseModifierAura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseModifierAura) == 0x108);
    };
};
