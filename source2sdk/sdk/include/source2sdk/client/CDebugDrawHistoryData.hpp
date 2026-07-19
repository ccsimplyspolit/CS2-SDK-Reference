#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ESceneViewDebugOverlaysListenerDataType_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x78
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDebugDrawHistoryData
        {
        public:
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEntity;
            char m_hEntity[0x4]; // 0x0            
            source2sdk::client::ESceneViewDebugOverlaysListenerDataType_t m_etype; // 0x4            
            // m_vectors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<Vector4D> m_vectors;
            char m_vectors[0x10]; // 0x8            
            // m_colors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<Color> m_colors;
            char m_colors[0x10]; // 0x18            
            // m_dimensions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<float> m_dimensions;
            char m_dimensions[0x10]; // 0x28            
            // m_times has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<double> m_times;
            char m_times[0x10]; // 0x38            
            // m_uint64s has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<std::uint64_t> m_uint64s;
            char m_uint64s[0x10]; // 0x48            
            // m_bools has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<bool> m_bools;
            char m_bools[0x10]; // 0x58            
            // m_strings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<CUtlString> m_strings;
            char m_strings[0x10]; // 0x68            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDebugDrawHistoryData, m_hEntity) == 0x0);
        static_assert(offsetof(source2sdk::client::CDebugDrawHistoryData, m_etype) == 0x4);
        static_assert(offsetof(source2sdk::client::CDebugDrawHistoryData, m_vectors) == 0x8);
        static_assert(offsetof(source2sdk::client::CDebugDrawHistoryData, m_colors) == 0x18);
        static_assert(offsetof(source2sdk::client::CDebugDrawHistoryData, m_dimensions) == 0x28);
        static_assert(offsetof(source2sdk::client::CDebugDrawHistoryData, m_times) == 0x38);
        static_assert(offsetof(source2sdk::client::CDebugDrawHistoryData, m_uint64s) == 0x48);
        static_assert(offsetof(source2sdk::client::CDebugDrawHistoryData, m_bools) == 0x58);
        static_assert(offsetof(source2sdk::client::CDebugDrawHistoryData, m_strings) == 0x68);
        
        static_assert(sizeof(source2sdk::client::CDebugDrawHistoryData) == 0x78);
    };
};
