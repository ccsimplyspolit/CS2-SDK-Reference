#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EStreetBrawlGameState.hpp"
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
        // Size: 0x758
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_StreetBrawl_Phase_VData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // m_eValidStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVecEnum<source2sdk::client::EStreetBrawlGameState> m_eValidStates;
            char m_eValidStates[0x4]; // 0x750            
            uint8_t _pad0754[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_StreetBrawl_Phase_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_StreetBrawl_Phase_VData) == 0x758);
    };
};
