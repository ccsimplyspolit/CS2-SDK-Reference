#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x1900
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_BaseHeldItemVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            float m_flBaseFallrate; // 0x1818            
            uint8_t _pad181c[0x4]; // 0x181c
            // metadata: MPropertyStartGroup "Visuals"
            // m_ItemModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_ItemModel;
            char m_ItemModel[0xe0]; // 0x1820            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_BaseHeldItemVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_BaseHeldItemVData) == 0x1900);
    };
};
