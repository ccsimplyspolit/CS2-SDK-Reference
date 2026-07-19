#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x780
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifier_Mirage_Tornado_Aura_Apply_VData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_LiftModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_LiftModifier;
            char m_LiftModifier[0x10]; // 0x750            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x760            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strHitConfirmSound; // 0x770            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Mirage_Tornado_Aura_Apply_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Mirage_Tornado_Aura_Apply_VData) == 0x780);
    };
};
