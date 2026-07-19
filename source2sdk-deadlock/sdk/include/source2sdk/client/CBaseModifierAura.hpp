#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x110
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CBaseModifierAura : public source2sdk::client::CCitadelModifier
        {
        public:
            // metadata: MNotSaved
            // m_hAuraUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hAuraUnits;
            char m_hAuraUnits[0x18]; // 0xc0            
            // m_hOldAuraUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hOldAuraUnits;
            char m_hOldAuraUnits[0x18]; // 0xd8            
            float m_flOverrideRadius; // 0xf0            
            uint8_t _pad00f4[0x1c];
            
            // Datamap fields:
            // void m_hAmbientEffect; // 0x108
            // void m_hAmbientSound; // 0xf4
            // void m_flLastRadius; // 0x10c
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseModifierAura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseModifierAura) == 0x110);
    };
};
