#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

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
        // Size: 0x1908
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelAbilityDruidPlantInvisBushVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_InvisBushModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_InvisBushModel;
            char m_InvisBushModel[0xe0]; // 0x1818            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_InvisAreaModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_InvisAreaModifier;
            char m_InvisAreaModifier[0x10]; // 0x18f8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelAbilityDruidPlantInvisBushVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelAbilityDruidPlantInvisBushVData) == 0x1908);
    };
};
