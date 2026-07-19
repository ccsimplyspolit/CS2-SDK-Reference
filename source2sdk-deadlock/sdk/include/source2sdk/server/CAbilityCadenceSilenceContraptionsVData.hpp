#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseDashCastAbilityVData.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x18b0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityCadenceSilenceContraptionsVData : public source2sdk::server::CBaseDashCastAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SilenceContraptionsModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SilenceContraptionsModifier;
            char m_SilenceContraptionsModifier[0x10]; // 0x18a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityCadenceSilenceContraptionsVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityCadenceSilenceContraptionsVData) == 0x18b0);
    };
};
