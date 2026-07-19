#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_Citadel_RestorativeGooCube;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x768
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_RestorativeGoo : public source2sdk::client::CCitadelModifier
        {
        public:
            source2sdk::entity2::GameTime_t m_flEarliestBreakoutTime; // 0xc0            
            float m_flTotalPendingHeal; // 0xc4            
            uint8_t _pad00c8[0x680]; // 0xc8
            // m_hGooCube has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_Citadel_RestorativeGooCube> m_hGooCube;
            char m_hGooCube[0x4]; // 0x748            
            float m_flBreakoutPercentage; // 0x74c            
            uint8_t _pad0750[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_RestorativeGoo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_RestorativeGoo) == 0x768);
    };
};
