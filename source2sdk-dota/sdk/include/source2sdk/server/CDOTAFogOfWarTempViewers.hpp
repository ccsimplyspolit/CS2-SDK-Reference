#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/TempViewerInfo_t.hpp"

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
        // Size: 0x520
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTAFogOfWarTempViewers : public source2sdk::server::CBaseEntity
        {
        public:
            std::uint32_t m_FoWTempViewerVersion; // 0x498            
            uint8_t _pad049c[0x4]; // 0x49c
            // m_TempViewerInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::TempViewerInfo_t> m_TempViewerInfo;
            char m_TempViewerInfo[0x68]; // 0x4a0            
            source2sdk::entity2::GameTime_t m_flEndTimeMin; // 0x508            
            uint8_t _pad050c[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAFogOfWarTempViewers because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAFogOfWarTempViewers) == 0x520);
    };
};
