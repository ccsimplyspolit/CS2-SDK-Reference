#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Item_TrackingProjectileApplyModifierVData.hpp"

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
        // Size: 0x19e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Item_FocusLens_VData : public source2sdk::server::CCitadel_Item_TrackingProjectileApplyModifierVData
        {
        public:
            // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SilenceModifier;
            char m_SilenceModifier[0x10]; // 0x19b8            
            // m_DamageModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DamageModifier;
            char m_DamageModifier[0x10]; // 0x19c8            
            // m_ResistReductionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ResistReductionModifier;
            char m_ResistReductionModifier[0x10]; // 0x19d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_FocusLens_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_FocusLens_VData) == 0x19e8);
    };
};
