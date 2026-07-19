#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Invis.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelPlayerPawn;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x498
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_LurkersAmbush_Invis : public source2sdk::server::CCitadel_Modifier_Invis
        {
        public:
            // m_mapStartLookTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::server::CCitadelPlayerPawn*,source2sdk::entity2::GameTime_t> m_mapStartLookTime;
            char m_mapStartLookTime[0x28]; // 0x468            
            source2sdk::entity2::GameTime_t m_flStartSpotted; // 0x490            
            uint8_t _pad0494[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_LurkersAmbush_Invis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_LurkersAmbush_Invis) == 0x498);
    };
};
