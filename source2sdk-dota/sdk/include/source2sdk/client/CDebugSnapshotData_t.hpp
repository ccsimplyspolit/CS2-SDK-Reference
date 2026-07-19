#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CGenericShapeProxy.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CDebugDrawHistoryData;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct DebugSnapshotBaseStructuredData_t;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x130
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CDebugSnapshotData_t
        {
        public:
            CUtlString m_text; // 0x0            
            std::uint32_t m_dataType; // 0x8            
            std::uint32_t m_userFlags; // 0xc            
            std::uint32_t m_userData; // 0x10            
            VectorWS m_userVector; // 0x14            
            CTransformWS m_userTransform; // 0x20            
            source2sdk::server::CGenericShapeProxy m_userShape; // 0x40            
            Color m_drawColor; // 0xd8            
            uint8_t _pad00dc[0x4]; // 0xdc
            // m_vecDebugOverlayData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDebugDrawHistoryData*> m_vecDebugOverlayData;
            char m_vecDebugOverlayData[0x18]; // 0xe0            
            source2sdk::client::DebugSnapshotBaseStructuredData_t* m_pStructuredData; // 0xf8            
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEntity;
            char m_hEntity[0x4]; // 0x100            
            uint8_t _pad0104[0x4]; // 0x104
            CUtlString m_sEntityName; // 0x108            
            CEntityIndex m_nEntityIndex; // 0x110            
            uint8_t _pad0114[0xc]; // 0x114
            // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::client::CDebugSnapshotData_t> m_children;
            char m_children[0x10]; // 0x120            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDebugSnapshotData_t, m_text) == 0x0);
        static_assert(offsetof(source2sdk::client::CDebugSnapshotData_t, m_dataType) == 0x8);
        static_assert(offsetof(source2sdk::client::CDebugSnapshotData_t, m_userFlags) == 0xc);
        static_assert(offsetof(source2sdk::client::CDebugSnapshotData_t, m_userData) == 0x10);
        static_assert(offsetof(source2sdk::client::CDebugSnapshotData_t, m_userVector) == 0x14);
        static_assert(offsetof(source2sdk::client::CDebugSnapshotData_t, m_userTransform) == 0x20);
        static_assert(offsetof(source2sdk::client::CDebugSnapshotData_t, m_userShape) == 0x40);
        static_assert(offsetof(source2sdk::client::CDebugSnapshotData_t, m_drawColor) == 0xd8);
        static_assert(offsetof(source2sdk::client::CDebugSnapshotData_t, m_vecDebugOverlayData) == 0xe0);
        static_assert(offsetof(source2sdk::client::CDebugSnapshotData_t, m_pStructuredData) == 0xf8);
        static_assert(offsetof(source2sdk::client::CDebugSnapshotData_t, m_hEntity) == 0x100);
        static_assert(offsetof(source2sdk::client::CDebugSnapshotData_t, m_sEntityName) == 0x108);
        static_assert(offsetof(source2sdk::client::CDebugSnapshotData_t, m_nEntityIndex) == 0x110);
        static_assert(offsetof(source2sdk::client::CDebugSnapshotData_t, m_children) == 0x120);
        
        static_assert(sizeof(source2sdk::client::CDebugSnapshotData_t) == 0x130);
    };
};
