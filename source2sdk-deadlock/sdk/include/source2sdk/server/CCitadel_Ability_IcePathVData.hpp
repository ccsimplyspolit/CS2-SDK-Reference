#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x1848
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_IcePathVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_IcePathModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_IcePathModifier;
            char m_IcePathModifier[0x10]; // 0x1818            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flMomentumDecayRate; // 0x1828            
            float m_flMomentumWeight; // 0x182c            
            float m_flMaxPitchChange; // 0x1830            
            float m_flMaxPitchUp; // 0x1834            
            float m_flMaxPitchDown; // 0x1838            
            float m_flMaxHeight; // 0x183c            
            float m_flForwardAngleBias; // 0x1840            
            uint8_t _pad1844[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_IcePathVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_IcePathVData) == 0x1848);
    };
};
