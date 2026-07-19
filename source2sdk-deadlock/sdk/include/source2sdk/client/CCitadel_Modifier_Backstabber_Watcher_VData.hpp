#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_Intrinsic_BaseVData.hpp"

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
        // Size: 0x778
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Backstabber_Watcher_VData : public source2sdk::client::CCitadel_Modifier_Intrinsic_BaseVData
        {
        public:
            // metadata: MPropertyGroupName "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x750            
            // metadata: MPropertyGroupName "Gameplay"
            float flDotResultMin; // 0x760            
            uint8_t _pad0764[0x4]; // 0x764
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strHitConfirmSound; // 0x768            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Backstabber_Watcher_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Backstabber_Watcher_VData) == 0x778);
    };
};
