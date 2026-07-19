#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AuraCenterType_t.hpp"
#include "source2sdk/client/AuraShapeType_t.hpp"
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/CModifierLevelFloat.hpp"

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
        // Size: 0x790
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierVData_BaseAura : public source2sdk::client::CCitadelModifierVData
        {
        public:
            source2sdk::client::AuraShapeType_t m_nAuraShapeType; // 0x750            
            source2sdk::client::AuraCenterType_t m_nCenterType; // 0x754            
            // metadata: MPropertySuppressExpr "m_nAuraShapeType != eSphere"
            source2sdk::client::CModifierLevelFloat m_flAuraRadius; // 0x758            
            // metadata: MPropertySuppressExpr "m_nAuraShapeType != eEntityBased"
            source2sdk::client::CModifierLevelFloat m_flAuraEntityBoundsScale; // 0x768            
            std::int32_t m_nAmbientParticleRadiusControlPoint; // 0x778            
            uint8_t _pad077c[0x4]; // 0x77c
            // metadata: MPropertyDescription "Aura - Modifier to Apply"
            // metadata: MPropertyFriendlyName "Modifier Provided By Aura"
            // m_modifierProvidedByAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_modifierProvidedByAura;
            char m_modifierProvidedByAura[0x10]; // 0x780            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierVData_BaseAura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierVData_BaseAura) == 0x790);
    };
};
