#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Invis.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelPlayerPawn;
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
        // Size: 0x490
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_LurkersAmbush_Invis : public source2sdk::client::CCitadel_Modifier_Invis
        {
        public:
            // m_mapStartLookTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::C_CitadelPlayerPawn*,source2sdk::entity2::GameTime_t> m_mapStartLookTime;
            char m_mapStartLookTime[0x28]; // 0x460            
            source2sdk::entity2::GameTime_t m_flStartSpotted; // 0x488            
            uint8_t _pad048c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_LurkersAmbush_Invis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_LurkersAmbush_Invis) == 0x490);
    };
};
