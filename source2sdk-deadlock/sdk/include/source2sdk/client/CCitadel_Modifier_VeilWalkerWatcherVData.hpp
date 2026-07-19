#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"

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
        // Size: 0x798
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_VeilWalkerWatcherVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_InvisModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_InvisModifier;
            char m_InvisModifier[0x10]; // 0x750            
            // m_VeilWalkerTriggeredModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_VeilWalkerTriggeredModifier;
            char m_VeilWalkerTriggeredModifier[0x10]; // 0x760            
            // m_VeilWalkerMovespeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_VeilWalkerMovespeed;
            char m_VeilWalkerMovespeed[0x10]; // 0x770            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strOwnerExpiredSound; // 0x780            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flTraceLengthMin; // 0x790            
            uint8_t _pad0794[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_VeilWalkerWatcherVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_VeilWalkerWatcherVData) == 0x798);
    };
};
