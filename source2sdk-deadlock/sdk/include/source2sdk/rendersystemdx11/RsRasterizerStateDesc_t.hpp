#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/rendersystemdx11/RsCullMode_t.hpp"
#include "source2sdk/rendersystemdx11/RsFillMode_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace rendersystemdx11
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct RsRasterizerStateDesc_t
        {
        public:
            source2sdk::rendersystemdx11::RsFillMode_t m_nFillMode; // 0x0            
            source2sdk::rendersystemdx11::RsCullMode_t m_nCullMode; // 0x1            
            bool m_bDepthClipEnable; // 0x2            
            bool m_bMultisampleEnable; // 0x3            
            std::int32_t m_nDepthBias; // 0x4            
            float m_flDepthBiasClamp; // 0x8            
            float m_flSlopeScaledDepthBias; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t, m_nFillMode) == 0x0);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t, m_nCullMode) == 0x1);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t, m_bDepthClipEnable) == 0x2);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t, m_bMultisampleEnable) == 0x3);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t, m_nDepthBias) == 0x4);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t, m_flDepthBiasClamp) == 0x8);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t, m_flSlopeScaledDepthBias) == 0xc);
        
        static_assert(sizeof(source2sdk::rendersystemdx11::RsRasterizerStateDesc_t) == 0x10);
    };
};
