#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/VertexAlbedoFormat_t.hpp"
#include "source2sdk/worldrenderer/RTProxyInstanceFlags_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x48
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RTProxyInstanceInfo_t
        {
        public:
            source2sdk::worldrenderer::RTProxyInstanceFlags_t m_nFlags; // 0x0            
            source2sdk::modellib::VertexAlbedoFormat_t m_albedoFormat; // 0x1            
            source2sdk::modellib::VertexAlbedoFormat_t m_emissiveFormat; // 0x2            
            uint8_t _pad0003[0x1]; // 0x3
            std::uint16_t m_nBLASCount; // 0x4            
            uint8_t _pad0006[0x2]; // 0x6
            std::uint32_t m_nBLASIndex; // 0x8            
            std::uint32_t m_nVertexAlbedoByteOffset; // 0xc            
            std::uint32_t m_nVertexEmissiveByteOffset; // 0x10            
            float m_fEmissiveFactor; // 0x14            
            matrix3x4_t m_mWorldFromLocal; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_nFlags) == 0x0);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_albedoFormat) == 0x1);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_emissiveFormat) == 0x2);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_nBLASCount) == 0x4);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_nBLASIndex) == 0x8);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_nVertexAlbedoByteOffset) == 0xc);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_nVertexEmissiveByteOffset) == 0x10);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_fEmissiveFactor) == 0x14);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyInstanceInfo_t, m_mWorldFromLocal) == 0x18);
        
        static_assert(sizeof(source2sdk::worldrenderer::RTProxyInstanceInfo_t) == 0x48);
    };
};
