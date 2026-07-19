#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseDashCastAbilityVData.hpp"
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
        // Size: 0x18b0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityCadenceSilenceContraptionsVData : public source2sdk::client::CBaseDashCastAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SilenceContraptionsModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SilenceContraptionsModifier;
            char m_SilenceContraptionsModifier[0x10]; // 0x18a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityCadenceSilenceContraptionsVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityCadenceSilenceContraptionsVData) == 0x18b0);
    };
};
