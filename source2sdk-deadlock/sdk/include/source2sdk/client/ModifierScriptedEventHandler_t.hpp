#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EModifierScriptedEvent.hpp"

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
        // Size: 0x20
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ModifierScriptedEventHandler_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::client::EModifierScriptedEvent m_eEvent; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            // m_sModifierToAdd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclassGeneric<2> m_sModifierToAdd;
            char m_sModifierToAdd[0x10]; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ModifierScriptedEventHandler_t, m_eEvent) == 0x8);
        static_assert(offsetof(source2sdk::client::ModifierScriptedEventHandler_t, m_sModifierToAdd) == 0x10);
        
        static_assert(sizeof(source2sdk::client::ModifierScriptedEventHandler_t) == 0x20);
    };
};
