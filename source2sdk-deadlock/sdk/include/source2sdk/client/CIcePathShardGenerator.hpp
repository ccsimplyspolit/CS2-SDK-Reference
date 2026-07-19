#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ice_path_shard_model_desc_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

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
        // Standard-layout class: true
        // Size: 0xe8
        #pragma pack(push, 1)
        class CIcePathShardGenerator
        {
        public:
            source2sdk::client::ice_path_shard_model_desc_t m_icePathModelDesc; // 0x0            
            // m_hBaseModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hBaseModel;
            char m_hBaseModel[0x8]; // 0x38            
            source2sdk::client::ice_path_shard_model_desc_t m_icePathSurfModelDesc; // 0x40            
            // m_hSurfModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hSurfModel;
            char m_hSurfModel[0x8]; // 0x78            
            float m_flRadius; // 0x80            
            uint8_t _pad0084[0x4]; // 0x84
            // m_vecPreviousShard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vecPreviousShard;
            char m_vecPreviousShard[0x18]; // 0x88            
            Vector m_vecPreviousShardOrigin; // 0xa0            
            Vector m_vecPreviousPreviousShardOrigin; // 0xac            
            // m_vecUnitCirclePoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vecUnitCirclePoints;
            char m_vecUnitCirclePoints[0x18]; // 0xb8            
            // m_vPrevFrontEdgeVerts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vPrevFrontEdgeVerts;
            char m_vPrevFrontEdgeVerts[0x18]; // 0xd0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CIcePathShardGenerator, m_icePathModelDesc) == 0x0);
        static_assert(offsetof(source2sdk::client::CIcePathShardGenerator, m_hBaseModel) == 0x38);
        static_assert(offsetof(source2sdk::client::CIcePathShardGenerator, m_icePathSurfModelDesc) == 0x40);
        static_assert(offsetof(source2sdk::client::CIcePathShardGenerator, m_hSurfModel) == 0x78);
        static_assert(offsetof(source2sdk::client::CIcePathShardGenerator, m_flRadius) == 0x80);
        static_assert(offsetof(source2sdk::client::CIcePathShardGenerator, m_vecPreviousShard) == 0x88);
        static_assert(offsetof(source2sdk::client::CIcePathShardGenerator, m_vecPreviousShardOrigin) == 0xa0);
        static_assert(offsetof(source2sdk::client::CIcePathShardGenerator, m_vecPreviousPreviousShardOrigin) == 0xac);
        static_assert(offsetof(source2sdk::client::CIcePathShardGenerator, m_vecUnitCirclePoints) == 0xb8);
        static_assert(offsetof(source2sdk::client::CIcePathShardGenerator, m_vPrevFrontEdgeVerts) == 0xd0);
        
        static_assert(sizeof(source2sdk::client::CIcePathShardGenerator) == 0xe8);
    };
};
