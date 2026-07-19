#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackData_t.hpp"
#include "source2sdk/client/CAbilityMeleeVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"

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
        // Size: 0x1da8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityUppercutVData : public source2sdk::client::CAbilityMeleeVData
        {
        public:
            source2sdk::client::AttackData_t m_UppercutAttackData; // 0x1848            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_UppercutModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_UppercutModifier;
            char m_UppercutModifier[0x10]; // 0x1d70            
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x10]; // 0x1d80            
            // m_ClipModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ClipModifier;
            char m_ClipModifier[0x10]; // 0x1d90            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flMaxPitchUp; // 0x1da0            
            float m_flDamageTriggerTime; // 0x1da4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityUppercutVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityUppercutVData) == 0x1da8);
    };
};
