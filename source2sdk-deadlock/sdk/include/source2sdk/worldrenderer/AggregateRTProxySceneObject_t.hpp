#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/worldrenderer/RTProxyBLAS_t.hpp"
#include "source2sdk/worldrenderer/RTProxyInstanceInfo_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x68
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AggregateRTProxySceneObject_t
        {
        public:
            std::int16_t m_nLayer; // 0x0            
            uint8_t _pad0002[0x6]; // 0x2
            // m_BLASes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::RTProxyBLAS_t> m_BLASes;
            char m_BLASes[0x18]; // 0x8            
            // m_Instances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::RTProxyInstanceInfo_t> m_Instances;
            char m_Instances[0x18]; // 0x20            
            CUtlBinaryBlock m_VBData; // 0x38            
            CUtlBinaryBlock m_IBData; // 0x48            
            CUtlBinaryBlock m_InstanceAlbedoData; // 0x58            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::AggregateRTProxySceneObject_t, m_nLayer) == 0x0);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateRTProxySceneObject_t, m_BLASes) == 0x8);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateRTProxySceneObject_t, m_Instances) == 0x20);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateRTProxySceneObject_t, m_VBData) == 0x38);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateRTProxySceneObject_t, m_IBData) == 0x48);
        static_assert(offsetof(source2sdk::worldrenderer::AggregateRTProxySceneObject_t, m_InstanceAlbedoData) == 0x58);
        
        static_assert(sizeof(source2sdk::worldrenderer::AggregateRTProxySceneObject_t) == 0x68);
    };
};
