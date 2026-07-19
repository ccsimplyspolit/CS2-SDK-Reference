#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x8d8
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        #pragma pack(push, 1)
        class CBaseClientUIEntity : public source2sdk::server::CBaseModelEntity
        {
        public:
            bool m_bEnabled; // 0x778            
            uint8_t _pad0779[0x7]; // 0x779
            CUtlSymbolLarge m_DialogXMLName; // 0x780            
            CUtlSymbolLarge m_PanelClassName; // 0x788            
            CUtlSymbolLarge m_PanelID; // 0x790            
            // m_CustomOutput0 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_CustomOutput0;
            char m_CustomOutput0[0x20]; // 0x798            
            // m_CustomOutput1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_CustomOutput1;
            char m_CustomOutput1[0x20]; // 0x7b8            
            // m_CustomOutput2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_CustomOutput2;
            char m_CustomOutput2[0x20]; // 0x7d8            
            // m_CustomOutput3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_CustomOutput3;
            char m_CustomOutput3[0x20]; // 0x7f8            
            // m_CustomOutput4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_CustomOutput4;
            char m_CustomOutput4[0x20]; // 0x818            
            // m_CustomOutput5 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_CustomOutput5;
            char m_CustomOutput5[0x20]; // 0x838            
            // m_CustomOutput6 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_CustomOutput6;
            char m_CustomOutput6[0x20]; // 0x858            
            // m_CustomOutput7 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_CustomOutput7;
            char m_CustomOutput7[0x20]; // 0x878            
            // m_CustomOutput8 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_CustomOutput8;
            char m_CustomOutput8[0x20]; // 0x898            
            // m_CustomOutput9 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_CustomOutput9;
            char m_CustomOutput9[0x20]; // 0x8b8            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseClientUIEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseClientUIEntity) == 0x8d8);
    };
};
