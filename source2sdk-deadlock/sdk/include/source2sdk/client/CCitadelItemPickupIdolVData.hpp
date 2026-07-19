#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelItemPickupVData.hpp"
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
        // Size: 0x128
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelItemPickupIdolVData : public source2sdk::client::CCitadelItemPickupVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_WalkBackModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_WalkBackModifier;
            char m_WalkBackModifier[0x10]; // 0x108            
            // m_PickUpAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_PickUpAura;
            char m_PickUpAura[0x10]; // 0x118            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelItemPickupIdolVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelItemPickupIdolVData) == 0x128);
    };
};
