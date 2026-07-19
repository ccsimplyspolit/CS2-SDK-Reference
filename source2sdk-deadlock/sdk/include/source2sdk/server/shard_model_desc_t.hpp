#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ShardSolid_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

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
        // Standard-layout class: true
        // Size: 0x80
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int32 m_nModelID"
        // static metadata: MNetworkVarNames "HMaterialStrong m_hMaterialBase"
        // static metadata: MNetworkVarNames "HMaterialStrong m_hMaterialDamageOverlay"
        // static metadata: MNetworkVarNames "ShardSolid_t m_solid"
        // static metadata: MNetworkVarNames "Vector2D m_vecPanelSize"
        // static metadata: MNetworkVarNames "Vector2D m_vecStressPositionA"
        // static metadata: MNetworkVarNames "Vector2D m_vecStressPositionB"
        // static metadata: MNetworkVarNames "Vector2D m_vecPanelVertices"
        // static metadata: MNetworkVarNames "Vector4D m_vInitialPanelVertices"
        // static metadata: MNetworkVarNames "float m_flGlassHalfThickness"
        // static metadata: MNetworkVarNames "bool m_bHasParent"
        // static metadata: MNetworkVarNames "bool m_bParentFrozen"
        // static metadata: MNetworkVarNames "CUtlStringToken m_SurfacePropStringToken"
        #pragma pack(push, 1)
        struct shard_model_desc_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            std::int32_t m_nModelID; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            // metadata: MNetworkEnable
            // m_hMaterialBase has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterialBase;
            char m_hMaterialBase[0x8]; // 0x10            
            // metadata: MNetworkEnable
            // m_hMaterialDamageOverlay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterialDamageOverlay;
            char m_hMaterialDamageOverlay[0x8]; // 0x18            
            // metadata: MNetworkEnable
            source2sdk::client::ShardSolid_t m_solid; // 0x20            
            uint8_t _pad0021[0x3]; // 0x21
            // metadata: MNetworkEnable
            Vector2D m_vecPanelSize; // 0x24            
            // metadata: MNetworkEnable
            Vector2D m_vecStressPositionA; // 0x2c            
            // metadata: MNetworkEnable
            Vector2D m_vecStressPositionB; // 0x34            
            uint8_t _pad003c[0x4]; // 0x3c
            // metadata: MNetworkEnable
            // m_vecPanelVertices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector2D> m_vecPanelVertices;
            char m_vecPanelVertices[0x18]; // 0x40            
            // metadata: MNetworkEnable
            // m_vInitialPanelVertices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector4D> m_vInitialPanelVertices;
            char m_vInitialPanelVertices[0x18]; // 0x58            
            // metadata: MNetworkEnable
            float m_flGlassHalfThickness; // 0x70            
            // metadata: MNetworkEnable
            bool m_bHasParent; // 0x74            
            // metadata: MNetworkEnable
            bool m_bParentFrozen; // 0x75            
            uint8_t _pad0076[0x2]; // 0x76
            // metadata: MNetworkEnable
            CUtlStringToken m_SurfacePropStringToken; // 0x78            
            uint8_t _pad007c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::shard_model_desc_t, m_nModelID) == 0x8);
        static_assert(offsetof(source2sdk::server::shard_model_desc_t, m_hMaterialBase) == 0x10);
        static_assert(offsetof(source2sdk::server::shard_model_desc_t, m_hMaterialDamageOverlay) == 0x18);
        static_assert(offsetof(source2sdk::server::shard_model_desc_t, m_solid) == 0x20);
        static_assert(offsetof(source2sdk::server::shard_model_desc_t, m_vecPanelSize) == 0x24);
        static_assert(offsetof(source2sdk::server::shard_model_desc_t, m_vecStressPositionA) == 0x2c);
        static_assert(offsetof(source2sdk::server::shard_model_desc_t, m_vecStressPositionB) == 0x34);
        static_assert(offsetof(source2sdk::server::shard_model_desc_t, m_vecPanelVertices) == 0x40);
        static_assert(offsetof(source2sdk::server::shard_model_desc_t, m_vInitialPanelVertices) == 0x58);
        static_assert(offsetof(source2sdk::server::shard_model_desc_t, m_flGlassHalfThickness) == 0x70);
        static_assert(offsetof(source2sdk::server::shard_model_desc_t, m_bHasParent) == 0x74);
        static_assert(offsetof(source2sdk::server::shard_model_desc_t, m_bParentFrozen) == 0x75);
        static_assert(offsetof(source2sdk::server::shard_model_desc_t, m_SurfacePropStringToken) == 0x78);
        
        static_assert(sizeof(source2sdk::server::shard_model_desc_t) == 0x80);
    };
};
